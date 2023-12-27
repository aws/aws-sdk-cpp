/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/KeyValueStoreAssociation.h>
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

KeyValueStoreAssociation::KeyValueStoreAssociation() : 
    m_keyValueStoreARNHasBeenSet(false)
{
}

KeyValueStoreAssociation::KeyValueStoreAssociation(const XmlNode& xmlNode) : 
    m_keyValueStoreARNHasBeenSet(false)
{
  *this = xmlNode;
}

KeyValueStoreAssociation& KeyValueStoreAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyValueStoreARNNode = resultNode.FirstChild("KeyValueStoreARN");
    if(!keyValueStoreARNNode.IsNull())
    {
      m_keyValueStoreARN = Aws::Utils::Xml::DecodeEscapedXmlText(keyValueStoreARNNode.GetText());
      m_keyValueStoreARNHasBeenSet = true;
    }
  }

  return *this;
}

void KeyValueStoreAssociation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_keyValueStoreARNHasBeenSet)
  {
   XmlNode keyValueStoreARNNode = parentNode.CreateChildElement("KeyValueStoreARN");
   keyValueStoreARNNode.SetText(m_keyValueStoreARN);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
