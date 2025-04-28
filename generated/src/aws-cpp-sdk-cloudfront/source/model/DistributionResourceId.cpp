/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DistributionResourceId.h>
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

DistributionResourceId::DistributionResourceId(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DistributionResourceId& DistributionResourceId::operator =(const XmlNode& xmlNode)
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
    XmlNode distributionTenantIdNode = resultNode.FirstChild("DistributionTenantId");
    if(!distributionTenantIdNode.IsNull())
    {
      m_distributionTenantId = Aws::Utils::Xml::DecodeEscapedXmlText(distributionTenantIdNode.GetText());
      m_distributionTenantIdHasBeenSet = true;
    }
  }

  return *this;
}

void DistributionResourceId::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_distributionIdHasBeenSet)
  {
   XmlNode distributionIdNode = parentNode.CreateChildElement("DistributionId");
   distributionIdNode.SetText(m_distributionId);
  }

  if(m_distributionTenantIdHasBeenSet)
  {
   XmlNode distributionTenantIdNode = parentNode.CreateChildElement("DistributionTenantId");
   distributionTenantIdNode.SetText(m_distributionTenantId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
