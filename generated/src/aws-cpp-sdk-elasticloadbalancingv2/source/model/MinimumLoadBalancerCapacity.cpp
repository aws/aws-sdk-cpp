/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/MinimumLoadBalancerCapacity.h>
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

MinimumLoadBalancerCapacity::MinimumLoadBalancerCapacity(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MinimumLoadBalancerCapacity& MinimumLoadBalancerCapacity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityUnitsNode = resultNode.FirstChild("CapacityUnits");
    if(!capacityUnitsNode.IsNull())
    {
      m_capacityUnits = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityUnitsNode.GetText()).c_str()).c_str());
      m_capacityUnitsHasBeenSet = true;
    }
  }

  return *this;
}

void MinimumLoadBalancerCapacity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityUnitsHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityUnits=" << m_capacityUnits << "&";
  }

}

void MinimumLoadBalancerCapacity::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityUnitsHasBeenSet)
  {
      oStream << location << ".CapacityUnits=" << m_capacityUnits << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
