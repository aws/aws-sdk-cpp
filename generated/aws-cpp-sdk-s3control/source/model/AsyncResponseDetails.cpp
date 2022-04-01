/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/AsyncResponseDetails.h>
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

AsyncResponseDetails::AsyncResponseDetails() : 
    m_multiRegionAccessPointDetailsHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
}

AsyncResponseDetails::AsyncResponseDetails(const XmlNode& xmlNode) : 
    m_multiRegionAccessPointDetailsHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

AsyncResponseDetails& AsyncResponseDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode multiRegionAccessPointDetailsNode = resultNode.FirstChild("MultiRegionAccessPointDetails");
    if(!multiRegionAccessPointDetailsNode.IsNull())
    {
      m_multiRegionAccessPointDetails = multiRegionAccessPointDetailsNode;
      m_multiRegionAccessPointDetailsHasBeenSet = true;
    }
    XmlNode errorDetailsNode = resultNode.FirstChild("ErrorDetails");
    if(!errorDetailsNode.IsNull())
    {
      m_errorDetails = errorDetailsNode;
      m_errorDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void AsyncResponseDetails::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_multiRegionAccessPointDetailsHasBeenSet)
  {
   XmlNode multiRegionAccessPointDetailsNode = parentNode.CreateChildElement("MultiRegionAccessPointDetails");
   m_multiRegionAccessPointDetails.AddToNode(multiRegionAccessPointDetailsNode);
  }

  if(m_errorDetailsHasBeenSet)
  {
   XmlNode errorDetailsNode = parentNode.CreateChildElement("ErrorDetails");
   m_errorDetails.AddToNode(errorDetailsNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
