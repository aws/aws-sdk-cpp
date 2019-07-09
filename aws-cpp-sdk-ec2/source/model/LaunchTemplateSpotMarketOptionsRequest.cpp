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

#include <aws/ec2/model/LaunchTemplateSpotMarketOptionsRequest.h>
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

LaunchTemplateSpotMarketOptionsRequest::LaunchTemplateSpotMarketOptionsRequest() : 
    m_maxPriceHasBeenSet(false),
    m_spotInstanceType(SpotInstanceType::NOT_SET),
    m_spotInstanceTypeHasBeenSet(false),
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_instanceInterruptionBehavior(InstanceInterruptionBehavior::NOT_SET),
    m_instanceInterruptionBehaviorHasBeenSet(false)
{
}

LaunchTemplateSpotMarketOptionsRequest::LaunchTemplateSpotMarketOptionsRequest(const XmlNode& xmlNode) : 
    m_maxPriceHasBeenSet(false),
    m_spotInstanceType(SpotInstanceType::NOT_SET),
    m_spotInstanceTypeHasBeenSet(false),
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_instanceInterruptionBehavior(InstanceInterruptionBehavior::NOT_SET),
    m_instanceInterruptionBehaviorHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateSpotMarketOptionsRequest& LaunchTemplateSpotMarketOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maxPriceNode = resultNode.FirstChild("MaxPrice");
    if(!maxPriceNode.IsNull())
    {
      m_maxPrice = maxPriceNode.GetText();
      m_maxPriceHasBeenSet = true;
    }
    XmlNode spotInstanceTypeNode = resultNode.FirstChild("SpotInstanceType");
    if(!spotInstanceTypeNode.IsNull())
    {
      m_spotInstanceType = SpotInstanceTypeMapper::GetSpotInstanceTypeForName(StringUtils::Trim(spotInstanceTypeNode.GetText().c_str()).c_str());
      m_spotInstanceTypeHasBeenSet = true;
    }
    XmlNode blockDurationMinutesNode = resultNode.FirstChild("BlockDurationMinutes");
    if(!blockDurationMinutesNode.IsNull())
    {
      m_blockDurationMinutes = StringUtils::ConvertToInt32(StringUtils::Trim(blockDurationMinutesNode.GetText().c_str()).c_str());
      m_blockDurationMinutesHasBeenSet = true;
    }
    XmlNode validUntilNode = resultNode.FirstChild("ValidUntil");
    if(!validUntilNode.IsNull())
    {
      m_validUntil = DateTime(StringUtils::Trim(validUntilNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_validUntilHasBeenSet = true;
    }
    XmlNode instanceInterruptionBehaviorNode = resultNode.FirstChild("InstanceInterruptionBehavior");
    if(!instanceInterruptionBehaviorNode.IsNull())
    {
      m_instanceInterruptionBehavior = InstanceInterruptionBehaviorMapper::GetInstanceInterruptionBehaviorForName(StringUtils::Trim(instanceInterruptionBehaviorNode.GetText().c_str()).c_str());
      m_instanceInterruptionBehaviorHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateSpotMarketOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maxPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxPrice=" << StringUtils::URLEncode(m_maxPrice.c_str()) << "&";
  }

  if(m_spotInstanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotInstanceType=" << SpotInstanceTypeMapper::GetNameForSpotInstanceType(m_spotInstanceType) << "&";
  }

  if(m_blockDurationMinutesHasBeenSet)
  {
      oStream << location << index << locationValue << ".BlockDurationMinutes=" << m_blockDurationMinutes << "&";
  }

  if(m_validUntilHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceInterruptionBehavior=" << InstanceInterruptionBehaviorMapper::GetNameForInstanceInterruptionBehavior(m_instanceInterruptionBehavior) << "&";
  }

}

void LaunchTemplateSpotMarketOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maxPriceHasBeenSet)
  {
      oStream << location << ".MaxPrice=" << StringUtils::URLEncode(m_maxPrice.c_str()) << "&";
  }
  if(m_spotInstanceTypeHasBeenSet)
  {
      oStream << location << ".SpotInstanceType=" << SpotInstanceTypeMapper::GetNameForSpotInstanceType(m_spotInstanceType) << "&";
  }
  if(m_blockDurationMinutesHasBeenSet)
  {
      oStream << location << ".BlockDurationMinutes=" << m_blockDurationMinutes << "&";
  }
  if(m_validUntilHasBeenSet)
  {
      oStream << location << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << ".InstanceInterruptionBehavior=" << InstanceInterruptionBehaviorMapper::GetNameForInstanceInterruptionBehavior(m_instanceInterruptionBehavior) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
