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

#include <aws/route53/model/HealthCheckObservation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

HealthCheckObservation::HealthCheckObservation() : 
    m_region(HealthCheckRegion::NOT_SET),
    m_regionHasBeenSet(false),
    m_iPAddressHasBeenSet(false),
    m_statusReportHasBeenSet(false)
{
}

HealthCheckObservation::HealthCheckObservation(const XmlNode& xmlNode) : 
    m_region(HealthCheckRegion::NOT_SET),
    m_regionHasBeenSet(false),
    m_iPAddressHasBeenSet(false),
    m_statusReportHasBeenSet(false)
{
  *this = xmlNode;
}

HealthCheckObservation& HealthCheckObservation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = HealthCheckRegionMapper::GetHealthCheckRegionForName(StringUtils::Trim(regionNode.GetText().c_str()).c_str());
      m_regionHasBeenSet = true;
    }
    XmlNode iPAddressNode = resultNode.FirstChild("IPAddress");
    if(!iPAddressNode.IsNull())
    {
      m_iPAddress = iPAddressNode.GetText();
      m_iPAddressHasBeenSet = true;
    }
    XmlNode statusReportNode = resultNode.FirstChild("StatusReport");
    if(!statusReportNode.IsNull())
    {
      m_statusReport = statusReportNode;
      m_statusReportHasBeenSet = true;
    }
  }

  return *this;
}

void HealthCheckObservation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_regionHasBeenSet)
  {
   XmlNode regionNode = parentNode.CreateChildElement("Region");
   regionNode.SetText(HealthCheckRegionMapper::GetNameForHealthCheckRegion(m_region));
  }

  if(m_iPAddressHasBeenSet)
  {
   XmlNode iPAddressNode = parentNode.CreateChildElement("IPAddress");
   iPAddressNode.SetText(m_iPAddress);
  }

  if(m_statusReportHasBeenSet)
  {
   XmlNode statusReportNode = parentNode.CreateChildElement("StatusReport");
   m_statusReport.AddToNode(statusReportNode);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
