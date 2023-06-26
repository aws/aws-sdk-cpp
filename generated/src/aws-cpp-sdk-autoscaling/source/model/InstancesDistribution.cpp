/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/InstancesDistribution.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

InstancesDistribution::InstancesDistribution() : 
    m_onDemandAllocationStrategyHasBeenSet(false),
    m_onDemandBaseCapacity(0),
    m_onDemandBaseCapacityHasBeenSet(false),
    m_onDemandPercentageAboveBaseCapacity(0),
    m_onDemandPercentageAboveBaseCapacityHasBeenSet(false),
    m_spotAllocationStrategyHasBeenSet(false),
    m_spotInstancePools(0),
    m_spotInstancePoolsHasBeenSet(false),
    m_spotMaxPriceHasBeenSet(false)
{
}

InstancesDistribution::InstancesDistribution(const XmlNode& xmlNode) : 
    m_onDemandAllocationStrategyHasBeenSet(false),
    m_onDemandBaseCapacity(0),
    m_onDemandBaseCapacityHasBeenSet(false),
    m_onDemandPercentageAboveBaseCapacity(0),
    m_onDemandPercentageAboveBaseCapacityHasBeenSet(false),
    m_spotAllocationStrategyHasBeenSet(false),
    m_spotInstancePools(0),
    m_spotInstancePoolsHasBeenSet(false),
    m_spotMaxPriceHasBeenSet(false)
{
  *this = xmlNode;
}

InstancesDistribution& InstancesDistribution::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode onDemandAllocationStrategyNode = resultNode.FirstChild("OnDemandAllocationStrategy");
    if(!onDemandAllocationStrategyNode.IsNull())
    {
      m_onDemandAllocationStrategy = Aws::Utils::Xml::DecodeEscapedXmlText(onDemandAllocationStrategyNode.GetText());
      m_onDemandAllocationStrategyHasBeenSet = true;
    }
    XmlNode onDemandBaseCapacityNode = resultNode.FirstChild("OnDemandBaseCapacity");
    if(!onDemandBaseCapacityNode.IsNull())
    {
      m_onDemandBaseCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(onDemandBaseCapacityNode.GetText()).c_str()).c_str());
      m_onDemandBaseCapacityHasBeenSet = true;
    }
    XmlNode onDemandPercentageAboveBaseCapacityNode = resultNode.FirstChild("OnDemandPercentageAboveBaseCapacity");
    if(!onDemandPercentageAboveBaseCapacityNode.IsNull())
    {
      m_onDemandPercentageAboveBaseCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(onDemandPercentageAboveBaseCapacityNode.GetText()).c_str()).c_str());
      m_onDemandPercentageAboveBaseCapacityHasBeenSet = true;
    }
    XmlNode spotAllocationStrategyNode = resultNode.FirstChild("SpotAllocationStrategy");
    if(!spotAllocationStrategyNode.IsNull())
    {
      m_spotAllocationStrategy = Aws::Utils::Xml::DecodeEscapedXmlText(spotAllocationStrategyNode.GetText());
      m_spotAllocationStrategyHasBeenSet = true;
    }
    XmlNode spotInstancePoolsNode = resultNode.FirstChild("SpotInstancePools");
    if(!spotInstancePoolsNode.IsNull())
    {
      m_spotInstancePools = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(spotInstancePoolsNode.GetText()).c_str()).c_str());
      m_spotInstancePoolsHasBeenSet = true;
    }
    XmlNode spotMaxPriceNode = resultNode.FirstChild("SpotMaxPrice");
    if(!spotMaxPriceNode.IsNull())
    {
      m_spotMaxPrice = Aws::Utils::Xml::DecodeEscapedXmlText(spotMaxPriceNode.GetText());
      m_spotMaxPriceHasBeenSet = true;
    }
  }

  return *this;
}

void InstancesDistribution::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_onDemandAllocationStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".OnDemandAllocationStrategy=" << StringUtils::URLEncode(m_onDemandAllocationStrategy.c_str()) << "&";
  }

  if(m_onDemandBaseCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".OnDemandBaseCapacity=" << m_onDemandBaseCapacity << "&";
  }

  if(m_onDemandPercentageAboveBaseCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".OnDemandPercentageAboveBaseCapacity=" << m_onDemandPercentageAboveBaseCapacity << "&";
  }

  if(m_spotAllocationStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotAllocationStrategy=" << StringUtils::URLEncode(m_spotAllocationStrategy.c_str()) << "&";
  }

  if(m_spotInstancePoolsHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotInstancePools=" << m_spotInstancePools << "&";
  }

  if(m_spotMaxPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotMaxPrice=" << StringUtils::URLEncode(m_spotMaxPrice.c_str()) << "&";
  }

}

void InstancesDistribution::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_onDemandAllocationStrategyHasBeenSet)
  {
      oStream << location << ".OnDemandAllocationStrategy=" << StringUtils::URLEncode(m_onDemandAllocationStrategy.c_str()) << "&";
  }
  if(m_onDemandBaseCapacityHasBeenSet)
  {
      oStream << location << ".OnDemandBaseCapacity=" << m_onDemandBaseCapacity << "&";
  }
  if(m_onDemandPercentageAboveBaseCapacityHasBeenSet)
  {
      oStream << location << ".OnDemandPercentageAboveBaseCapacity=" << m_onDemandPercentageAboveBaseCapacity << "&";
  }
  if(m_spotAllocationStrategyHasBeenSet)
  {
      oStream << location << ".SpotAllocationStrategy=" << StringUtils::URLEncode(m_spotAllocationStrategy.c_str()) << "&";
  }
  if(m_spotInstancePoolsHasBeenSet)
  {
      oStream << location << ".SpotInstancePools=" << m_spotInstancePools << "&";
  }
  if(m_spotMaxPriceHasBeenSet)
  {
      oStream << location << ".SpotMaxPrice=" << StringUtils::URLEncode(m_spotMaxPrice.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
