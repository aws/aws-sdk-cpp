/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/MultiRegionAccessPointRoute.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

MultiRegionAccessPointRoute::MultiRegionAccessPointRoute() : 
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_trafficDialPercentage(0),
    m_trafficDialPercentageHasBeenSet(false)
{
}

MultiRegionAccessPointRoute::MultiRegionAccessPointRoute(const XmlNode& xmlNode) : 
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_trafficDialPercentage(0),
    m_trafficDialPercentageHasBeenSet(false)
{
  *this = xmlNode;
}

MultiRegionAccessPointRoute& MultiRegionAccessPointRoute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText());
      m_regionHasBeenSet = true;
    }
    XmlNode trafficDialPercentageNode = resultNode.FirstChild("TrafficDialPercentage");
    if(!trafficDialPercentageNode.IsNull())
    {
      m_trafficDialPercentage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trafficDialPercentageNode.GetText()).c_str()).c_str());
      m_trafficDialPercentageHasBeenSet = true;
    }
  }

  return *this;
}

void MultiRegionAccessPointRoute::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   bucketNode.SetText(m_bucket);
  }

  if(m_regionHasBeenSet)
  {
   XmlNode regionNode = parentNode.CreateChildElement("Region");
   regionNode.SetText(m_region);
  }

  if(m_trafficDialPercentageHasBeenSet)
  {
   XmlNode trafficDialPercentageNode = parentNode.CreateChildElement("TrafficDialPercentage");
   ss << m_trafficDialPercentage;
   trafficDialPercentageNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
