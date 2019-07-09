/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/TrafficMirrorFilter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

TrafficMirrorFilter::TrafficMirrorFilter() : 
    m_trafficMirrorFilterIdHasBeenSet(false),
    m_ingressFilterRulesHasBeenSet(false),
    m_egressFilterRulesHasBeenSet(false),
    m_networkServicesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TrafficMirrorFilter::TrafficMirrorFilter(const XmlNode& xmlNode) : 
    m_trafficMirrorFilterIdHasBeenSet(false),
    m_ingressFilterRulesHasBeenSet(false),
    m_egressFilterRulesHasBeenSet(false),
    m_networkServicesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficMirrorFilter& TrafficMirrorFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode trafficMirrorFilterIdNode = resultNode.FirstChild("trafficMirrorFilterId");
    if(!trafficMirrorFilterIdNode.IsNull())
    {
      m_trafficMirrorFilterId = trafficMirrorFilterIdNode.GetText();
      m_trafficMirrorFilterIdHasBeenSet = true;
    }
    XmlNode ingressFilterRulesNode = resultNode.FirstChild("ingressFilterRuleSet");
    if(!ingressFilterRulesNode.IsNull())
    {
      XmlNode ingressFilterRulesMember = ingressFilterRulesNode.FirstChild("item");
      while(!ingressFilterRulesMember.IsNull())
      {
        m_ingressFilterRules.push_back(ingressFilterRulesMember);
        ingressFilterRulesMember = ingressFilterRulesMember.NextNode("item");
      }

      m_ingressFilterRulesHasBeenSet = true;
    }
    XmlNode egressFilterRulesNode = resultNode.FirstChild("egressFilterRuleSet");
    if(!egressFilterRulesNode.IsNull())
    {
      XmlNode egressFilterRulesMember = egressFilterRulesNode.FirstChild("item");
      while(!egressFilterRulesMember.IsNull())
      {
        m_egressFilterRules.push_back(egressFilterRulesMember);
        egressFilterRulesMember = egressFilterRulesMember.NextNode("item");
      }

      m_egressFilterRulesHasBeenSet = true;
    }
    XmlNode networkServicesNode = resultNode.FirstChild("networkServiceSet");
    if(!networkServicesNode.IsNull())
    {
      XmlNode networkServicesMember = networkServicesNode.FirstChild("item");
      while(!networkServicesMember.IsNull())
      {
        m_networkServices.push_back(TrafficMirrorNetworkServiceMapper::GetTrafficMirrorNetworkServiceForName(StringUtils::Trim(networkServicesMember.GetText().c_str())));
        networkServicesMember = networkServicesMember.NextNode("item");
      }

      m_networkServicesHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void TrafficMirrorFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_trafficMirrorFilterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficMirrorFilterId=" << StringUtils::URLEncode(m_trafficMirrorFilterId.c_str()) << "&";
  }

  if(m_ingressFilterRulesHasBeenSet)
  {
      unsigned ingressFilterRulesIdx = 1;
      for(auto& item : m_ingressFilterRules)
      {
        Aws::StringStream ingressFilterRulesSs;
        ingressFilterRulesSs << location << index << locationValue << ".IngressFilterRuleSet." << ingressFilterRulesIdx++;
        item.OutputToStream(oStream, ingressFilterRulesSs.str().c_str());
      }
  }

  if(m_egressFilterRulesHasBeenSet)
  {
      unsigned egressFilterRulesIdx = 1;
      for(auto& item : m_egressFilterRules)
      {
        Aws::StringStream egressFilterRulesSs;
        egressFilterRulesSs << location << index << locationValue << ".EgressFilterRuleSet." << egressFilterRulesIdx++;
        item.OutputToStream(oStream, egressFilterRulesSs.str().c_str());
      }
  }

  if(m_networkServicesHasBeenSet)
  {
      unsigned networkServicesIdx = 1;
      for(auto& item : m_networkServices)
      {
        oStream << location << index << locationValue << ".NetworkServiceSet." << networkServicesIdx++ << "=" << TrafficMirrorNetworkServiceMapper::GetNameForTrafficMirrorNetworkService(item) << "&";
      }
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void TrafficMirrorFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_trafficMirrorFilterIdHasBeenSet)
  {
      oStream << location << ".TrafficMirrorFilterId=" << StringUtils::URLEncode(m_trafficMirrorFilterId.c_str()) << "&";
  }
  if(m_ingressFilterRulesHasBeenSet)
  {
      unsigned ingressFilterRulesIdx = 1;
      for(auto& item : m_ingressFilterRules)
      {
        Aws::StringStream ingressFilterRulesSs;
        ingressFilterRulesSs << location <<  ".IngressFilterRuleSet." << ingressFilterRulesIdx++;
        item.OutputToStream(oStream, ingressFilterRulesSs.str().c_str());
      }
  }
  if(m_egressFilterRulesHasBeenSet)
  {
      unsigned egressFilterRulesIdx = 1;
      for(auto& item : m_egressFilterRules)
      {
        Aws::StringStream egressFilterRulesSs;
        egressFilterRulesSs << location <<  ".EgressFilterRuleSet." << egressFilterRulesIdx++;
        item.OutputToStream(oStream, egressFilterRulesSs.str().c_str());
      }
  }
  if(m_networkServicesHasBeenSet)
  {
      unsigned networkServicesIdx = 1;
      for(auto& item : m_networkServices)
      {
        oStream << location << ".NetworkServiceSet." << networkServicesIdx++ << "=" << TrafficMirrorNetworkServiceMapper::GetNameForTrafficMirrorNetworkService(item) << "&";
      }
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
