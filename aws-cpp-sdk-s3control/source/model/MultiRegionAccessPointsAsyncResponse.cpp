/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/MultiRegionAccessPointsAsyncResponse.h>
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

MultiRegionAccessPointsAsyncResponse::MultiRegionAccessPointsAsyncResponse() : 
    m_regionsHasBeenSet(false)
{
}

MultiRegionAccessPointsAsyncResponse::MultiRegionAccessPointsAsyncResponse(const XmlNode& xmlNode) : 
    m_regionsHasBeenSet(false)
{
  *this = xmlNode;
}

MultiRegionAccessPointsAsyncResponse& MultiRegionAccessPointsAsyncResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode regionsNode = resultNode.FirstChild("Regions");
    if(!regionsNode.IsNull())
    {
      XmlNode regionsMember = regionsNode.FirstChild("Region");
      while(!regionsMember.IsNull())
      {
        m_regions.push_back(regionsMember);
        regionsMember = regionsMember.NextNode("Region");
      }

      m_regionsHasBeenSet = true;
    }
  }

  return *this;
}

void MultiRegionAccessPointsAsyncResponse::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_regionsHasBeenSet)
  {
   XmlNode regionsParentNode = parentNode.CreateChildElement("Regions");
   for(const auto& item : m_regions)
   {
     XmlNode regionsNode = regionsParentNode.CreateChildElement("Region");
     item.AddToNode(regionsNode);
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
