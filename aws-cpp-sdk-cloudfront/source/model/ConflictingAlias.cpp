/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ConflictingAlias.h>
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

ConflictingAlias::ConflictingAlias() : 
    m_aliasHasBeenSet(false),
    m_distributionIdHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

ConflictingAlias::ConflictingAlias(const XmlNode& xmlNode) : 
    m_aliasHasBeenSet(false),
    m_distributionIdHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = xmlNode;
}

ConflictingAlias& ConflictingAlias::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode aliasNode = resultNode.FirstChild("Alias");
    if(!aliasNode.IsNull())
    {
      m_alias = Aws::Utils::Xml::DecodeEscapedXmlText(aliasNode.GetText());
      m_aliasHasBeenSet = true;
    }
    XmlNode distributionIdNode = resultNode.FirstChild("DistributionId");
    if(!distributionIdNode.IsNull())
    {
      m_distributionId = Aws::Utils::Xml::DecodeEscapedXmlText(distributionIdNode.GetText());
      m_distributionIdHasBeenSet = true;
    }
    XmlNode accountIdNode = resultNode.FirstChild("AccountId");
    if(!accountIdNode.IsNull())
    {
      m_accountId = Aws::Utils::Xml::DecodeEscapedXmlText(accountIdNode.GetText());
      m_accountIdHasBeenSet = true;
    }
  }

  return *this;
}

void ConflictingAlias::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_aliasHasBeenSet)
  {
   XmlNode aliasNode = parentNode.CreateChildElement("Alias");
   aliasNode.SetText(m_alias);
  }

  if(m_distributionIdHasBeenSet)
  {
   XmlNode distributionIdNode = parentNode.CreateChildElement("DistributionId");
   distributionIdNode.SetText(m_distributionId);
  }

  if(m_accountIdHasBeenSet)
  {
   XmlNode accountIdNode = parentNode.CreateChildElement("AccountId");
   accountIdNode.SetText(m_accountId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
