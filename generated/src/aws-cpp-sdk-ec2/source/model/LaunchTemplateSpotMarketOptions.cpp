/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateSpotMarketOptions.h>
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

LaunchTemplateSpotMarketOptions::LaunchTemplateSpotMarketOptions() : 
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

LaunchTemplateSpotMarketOptions::LaunchTemplateSpotMarketOptions(const XmlNode& xmlNode) : 
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

LaunchTemplateSpotMarketOptions& LaunchTemplateSpotMarketOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maxPriceNode = resultNode.FirstChild("maxPrice");
    if(!maxPriceNode.IsNull())
    {
      m_maxPrice = Aws::Utils::Xml::DecodeEscapedXmlText(maxPriceNode.GetText());
      m_maxPriceHasBeenSet = true;
    }
    XmlNode spotInstanceTypeNode = resultNode.FirstChild("spotInstanceType");
    if(!spotInstanceTypeNode.IsNull())
    {
      m_spotInstanceType = SpotInstanceTypeMapper::GetSpotInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(spotInstanceTypeNode.GetText()).c_str()).c_str());
      m_spotInstanceTypeHasBeenSet = true;
    }
    XmlNode blockDurationMinutesNode = resultNode.FirstChild("blockDurationMinutes");
    if(!blockDurationMinutesNode.IsNull())
    {
      m_blockDurationMinutes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(blockDurationMinutesNode.GetText()).c_str()).c_str());
      m_blockDurationMinutesHasBeenSet = true;
    }
    XmlNode validUntilNode = resultNode.FirstChild("validUntil");
    if(!validUntilNode.IsNull())
    {
      m_validUntil = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validUntilNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_validUntilHasBeenSet = true;
    }
    XmlNode instanceInterruptionBehaviorNode = resultNode.FirstChild("instanceInterruptionBehavior");
    if(!instanceInterruptionBehaviorNode.IsNull())
    {
      m_instanceInterruptionBehavior = InstanceInterruptionBehaviorMapper::GetInstanceInterruptionBehaviorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceInterruptionBehaviorNode.GetText()).c_str()).c_str());
      m_instanceInterruptionBehaviorHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateSpotMarketOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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
      oStream << location << index << locationValue << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceInterruptionBehavior=" << InstanceInterruptionBehaviorMapper::GetNameForInstanceInterruptionBehavior(m_instanceInterruptionBehavior) << "&";
  }

}

void LaunchTemplateSpotMarketOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
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
      oStream << location << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << ".InstanceInterruptionBehavior=" << InstanceInterruptionBehaviorMapper::GetNameForInstanceInterruptionBehavior(m_instanceInterruptionBehavior) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
