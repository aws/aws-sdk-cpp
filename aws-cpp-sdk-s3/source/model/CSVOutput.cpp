﻿/*
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

#include <aws/s3/model/CSVOutput.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

CSVOutput::CSVOutput() : 
    m_quoteFields(QuoteFields::NOT_SET),
    m_quoteFieldsHasBeenSet(false),
    m_quoteEscapeCharacterHasBeenSet(false),
    m_recordDelimiterHasBeenSet(false),
    m_fieldDelimiterHasBeenSet(false),
    m_quoteCharacterHasBeenSet(false)
{
}

CSVOutput::CSVOutput(const XmlNode& xmlNode) : 
    m_quoteFields(QuoteFields::NOT_SET),
    m_quoteFieldsHasBeenSet(false),
    m_quoteEscapeCharacterHasBeenSet(false),
    m_recordDelimiterHasBeenSet(false),
    m_fieldDelimiterHasBeenSet(false),
    m_quoteCharacterHasBeenSet(false)
{
  *this = xmlNode;
}

CSVOutput& CSVOutput::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode quoteFieldsNode = resultNode.FirstChild("QuoteFields");
    if(!quoteFieldsNode.IsNull())
    {
      m_quoteFields = QuoteFieldsMapper::GetQuoteFieldsForName(StringUtils::Trim(quoteFieldsNode.GetText().c_str()).c_str());
      m_quoteFieldsHasBeenSet = true;
    }
    XmlNode quoteEscapeCharacterNode = resultNode.FirstChild("QuoteEscapeCharacter");
    if(!quoteEscapeCharacterNode.IsNull())
    {
      m_quoteEscapeCharacter = StringUtils::Trim(quoteEscapeCharacterNode.GetText().c_str());
      m_quoteEscapeCharacterHasBeenSet = true;
    }
    XmlNode recordDelimiterNode = resultNode.FirstChild("RecordDelimiter");
    if(!recordDelimiterNode.IsNull())
    {
      m_recordDelimiter = StringUtils::Trim(recordDelimiterNode.GetText().c_str());
      m_recordDelimiterHasBeenSet = true;
    }
    XmlNode fieldDelimiterNode = resultNode.FirstChild("FieldDelimiter");
    if(!fieldDelimiterNode.IsNull())
    {
      m_fieldDelimiter = StringUtils::Trim(fieldDelimiterNode.GetText().c_str());
      m_fieldDelimiterHasBeenSet = true;
    }
    XmlNode quoteCharacterNode = resultNode.FirstChild("QuoteCharacter");
    if(!quoteCharacterNode.IsNull())
    {
      m_quoteCharacter = StringUtils::Trim(quoteCharacterNode.GetText().c_str());
      m_quoteCharacterHasBeenSet = true;
    }
  }

  return *this;
}

void CSVOutput::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_quoteFieldsHasBeenSet)
  {
   XmlNode quoteFieldsNode = parentNode.CreateChildElement("QuoteFields");
   quoteFieldsNode.SetText(QuoteFieldsMapper::GetNameForQuoteFields(m_quoteFields));
  }

  if(m_quoteEscapeCharacterHasBeenSet)
  {
   XmlNode quoteEscapeCharacterNode = parentNode.CreateChildElement("QuoteEscapeCharacter");
   quoteEscapeCharacterNode.SetText(m_quoteEscapeCharacter);
  }

  if(m_recordDelimiterHasBeenSet)
  {
   XmlNode recordDelimiterNode = parentNode.CreateChildElement("RecordDelimiter");
   recordDelimiterNode.SetText(m_recordDelimiter);
  }

  if(m_fieldDelimiterHasBeenSet)
  {
   XmlNode fieldDelimiterNode = parentNode.CreateChildElement("FieldDelimiter");
   fieldDelimiterNode.SetText(m_fieldDelimiter);
  }

  if(m_quoteCharacterHasBeenSet)
  {
   XmlNode quoteCharacterNode = parentNode.CreateChildElement("QuoteCharacter");
   quoteCharacterNode.SetText(m_quoteCharacter);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
