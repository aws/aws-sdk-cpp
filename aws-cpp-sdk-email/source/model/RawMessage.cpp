/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/RawMessage.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

RawMessage::RawMessage() : 
    m_dataHasBeenSet(false)
{
}

RawMessage::RawMessage(const XmlNode& xmlNode) : 
    m_dataHasBeenSet(false)
{
  *this = xmlNode;
}

RawMessage& RawMessage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dataNode = resultNode.FirstChild("Data");
    if(!dataNode.IsNull())
    {
      m_data = HashingUtils::Base64Decode(Aws::Utils::Xml::DecodeEscapedXmlText(dataNode.GetText()));
      m_dataHasBeenSet = true;
    }
  }

  return *this;
}

void RawMessage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dataHasBeenSet)
  {
      oStream << location << index << locationValue << ".Data=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_data).c_str()) << "&";
  }

}

void RawMessage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dataHasBeenSet)
  {
      oStream << location << ".Data=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_data).c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
