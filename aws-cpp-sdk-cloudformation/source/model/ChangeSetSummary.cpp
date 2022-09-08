/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ChangeSetSummary.h>
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

ChangeSetSummary::ChangeSetSummary() : 
    m_stackIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_changeSetIdHasBeenSet(false),
    m_changeSetNameHasBeenSet(false),
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_executionStatusHasBeenSet(false),
    m_status(ChangeSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_includeNestedStacks(false),
    m_includeNestedStacksHasBeenSet(false),
    m_parentChangeSetIdHasBeenSet(false),
    m_rootChangeSetIdHasBeenSet(false)
{
}

ChangeSetSummary::ChangeSetSummary(const XmlNode& xmlNode) : 
    m_stackIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_changeSetIdHasBeenSet(false),
    m_changeSetNameHasBeenSet(false),
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_executionStatusHasBeenSet(false),
    m_status(ChangeSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_includeNestedStacks(false),
    m_includeNestedStacksHasBeenSet(false),
    m_parentChangeSetIdHasBeenSet(false),
    m_rootChangeSetIdHasBeenSet(false)
{
  *this = xmlNode;
}

ChangeSetSummary& ChangeSetSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = Aws::Utils::Xml::DecodeEscapedXmlText(stackIdNode.GetText());
      m_stackIdHasBeenSet = true;
    }
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = Aws::Utils::Xml::DecodeEscapedXmlText(stackNameNode.GetText());
      m_stackNameHasBeenSet = true;
    }
    XmlNode changeSetIdNode = resultNode.FirstChild("ChangeSetId");
    if(!changeSetIdNode.IsNull())
    {
      m_changeSetId = Aws::Utils::Xml::DecodeEscapedXmlText(changeSetIdNode.GetText());
      m_changeSetIdHasBeenSet = true;
    }
    XmlNode changeSetNameNode = resultNode.FirstChild("ChangeSetName");
    if(!changeSetNameNode.IsNull())
    {
      m_changeSetName = Aws::Utils::Xml::DecodeEscapedXmlText(changeSetNameNode.GetText());
      m_changeSetNameHasBeenSet = true;
    }
    XmlNode executionStatusNode = resultNode.FirstChild("ExecutionStatus");
    if(!executionStatusNode.IsNull())
    {
      m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(executionStatusNode.GetText()).c_str()).c_str());
      m_executionStatusHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ChangeSetStatusMapper::GetChangeSetStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode includeNestedStacksNode = resultNode.FirstChild("IncludeNestedStacks");
    if(!includeNestedStacksNode.IsNull())
    {
      m_includeNestedStacks = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(includeNestedStacksNode.GetText()).c_str()).c_str());
      m_includeNestedStacksHasBeenSet = true;
    }
    XmlNode parentChangeSetIdNode = resultNode.FirstChild("ParentChangeSetId");
    if(!parentChangeSetIdNode.IsNull())
    {
      m_parentChangeSetId = Aws::Utils::Xml::DecodeEscapedXmlText(parentChangeSetIdNode.GetText());
      m_parentChangeSetIdHasBeenSet = true;
    }
    XmlNode rootChangeSetIdNode = resultNode.FirstChild("RootChangeSetId");
    if(!rootChangeSetIdNode.IsNull())
    {
      m_rootChangeSetId = Aws::Utils::Xml::DecodeEscapedXmlText(rootChangeSetIdNode.GetText());
      m_rootChangeSetIdHasBeenSet = true;
    }
  }

  return *this;
}

void ChangeSetSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }

  if(m_stackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_changeSetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ChangeSetId=" << StringUtils::URLEncode(m_changeSetId.c_str()) << "&";
  }

  if(m_changeSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ChangeSetName=" << StringUtils::URLEncode(m_changeSetName.c_str()) << "&";
  }

  if(m_executionStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExecutionStatus=" << ExecutionStatusMapper::GetNameForExecutionStatus(m_executionStatus) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << ChangeSetStatusMapper::GetNameForChangeSetStatus(m_status) << "&";
  }

  if(m_statusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_includeNestedStacksHasBeenSet)
  {
      oStream << location << index << locationValue << ".IncludeNestedStacks=" << std::boolalpha << m_includeNestedStacks << "&";
  }

  if(m_parentChangeSetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParentChangeSetId=" << StringUtils::URLEncode(m_parentChangeSetId.c_str()) << "&";
  }

  if(m_rootChangeSetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RootChangeSetId=" << StringUtils::URLEncode(m_rootChangeSetId.c_str()) << "&";
  }

}

void ChangeSetSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackIdHasBeenSet)
  {
      oStream << location << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }
  if(m_stackNameHasBeenSet)
  {
      oStream << location << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }
  if(m_changeSetIdHasBeenSet)
  {
      oStream << location << ".ChangeSetId=" << StringUtils::URLEncode(m_changeSetId.c_str()) << "&";
  }
  if(m_changeSetNameHasBeenSet)
  {
      oStream << location << ".ChangeSetName=" << StringUtils::URLEncode(m_changeSetName.c_str()) << "&";
  }
  if(m_executionStatusHasBeenSet)
  {
      oStream << location << ".ExecutionStatus=" << ExecutionStatusMapper::GetNameForExecutionStatus(m_executionStatus) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << ChangeSetStatusMapper::GetNameForChangeSetStatus(m_status) << "&";
  }
  if(m_statusReasonHasBeenSet)
  {
      oStream << location << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_includeNestedStacksHasBeenSet)
  {
      oStream << location << ".IncludeNestedStacks=" << std::boolalpha << m_includeNestedStacks << "&";
  }
  if(m_parentChangeSetIdHasBeenSet)
  {
      oStream << location << ".ParentChangeSetId=" << StringUtils::URLEncode(m_parentChangeSetId.c_str()) << "&";
  }
  if(m_rootChangeSetIdHasBeenSet)
  {
      oStream << location << ".RootChangeSetId=" << StringUtils::URLEncode(m_rootChangeSetId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
