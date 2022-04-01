/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/BulkEmailDestinationStatus.h>
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

BulkEmailDestinationStatus::BulkEmailDestinationStatus() : 
    m_status(BulkEmailStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_messageIdHasBeenSet(false)
{
}

BulkEmailDestinationStatus::BulkEmailDestinationStatus(const XmlNode& xmlNode) : 
    m_status(BulkEmailStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_messageIdHasBeenSet(false)
{
  *this = xmlNode;
}

BulkEmailDestinationStatus& BulkEmailDestinationStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = BulkEmailStatusMapper::GetBulkEmailStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode errorNode = resultNode.FirstChild("Error");
    if(!errorNode.IsNull())
    {
      m_error = Aws::Utils::Xml::DecodeEscapedXmlText(errorNode.GetText());
      m_errorHasBeenSet = true;
    }
    XmlNode messageIdNode = resultNode.FirstChild("MessageId");
    if(!messageIdNode.IsNull())
    {
      m_messageId = Aws::Utils::Xml::DecodeEscapedXmlText(messageIdNode.GetText());
      m_messageIdHasBeenSet = true;
    }
  }

  return *this;
}

void BulkEmailDestinationStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << BulkEmailStatusMapper::GetNameForBulkEmailStatus(m_status) << "&";
  }

  if(m_errorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Error=" << StringUtils::URLEncode(m_error.c_str()) << "&";
  }

  if(m_messageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".MessageId=" << StringUtils::URLEncode(m_messageId.c_str()) << "&";
  }

}

void BulkEmailDestinationStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << BulkEmailStatusMapper::GetNameForBulkEmailStatus(m_status) << "&";
  }
  if(m_errorHasBeenSet)
  {
      oStream << location << ".Error=" << StringUtils::URLEncode(m_error.c_str()) << "&";
  }
  if(m_messageIdHasBeenSet)
  {
      oStream << location << ".MessageId=" << StringUtils::URLEncode(m_messageId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
