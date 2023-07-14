/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/BlobAttributeValue.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

BlobAttributeValue::BlobAttributeValue() : 
    m_valueHasBeenSet(false)
{
}

BlobAttributeValue::BlobAttributeValue(const XmlNode& xmlNode) : 
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

BlobAttributeValue& BlobAttributeValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode valueNode = resultNode.FirstChild("value");
    if(!valueNode.IsNull())
    {
      m_value = HashingUtils::Base64Decode(Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText()));
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void BlobAttributeValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_value).c_str()) << "&";
  }

}

void BlobAttributeValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_value).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
