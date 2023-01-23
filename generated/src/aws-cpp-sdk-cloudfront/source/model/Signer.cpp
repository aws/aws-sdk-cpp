/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/Signer.h>
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

Signer::Signer() : 
    m_awsAccountNumberHasBeenSet(false),
    m_keyPairIdsHasBeenSet(false)
{
}

Signer::Signer(const XmlNode& xmlNode) : 
    m_awsAccountNumberHasBeenSet(false),
    m_keyPairIdsHasBeenSet(false)
{
  *this = xmlNode;
}

Signer& Signer::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode awsAccountNumberNode = resultNode.FirstChild("AwsAccountNumber");
    if(!awsAccountNumberNode.IsNull())
    {
      m_awsAccountNumber = Aws::Utils::Xml::DecodeEscapedXmlText(awsAccountNumberNode.GetText());
      m_awsAccountNumberHasBeenSet = true;
    }
    XmlNode keyPairIdsNode = resultNode.FirstChild("KeyPairIds");
    if(!keyPairIdsNode.IsNull())
    {
      m_keyPairIds = keyPairIdsNode;
      m_keyPairIdsHasBeenSet = true;
    }
  }

  return *this;
}

void Signer::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_awsAccountNumberHasBeenSet)
  {
   XmlNode awsAccountNumberNode = parentNode.CreateChildElement("AwsAccountNumber");
   awsAccountNumberNode.SetText(m_awsAccountNumber);
  }

  if(m_keyPairIdsHasBeenSet)
  {
   XmlNode keyPairIdsNode = parentNode.CreateChildElement("KeyPairIds");
   m_keyPairIds.AddToNode(keyPairIdsNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
