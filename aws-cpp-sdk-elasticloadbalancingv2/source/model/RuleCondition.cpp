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

#include <aws/elasticloadbalancingv2/model/RuleCondition.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

RuleCondition::RuleCondition() : 
    m_fieldHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_hostHeaderConfigHasBeenSet(false),
    m_pathPatternConfigHasBeenSet(false),
    m_httpHeaderConfigHasBeenSet(false),
    m_queryStringConfigHasBeenSet(false),
    m_httpRequestMethodConfigHasBeenSet(false),
    m_sourceIpConfigHasBeenSet(false)
{
}

RuleCondition::RuleCondition(const XmlNode& xmlNode) : 
    m_fieldHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_hostHeaderConfigHasBeenSet(false),
    m_pathPatternConfigHasBeenSet(false),
    m_httpHeaderConfigHasBeenSet(false),
    m_queryStringConfigHasBeenSet(false),
    m_httpRequestMethodConfigHasBeenSet(false),
    m_sourceIpConfigHasBeenSet(false)
{
  *this = xmlNode;
}

RuleCondition& RuleCondition::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fieldNode = resultNode.FirstChild("Field");
    if(!fieldNode.IsNull())
    {
      m_field = fieldNode.GetText();
      m_fieldHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("Values");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("member");
      while(!valuesMember.IsNull())
      {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
    XmlNode hostHeaderConfigNode = resultNode.FirstChild("HostHeaderConfig");
    if(!hostHeaderConfigNode.IsNull())
    {
      m_hostHeaderConfig = hostHeaderConfigNode;
      m_hostHeaderConfigHasBeenSet = true;
    }
    XmlNode pathPatternConfigNode = resultNode.FirstChild("PathPatternConfig");
    if(!pathPatternConfigNode.IsNull())
    {
      m_pathPatternConfig = pathPatternConfigNode;
      m_pathPatternConfigHasBeenSet = true;
    }
    XmlNode httpHeaderConfigNode = resultNode.FirstChild("HttpHeaderConfig");
    if(!httpHeaderConfigNode.IsNull())
    {
      m_httpHeaderConfig = httpHeaderConfigNode;
      m_httpHeaderConfigHasBeenSet = true;
    }
    XmlNode queryStringConfigNode = resultNode.FirstChild("QueryStringConfig");
    if(!queryStringConfigNode.IsNull())
    {
      m_queryStringConfig = queryStringConfigNode;
      m_queryStringConfigHasBeenSet = true;
    }
    XmlNode httpRequestMethodConfigNode = resultNode.FirstChild("HttpRequestMethodConfig");
    if(!httpRequestMethodConfigNode.IsNull())
    {
      m_httpRequestMethodConfig = httpRequestMethodConfigNode;
      m_httpRequestMethodConfigHasBeenSet = true;
    }
    XmlNode sourceIpConfigNode = resultNode.FirstChild("SourceIpConfig");
    if(!sourceIpConfigNode.IsNull())
    {
      m_sourceIpConfig = sourceIpConfigNode;
      m_sourceIpConfigHasBeenSet = true;
    }
  }

  return *this;
}

void RuleCondition::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fieldHasBeenSet)
  {
      oStream << location << index << locationValue << ".Field=" << StringUtils::URLEncode(m_field.c_str()) << "&";
  }

  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << index << locationValue << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_hostHeaderConfigHasBeenSet)
  {
      Aws::StringStream hostHeaderConfigLocationAndMemberSs;
      hostHeaderConfigLocationAndMemberSs << location << index << locationValue << ".HostHeaderConfig";
      m_hostHeaderConfig.OutputToStream(oStream, hostHeaderConfigLocationAndMemberSs.str().c_str());
  }

  if(m_pathPatternConfigHasBeenSet)
  {
      Aws::StringStream pathPatternConfigLocationAndMemberSs;
      pathPatternConfigLocationAndMemberSs << location << index << locationValue << ".PathPatternConfig";
      m_pathPatternConfig.OutputToStream(oStream, pathPatternConfigLocationAndMemberSs.str().c_str());
  }

  if(m_httpHeaderConfigHasBeenSet)
  {
      Aws::StringStream httpHeaderConfigLocationAndMemberSs;
      httpHeaderConfigLocationAndMemberSs << location << index << locationValue << ".HttpHeaderConfig";
      m_httpHeaderConfig.OutputToStream(oStream, httpHeaderConfigLocationAndMemberSs.str().c_str());
  }

  if(m_queryStringConfigHasBeenSet)
  {
      Aws::StringStream queryStringConfigLocationAndMemberSs;
      queryStringConfigLocationAndMemberSs << location << index << locationValue << ".QueryStringConfig";
      m_queryStringConfig.OutputToStream(oStream, queryStringConfigLocationAndMemberSs.str().c_str());
  }

  if(m_httpRequestMethodConfigHasBeenSet)
  {
      Aws::StringStream httpRequestMethodConfigLocationAndMemberSs;
      httpRequestMethodConfigLocationAndMemberSs << location << index << locationValue << ".HttpRequestMethodConfig";
      m_httpRequestMethodConfig.OutputToStream(oStream, httpRequestMethodConfigLocationAndMemberSs.str().c_str());
  }

  if(m_sourceIpConfigHasBeenSet)
  {
      Aws::StringStream sourceIpConfigLocationAndMemberSs;
      sourceIpConfigLocationAndMemberSs << location << index << locationValue << ".SourceIpConfig";
      m_sourceIpConfig.OutputToStream(oStream, sourceIpConfigLocationAndMemberSs.str().c_str());
  }

}

void RuleCondition::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fieldHasBeenSet)
  {
      oStream << location << ".Field=" << StringUtils::URLEncode(m_field.c_str()) << "&";
  }
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_hostHeaderConfigHasBeenSet)
  {
      Aws::String hostHeaderConfigLocationAndMember(location);
      hostHeaderConfigLocationAndMember += ".HostHeaderConfig";
      m_hostHeaderConfig.OutputToStream(oStream, hostHeaderConfigLocationAndMember.c_str());
  }
  if(m_pathPatternConfigHasBeenSet)
  {
      Aws::String pathPatternConfigLocationAndMember(location);
      pathPatternConfigLocationAndMember += ".PathPatternConfig";
      m_pathPatternConfig.OutputToStream(oStream, pathPatternConfigLocationAndMember.c_str());
  }
  if(m_httpHeaderConfigHasBeenSet)
  {
      Aws::String httpHeaderConfigLocationAndMember(location);
      httpHeaderConfigLocationAndMember += ".HttpHeaderConfig";
      m_httpHeaderConfig.OutputToStream(oStream, httpHeaderConfigLocationAndMember.c_str());
  }
  if(m_queryStringConfigHasBeenSet)
  {
      Aws::String queryStringConfigLocationAndMember(location);
      queryStringConfigLocationAndMember += ".QueryStringConfig";
      m_queryStringConfig.OutputToStream(oStream, queryStringConfigLocationAndMember.c_str());
  }
  if(m_httpRequestMethodConfigHasBeenSet)
  {
      Aws::String httpRequestMethodConfigLocationAndMember(location);
      httpRequestMethodConfigLocationAndMember += ".HttpRequestMethodConfig";
      m_httpRequestMethodConfig.OutputToStream(oStream, httpRequestMethodConfigLocationAndMember.c_str());
  }
  if(m_sourceIpConfigHasBeenSet)
  {
      Aws::String sourceIpConfigLocationAndMember(location);
      sourceIpConfigLocationAndMember += ".SourceIpConfig";
      m_sourceIpConfig.OutputToStream(oStream, sourceIpConfigLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
