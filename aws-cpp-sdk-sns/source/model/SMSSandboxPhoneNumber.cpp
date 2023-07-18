/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/SMSSandboxPhoneNumber.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SNS
{
namespace Model
{

SMSSandboxPhoneNumber::SMSSandboxPhoneNumber() : 
    m_phoneNumberHasBeenSet(false),
    m_status(SMSSandboxPhoneNumberVerificationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

SMSSandboxPhoneNumber::SMSSandboxPhoneNumber(const XmlNode& xmlNode) : 
    m_phoneNumberHasBeenSet(false),
    m_status(SMSSandboxPhoneNumberVerificationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

SMSSandboxPhoneNumber& SMSSandboxPhoneNumber::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode phoneNumberNode = resultNode.FirstChild("PhoneNumber");
    if(!phoneNumberNode.IsNull())
    {
      m_phoneNumber = Aws::Utils::Xml::DecodeEscapedXmlText(phoneNumberNode.GetText());
      m_phoneNumberHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = SMSSandboxPhoneNumberVerificationStatusMapper::GetSMSSandboxPhoneNumberVerificationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void SMSSandboxPhoneNumber::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_phoneNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".PhoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << SMSSandboxPhoneNumberVerificationStatusMapper::GetNameForSMSSandboxPhoneNumberVerificationStatus(m_status) << "&";
  }

}

void SMSSandboxPhoneNumber::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_phoneNumberHasBeenSet)
  {
      oStream << location << ".PhoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << SMSSandboxPhoneNumberVerificationStatusMapper::GetNameForSMSSandboxPhoneNumberVerificationStatus(m_status) << "&";
  }
}

} // namespace Model
} // namespace SNS
} // namespace Aws
