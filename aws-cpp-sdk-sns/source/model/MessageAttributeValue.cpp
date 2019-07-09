/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sns/model/MessageAttributeValue.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SNS
{
namespace Model
{

MessageAttributeValue::MessageAttributeValue() : 
    m_dataTypeHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_binaryValueHasBeenSet(false)
{
}

MessageAttributeValue::MessageAttributeValue(const XmlNode& xmlNode) : 
    m_dataTypeHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_binaryValueHasBeenSet(false)
{
  *this = xmlNode;
}

MessageAttributeValue& MessageAttributeValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dataTypeNode = resultNode.FirstChild("DataType");
    if(!dataTypeNode.IsNull())
    {
      m_dataType = dataTypeNode.GetText();
      m_dataTypeHasBeenSet = true;
    }
    XmlNode stringValueNode = resultNode.FirstChild("StringValue");
    if(!stringValueNode.IsNull())
    {
      m_stringValue = stringValueNode.GetText();
      m_stringValueHasBeenSet = true;
    }
    XmlNode binaryValueNode = resultNode.FirstChild("BinaryValue");
    if(!binaryValueNode.IsNull())
    {
      m_binaryValue = HashingUtils::Base64Decode(binaryValueNode.GetText());
      m_binaryValueHasBeenSet = true;
    }
  }

  return *this;
}

void MessageAttributeValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dataTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DataType=" << StringUtils::URLEncode(m_dataType.c_str()) << "&";
  }

  if(m_stringValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".StringValue=" << StringUtils::URLEncode(m_stringValue.c_str()) << "&";
  }

  if(m_binaryValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".BinaryValue=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_binaryValue).c_str()) << "&";
  }

}

void MessageAttributeValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dataTypeHasBeenSet)
  {
      oStream << location << ".DataType=" << StringUtils::URLEncode(m_dataType.c_str()) << "&";
  }
  if(m_stringValueHasBeenSet)
  {
      oStream << location << ".StringValue=" << StringUtils::URLEncode(m_stringValue.c_str()) << "&";
  }
  if(m_binaryValueHasBeenSet)
  {
      oStream << location << ".BinaryValue=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_binaryValue).c_str()) << "&";
  }
}

} // namespace Model
} // namespace SNS
} // namespace Aws
