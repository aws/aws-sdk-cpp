/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ElasticGpus.h>
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

ElasticGpus::ElasticGpus() : 
    m_elasticGpuIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_elasticGpuTypeHasBeenSet(false),
    m_elasticGpuHealthHasBeenSet(false),
    m_elasticGpuState(ElasticGpuState::NOT_SET),
    m_elasticGpuStateHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ElasticGpus::ElasticGpus(const XmlNode& xmlNode) : 
    m_elasticGpuIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_elasticGpuTypeHasBeenSet(false),
    m_elasticGpuHealthHasBeenSet(false),
    m_elasticGpuState(ElasticGpuState::NOT_SET),
    m_elasticGpuStateHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ElasticGpus& ElasticGpus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode elasticGpuIdNode = resultNode.FirstChild("elasticGpuId");
    if(!elasticGpuIdNode.IsNull())
    {
      m_elasticGpuId = Aws::Utils::Xml::DecodeEscapedXmlText(elasticGpuIdNode.GetText());
      m_elasticGpuIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode elasticGpuTypeNode = resultNode.FirstChild("elasticGpuType");
    if(!elasticGpuTypeNode.IsNull())
    {
      m_elasticGpuType = Aws::Utils::Xml::DecodeEscapedXmlText(elasticGpuTypeNode.GetText());
      m_elasticGpuTypeHasBeenSet = true;
    }
    XmlNode elasticGpuHealthNode = resultNode.FirstChild("elasticGpuHealth");
    if(!elasticGpuHealthNode.IsNull())
    {
      m_elasticGpuHealth = elasticGpuHealthNode;
      m_elasticGpuHealthHasBeenSet = true;
    }
    XmlNode elasticGpuStateNode = resultNode.FirstChild("elasticGpuState");
    if(!elasticGpuStateNode.IsNull())
    {
      m_elasticGpuState = ElasticGpuStateMapper::GetElasticGpuStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(elasticGpuStateNode.GetText()).c_str()).c_str());
      m_elasticGpuStateHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
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

void ElasticGpus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_elasticGpuIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticGpuId=" << StringUtils::URLEncode(m_elasticGpuId.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_elasticGpuTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticGpuType=" << StringUtils::URLEncode(m_elasticGpuType.c_str()) << "&";
  }

  if(m_elasticGpuHealthHasBeenSet)
  {
      Aws::StringStream elasticGpuHealthLocationAndMemberSs;
      elasticGpuHealthLocationAndMemberSs << location << index << locationValue << ".ElasticGpuHealth";
      m_elasticGpuHealth.OutputToStream(oStream, elasticGpuHealthLocationAndMemberSs.str().c_str());
  }

  if(m_elasticGpuStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticGpuState=" << ElasticGpuStateMapper::GetNameForElasticGpuState(m_elasticGpuState) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
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

void ElasticGpus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_elasticGpuIdHasBeenSet)
  {
      oStream << location << ".ElasticGpuId=" << StringUtils::URLEncode(m_elasticGpuId.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_elasticGpuTypeHasBeenSet)
  {
      oStream << location << ".ElasticGpuType=" << StringUtils::URLEncode(m_elasticGpuType.c_str()) << "&";
  }
  if(m_elasticGpuHealthHasBeenSet)
  {
      Aws::String elasticGpuHealthLocationAndMember(location);
      elasticGpuHealthLocationAndMember += ".ElasticGpuHealth";
      m_elasticGpuHealth.OutputToStream(oStream, elasticGpuHealthLocationAndMember.c_str());
  }
  if(m_elasticGpuStateHasBeenSet)
  {
      oStream << location << ".ElasticGpuState=" << ElasticGpuStateMapper::GetNameForElasticGpuState(m_elasticGpuState) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
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
