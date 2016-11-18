﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sqs/model/MessageAttributeValue.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SQS
{
namespace Model
{

MessageAttributeValue::MessageAttributeValue() : 
    m_stringValueHasBeenSet(false),
    m_binaryValueHasBeenSet(false),
    m_stringListValuesHasBeenSet(false),
    m_binaryListValuesHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

MessageAttributeValue::MessageAttributeValue(const XmlNode& xmlNode) : 
    m_stringValueHasBeenSet(false),
    m_binaryValueHasBeenSet(false),
    m_stringListValuesHasBeenSet(false),
    m_binaryListValuesHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
  *this = xmlNode;
}

MessageAttributeValue& MessageAttributeValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stringValueNode = resultNode.FirstChild("StringValue");
    if(!stringValueNode.IsNull())
    {
      m_stringValue = StringUtils::Trim(stringValueNode.GetText().c_str());
      m_stringValueHasBeenSet = true;
    }
    XmlNode binaryValueNode = resultNode.FirstChild("BinaryValue");
    if(!binaryValueNode.IsNull())
    {
      m_binaryValue = HashingUtils::Base64Decode(StringUtils::Trim(binaryValueNode.GetText().c_str()));
      m_binaryValueHasBeenSet = true;
    }
    XmlNode stringListValuesNode = resultNode.FirstChild("StringListValue");
    if(!stringListValuesNode.IsNull())
    {
      XmlNode stringListValueMember = stringListValuesNode;
      while(!stringListValueMember.IsNull())
      {
        m_stringListValues.push_back(StringUtils::Trim(stringListValueMember.GetText().c_str()));
        stringListValueMember = stringListValueMember.NextNode("StringListValue");
      }

      m_stringListValuesHasBeenSet = true;
    }
    XmlNode binaryListValuesNode = resultNode.FirstChild("BinaryListValue");
    if(!binaryListValuesNode.IsNull())
    {
      XmlNode binaryListValueMember = binaryListValuesNode;
      while(!binaryListValueMember.IsNull())
      {
        binaryListValueMember = binaryListValueMember.NextNode("BinaryListValue");
      }

      m_binaryListValuesHasBeenSet = true;
    }
    XmlNode dataTypeNode = resultNode.FirstChild("DataType");
    if(!dataTypeNode.IsNull())
    {
      m_dataType = StringUtils::Trim(dataTypeNode.GetText().c_str());
      m_dataTypeHasBeenSet = true;
    }
  }

  return *this;
}

void MessageAttributeValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stringValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".StringValue=" << StringUtils::URLEncode(m_stringValue.c_str()) << "&";
  }

  if(m_binaryValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".BinaryValue=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_binaryValue).c_str()) << "&";
  }

  if(m_stringListValuesHasBeenSet)
  {
      unsigned stringListValuesIdx = 1;
      for(auto& item : m_stringListValues)
      {
        oStream << location << index << locationValue << ".StringListValue." << stringListValuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_binaryListValuesHasBeenSet)
  {
      unsigned binaryListValuesIdx = 1;
      for(auto& item : m_binaryListValues)
      {
        oStream << location << index << locationValue << ".BinaryListValue." << binaryListValuesIdx++ << "=" << StringUtils::URLEncode(HashingUtils::Base64Encode(item).c_str()) << "&";
      }
  }

  if(m_dataTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DataType=" << StringUtils::URLEncode(m_dataType.c_str()) << "&";
  }

}

void MessageAttributeValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stringValueHasBeenSet)
  {
      oStream << location << ".StringValue=" << StringUtils::URLEncode(m_stringValue.c_str()) << "&";
  }
  if(m_binaryValueHasBeenSet)
  {
      oStream << location << ".BinaryValue=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_binaryValue).c_str()) << "&";
  }
  if(m_stringListValuesHasBeenSet)
  {
      unsigned stringListValuesIdx = 1;
      for(auto& item : m_stringListValues)
      {
        oStream << location << ".StringListValue." << stringListValuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_binaryListValuesHasBeenSet)
  {
      unsigned binaryListValuesIdx = 1;
      for(auto& item : m_binaryListValues)
      {
        oStream << location << ".BinaryListValue." << binaryListValuesIdx++ << "=" << StringUtils::URLEncode(HashingUtils::Base64Encode(item).c_str()) << "&";
      }
  }
  if(m_dataTypeHasBeenSet)
  {
      oStream << location << ".DataType=" << StringUtils::URLEncode(m_dataType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SQS
} // namespace Aws
