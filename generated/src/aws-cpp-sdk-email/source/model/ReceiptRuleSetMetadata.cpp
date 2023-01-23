/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ReceiptRuleSetMetadata.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

ReceiptRuleSetMetadata::ReceiptRuleSetMetadata() : 
    m_nameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

ReceiptRuleSetMetadata::ReceiptRuleSetMetadata(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = xmlNode;
}

ReceiptRuleSetMetadata& ReceiptRuleSetMetadata::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode createdTimestampNode = resultNode.FirstChild("CreatedTimestamp");
    if(!createdTimestampNode.IsNull())
    {
      m_createdTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void ReceiptRuleSetMetadata::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_createdTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedTimestamp=" << StringUtils::URLEncode(m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ReceiptRuleSetMetadata::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_createdTimestampHasBeenSet)
  {
      oStream << location << ".CreatedTimestamp=" << StringUtils::URLEncode(m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
