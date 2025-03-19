/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AvailabilityZoneImpairmentPolicy.h>
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

AvailabilityZoneImpairmentPolicy::AvailabilityZoneImpairmentPolicy(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AvailabilityZoneImpairmentPolicy& AvailabilityZoneImpairmentPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode zonalShiftEnabledNode = resultNode.FirstChild("ZonalShiftEnabled");
    if(!zonalShiftEnabledNode.IsNull())
    {
      m_zonalShiftEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(zonalShiftEnabledNode.GetText()).c_str()).c_str());
      m_zonalShiftEnabledHasBeenSet = true;
    }
    XmlNode impairedZoneHealthCheckBehaviorNode = resultNode.FirstChild("ImpairedZoneHealthCheckBehavior");
    if(!impairedZoneHealthCheckBehaviorNode.IsNull())
    {
      m_impairedZoneHealthCheckBehavior = ImpairedZoneHealthCheckBehaviorMapper::GetImpairedZoneHealthCheckBehaviorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(impairedZoneHealthCheckBehaviorNode.GetText()).c_str()));
      m_impairedZoneHealthCheckBehaviorHasBeenSet = true;
    }
  }

  return *this;
}

void AvailabilityZoneImpairmentPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_zonalShiftEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ZonalShiftEnabled=" << std::boolalpha << m_zonalShiftEnabled << "&";
  }

  if(m_impairedZoneHealthCheckBehaviorHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImpairedZoneHealthCheckBehavior=" << StringUtils::URLEncode(ImpairedZoneHealthCheckBehaviorMapper::GetNameForImpairedZoneHealthCheckBehavior(m_impairedZoneHealthCheckBehavior)) << "&";
  }

}

void AvailabilityZoneImpairmentPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_zonalShiftEnabledHasBeenSet)
  {
      oStream << location << ".ZonalShiftEnabled=" << std::boolalpha << m_zonalShiftEnabled << "&";
  }
  if(m_impairedZoneHealthCheckBehaviorHasBeenSet)
  {
      oStream << location << ".ImpairedZoneHealthCheckBehavior=" << StringUtils::URLEncode(ImpairedZoneHealthCheckBehaviorMapper::GetNameForImpairedZoneHealthCheckBehavior(m_impairedZoneHealthCheckBehavior)) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
