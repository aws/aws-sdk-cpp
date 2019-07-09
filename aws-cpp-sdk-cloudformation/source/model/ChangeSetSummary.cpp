/*
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
    m_descriptionHasBeenSet(false)
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
    m_descriptionHasBeenSet(false)
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
      m_stackId = stackIdNode.GetText();
      m_stackIdHasBeenSet = true;
    }
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = stackNameNode.GetText();
      m_stackNameHasBeenSet = true;
    }
    XmlNode changeSetIdNode = resultNode.FirstChild("ChangeSetId");
    if(!changeSetIdNode.IsNull())
    {
      m_changeSetId = changeSetIdNode.GetText();
      m_changeSetIdHasBeenSet = true;
    }
    XmlNode changeSetNameNode = resultNode.FirstChild("ChangeSetName");
    if(!changeSetNameNode.IsNull())
    {
      m_changeSetName = changeSetNameNode.GetText();
      m_changeSetNameHasBeenSet = true;
    }
    XmlNode executionStatusNode = resultNode.FirstChild("ExecutionStatus");
    if(!executionStatusNode.IsNull())
    {
      m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(StringUtils::Trim(executionStatusNode.GetText().c_str()).c_str());
      m_executionStatusHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ChangeSetStatusMapper::GetChangeSetStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = statusReasonNode.GetText();
      m_statusReasonHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(creationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
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
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
