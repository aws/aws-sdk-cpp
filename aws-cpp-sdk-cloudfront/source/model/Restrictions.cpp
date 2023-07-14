/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/Restrictions.h>
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

Restrictions::Restrictions() : 
    m_geoRestrictionHasBeenSet(false)
{
}

Restrictions::Restrictions(const XmlNode& xmlNode) : 
    m_geoRestrictionHasBeenSet(false)
{
  *this = xmlNode;
}

Restrictions& Restrictions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode geoRestrictionNode = resultNode.FirstChild("GeoRestriction");
    if(!geoRestrictionNode.IsNull())
    {
      m_geoRestriction = geoRestrictionNode;
      m_geoRestrictionHasBeenSet = true;
    }
  }

  return *this;
}

void Restrictions::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_geoRestrictionHasBeenSet)
  {
   XmlNode geoRestrictionNode = parentNode.CreateChildElement("GeoRestriction");
   m_geoRestriction.AddToNode(geoRestrictionNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
