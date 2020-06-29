/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetOperationResultSummary.h>
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

StackSetOperationResultSummary::StackSetOperationResultSummary() : 
    m_accountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_status(StackSetOperationResultStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_accountGateResultHasBeenSet(false),
    m_organizationalUnitIdHasBeenSet(false)
{
}

StackSetOperationResultSummary::StackSetOperationResultSummary(const XmlNode& xmlNode) : 
    m_accountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_status(StackSetOperationResultStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_accountGateResultHasBeenSet(false),
    m_organizationalUnitIdHasBeenSet(false)
{
  *this = xmlNode;
}

StackSetOperationResultSummary& StackSetOperationResultSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accountNode = resultNode.FirstChild("Account");
    if(!accountNode.IsNull())
    {
      m_account = Aws::Utils::Xml::DecodeEscapedXmlText(accountNode.GetText());
      m_accountHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText());
      m_regionHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackSetOperationResultStatusMapper::GetStackSetOperationResultStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
    XmlNode accountGateResultNode = resultNode.FirstChild("AccountGateResult");
    if(!accountGateResultNode.IsNull())
    {
      m_accountGateResult = accountGateResultNode;
      m_accountGateResultHasBeenSet = true;
    }
    XmlNode organizationalUnitIdNode = resultNode.FirstChild("OrganizationalUnitId");
    if(!organizationalUnitIdNode.IsNull())
    {
      m_organizationalUnitId = Aws::Utils::Xml::DecodeEscapedXmlText(organizationalUnitIdNode.GetText());
      m_organizationalUnitIdHasBeenSet = true;
    }
  }

  return *this;
}

void StackSetOperationResultSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_accountHasBeenSet)
  {
      oStream << location << index << locationValue << ".Account=" << StringUtils::URLEncode(m_account.c_str()) << "&";
  }

  if(m_regionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StackSetOperationResultStatusMapper::GetNameForStackSetOperationResultStatus(m_status) << "&";
  }

  if(m_statusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }

  if(m_accountGateResultHasBeenSet)
  {
      Aws::StringStream accountGateResultLocationAndMemberSs;
      accountGateResultLocationAndMemberSs << location << index << locationValue << ".AccountGateResult";
      m_accountGateResult.OutputToStream(oStream, accountGateResultLocationAndMemberSs.str().c_str());
  }

  if(m_organizationalUnitIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OrganizationalUnitId=" << StringUtils::URLEncode(m_organizationalUnitId.c_str()) << "&";
  }

}

void StackSetOperationResultSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_accountHasBeenSet)
  {
      oStream << location << ".Account=" << StringUtils::URLEncode(m_account.c_str()) << "&";
  }
  if(m_regionHasBeenSet)
  {
      oStream << location << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StackSetOperationResultStatusMapper::GetNameForStackSetOperationResultStatus(m_status) << "&";
  }
  if(m_statusReasonHasBeenSet)
  {
      oStream << location << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }
  if(m_accountGateResultHasBeenSet)
  {
      Aws::String accountGateResultLocationAndMember(location);
      accountGateResultLocationAndMember += ".AccountGateResult";
      m_accountGateResult.OutputToStream(oStream, accountGateResultLocationAndMember.c_str());
  }
  if(m_organizationalUnitIdHasBeenSet)
  {
      oStream << location << ".OrganizationalUnitId=" << StringUtils::URLEncode(m_organizationalUnitId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
