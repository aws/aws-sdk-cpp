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
    m_instanceIdHasBeenSet(false)
{
}

ElasticGpus::ElasticGpus(const XmlNode& xmlNode) : 
    m_elasticGpuIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_elasticGpuTypeHasBeenSet(false),
    m_elasticGpuHealthHasBeenSet(false),
    m_elasticGpuState(ElasticGpuState::NOT_SET),
    m_elasticGpuStateHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
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
      m_elasticGpuId = elasticGpuIdNode.GetText();
      m_elasticGpuIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode elasticGpuTypeNode = resultNode.FirstChild("elasticGpuType");
    if(!elasticGpuTypeNode.IsNull())
    {
      m_elasticGpuType = elasticGpuTypeNode.GetText();
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
      m_elasticGpuState = ElasticGpuStateMapper::GetElasticGpuStateForName(StringUtils::Trim(elasticGpuStateNode.GetText().c_str()).c_str());
      m_elasticGpuStateHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
