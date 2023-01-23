/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/AccountGateResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

AccountGateResult::AccountGateResult() : 
    m_status(AccountGateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

AccountGateResult::AccountGateResult(const XmlNode& xmlNode) : 
    m_status(AccountGateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = xmlNode;
}

AccountGateResult& AccountGateResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = AccountGateStatusMapper::GetAccountGateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
  }

  return *this;
}

void AccountGateResult::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << AccountGateStatusMapper::GetNameForAccountGateStatus(m_status) << "&";
  }

  if(m_statusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }

}

void AccountGateResult::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << AccountGateStatusMapper::GetNameForAccountGateStatus(m_status) << "&";
  }
  if(m_statusReasonHasBeenSet)
  {
      oStream << location << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
