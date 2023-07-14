/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginGroupFailoverCriteria.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

OriginGroupFailoverCriteria::OriginGroupFailoverCriteria() : 
    m_statusCodesHasBeenSet(false)
{
}

OriginGroupFailoverCriteria::OriginGroupFailoverCriteria(const XmlNode& xmlNode) : 
    m_statusCodesHasBeenSet(false)
{
  *this = xmlNode;
}

OriginGroupFailoverCriteria& OriginGroupFailoverCriteria::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusCodesNode = resultNode.FirstChild("StatusCodes");
    if(!statusCodesNode.IsNull())
    {
      m_statusCodes = statusCodesNode;
      m_statusCodesHasBeenSet = true;
    }
  }

  return *this;
}

void OriginGroupFailoverCriteria::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_statusCodesHasBeenSet)
  {
   XmlNode statusCodesNode = parentNode.CreateChildElement("StatusCodes");
   m_statusCodes.AddToNode(statusCodesNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
