/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackInstance.h>
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

StackInstance::StackInstance() : 
    m_stackSetIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_parameterOverridesHasBeenSet(false),
    m_status(StackInstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_stackInstanceStatusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_organizationalUnitIdHasBeenSet(false),
    m_driftStatus(StackDriftStatus::NOT_SET),
    m_driftStatusHasBeenSet(false),
    m_lastDriftCheckTimestampHasBeenSet(false),
    m_lastOperationIdHasBeenSet(false)
{
}

StackInstance::StackInstance(const XmlNode& xmlNode) : 
    m_stackSetIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_parameterOverridesHasBeenSet(false),
    m_status(StackInstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_stackInstanceStatusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_organizationalUnitIdHasBeenSet(false),
    m_driftStatus(StackDriftStatus::NOT_SET),
    m_driftStatusHasBeenSet(false),
    m_lastDriftCheckTimestampHasBeenSet(false),
    m_lastOperationIdHasBeenSet(false)
{
  *this = xmlNode;
}

StackInstance& StackInstance::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackSetIdNode = resultNode.FirstChild("StackSetId");
    if(!stackSetIdNode.IsNull())
    {
      m_stackSetId = Aws::Utils::Xml::DecodeEscapedXmlText(stackSetIdNode.GetText());
      m_stackSetIdHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText());
      m_regionHasBeenSet = true;
    }
    XmlNode accountNode = resultNode.FirstChild("Account");
    if(!accountNode.IsNull())
    {
      m_account = Aws::Utils::Xml::DecodeEscapedXmlText(accountNode.GetText());
      m_accountHasBeenSet = true;
    }
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = Aws::Utils::Xml::DecodeEscapedXmlText(stackIdNode.GetText());
      m_stackIdHasBeenSet = true;
    }
    XmlNode parameterOverridesNode = resultNode.FirstChild("ParameterOverrides");
    if(!parameterOverridesNode.IsNull())
    {
      XmlNode parameterOverridesMember = parameterOverridesNode.FirstChild("member");
      while(!parameterOverridesMember.IsNull())
      {
        m_parameterOverrides.push_back(parameterOverridesMember);
        parameterOverridesMember = parameterOverridesMember.NextNode("member");
      }

      m_parameterOverridesHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackInstanceStatusMapper::GetStackInstanceStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode stackInstanceStatusNode = resultNode.FirstChild("StackInstanceStatus");
    if(!stackInstanceStatusNode.IsNull())
    {
      m_stackInstanceStatus = stackInstanceStatusNode;
      m_stackInstanceStatusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
    XmlNode organizationalUnitIdNode = resultNode.FirstChild("OrganizationalUnitId");
    if(!organizationalUnitIdNode.IsNull())
    {
      m_organizationalUnitId = Aws::Utils::Xml::DecodeEscapedXmlText(organizationalUnitIdNode.GetText());
      m_organizationalUnitIdHasBeenSet = true;
    }
    XmlNode driftStatusNode = resultNode.FirstChild("DriftStatus");
    if(!driftStatusNode.IsNull())
    {
      m_driftStatus = StackDriftStatusMapper::GetStackDriftStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(driftStatusNode.GetText()).c_str()).c_str());
      m_driftStatusHasBeenSet = true;
    }
    XmlNode lastDriftCheckTimestampNode = resultNode.FirstChild("LastDriftCheckTimestamp");
    if(!lastDriftCheckTimestampNode.IsNull())
    {
      m_lastDriftCheckTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastDriftCheckTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastDriftCheckTimestampHasBeenSet = true;
    }
    XmlNode lastOperationIdNode = resultNode.FirstChild("LastOperationId");
    if(!lastOperationIdNode.IsNull())
    {
      m_lastOperationId = Aws::Utils::Xml::DecodeEscapedXmlText(lastOperationIdNode.GetText());
      m_lastOperationIdHasBeenSet = true;
    }
  }

  return *this;
}

void StackInstance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackSetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackSetId=" << StringUtils::URLEncode(m_stackSetId.c_str()) << "&";
  }

  if(m_regionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }

  if(m_accountHasBeenSet)
  {
      oStream << location << index << locationValue << ".Account=" << StringUtils::URLEncode(m_account.c_str()) << "&";
  }

  if(m_stackIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }

  if(m_parameterOverridesHasBeenSet)
  {
      unsigned parameterOverridesIdx = 1;
      for(auto& item : m_parameterOverrides)
      {
        Aws::StringStream parameterOverridesSs;
        parameterOverridesSs << location << index << locationValue << ".ParameterOverrides.member." << parameterOverridesIdx++;
        item.OutputToStream(oStream, parameterOverridesSs.str().c_str());
      }
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StackInstanceStatusMapper::GetNameForStackInstanceStatus(m_status) << "&";
  }

  if(m_stackInstanceStatusHasBeenSet)
  {
      Aws::StringStream stackInstanceStatusLocationAndMemberSs;
      stackInstanceStatusLocationAndMemberSs << location << index << locationValue << ".StackInstanceStatus";
      m_stackInstanceStatus.OutputToStream(oStream, stackInstanceStatusLocationAndMemberSs.str().c_str());
  }

  if(m_statusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }

  if(m_organizationalUnitIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OrganizationalUnitId=" << StringUtils::URLEncode(m_organizationalUnitId.c_str()) << "&";
  }

  if(m_driftStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DriftStatus=" << StackDriftStatusMapper::GetNameForStackDriftStatus(m_driftStatus) << "&";
  }

  if(m_lastDriftCheckTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastDriftCheckTimestamp=" << StringUtils::URLEncode(m_lastDriftCheckTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lastOperationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastOperationId=" << StringUtils::URLEncode(m_lastOperationId.c_str()) << "&";
  }

}

void StackInstance::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackSetIdHasBeenSet)
  {
      oStream << location << ".StackSetId=" << StringUtils::URLEncode(m_stackSetId.c_str()) << "&";
  }
  if(m_regionHasBeenSet)
  {
      oStream << location << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }
  if(m_accountHasBeenSet)
  {
      oStream << location << ".Account=" << StringUtils::URLEncode(m_account.c_str()) << "&";
  }
  if(m_stackIdHasBeenSet)
  {
      oStream << location << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }
  if(m_parameterOverridesHasBeenSet)
  {
      unsigned parameterOverridesIdx = 1;
      for(auto& item : m_parameterOverrides)
      {
        Aws::StringStream parameterOverridesSs;
        parameterOverridesSs << location <<  ".ParameterOverrides.member." << parameterOverridesIdx++;
        item.OutputToStream(oStream, parameterOverridesSs.str().c_str());
      }
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StackInstanceStatusMapper::GetNameForStackInstanceStatus(m_status) << "&";
  }
  if(m_stackInstanceStatusHasBeenSet)
  {
      Aws::String stackInstanceStatusLocationAndMember(location);
      stackInstanceStatusLocationAndMember += ".StackInstanceStatus";
      m_stackInstanceStatus.OutputToStream(oStream, stackInstanceStatusLocationAndMember.c_str());
  }
  if(m_statusReasonHasBeenSet)
  {
      oStream << location << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }
  if(m_organizationalUnitIdHasBeenSet)
  {
      oStream << location << ".OrganizationalUnitId=" << StringUtils::URLEncode(m_organizationalUnitId.c_str()) << "&";
  }
  if(m_driftStatusHasBeenSet)
  {
      oStream << location << ".DriftStatus=" << StackDriftStatusMapper::GetNameForStackDriftStatus(m_driftStatus) << "&";
  }
  if(m_lastDriftCheckTimestampHasBeenSet)
  {
      oStream << location << ".LastDriftCheckTimestamp=" << StringUtils::URLEncode(m_lastDriftCheckTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lastOperationIdHasBeenSet)
  {
      oStream << location << ".LastOperationId=" << StringUtils::URLEncode(m_lastOperationId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
