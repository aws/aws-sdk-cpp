/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DistributionTenantAssociationFilter.h>
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

DistributionTenantAssociationFilter::DistributionTenantAssociationFilter(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DistributionTenantAssociationFilter& DistributionTenantAssociationFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode distributionIdNode = resultNode.FirstChild("DistributionId");
    if(!distributionIdNode.IsNull())
    {
      m_distributionId = Aws::Utils::Xml::DecodeEscapedXmlText(distributionIdNode.GetText());
      m_distributionIdHasBeenSet = true;
    }
    XmlNode connectionGroupIdNode = resultNode.FirstChild("ConnectionGroupId");
    if(!connectionGroupIdNode.IsNull())
    {
      m_connectionGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(connectionGroupIdNode.GetText());
      m_connectionGroupIdHasBeenSet = true;
    }
  }

  return *this;
}

void DistributionTenantAssociationFilter::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_distributionIdHasBeenSet)
  {
   XmlNode distributionIdNode = parentNode.CreateChildElement("DistributionId");
   distributionIdNode.SetText(m_distributionId);
  }

  if(m_connectionGroupIdHasBeenSet)
  {
   XmlNode connectionGroupIdNode = parentNode.CreateChildElement("ConnectionGroupId");
   connectionGroupIdNode.SetText(m_connectionGroupId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
