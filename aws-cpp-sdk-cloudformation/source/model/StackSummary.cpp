﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/model/StackSummary.h>
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

StackSummary::StackSummary() : 
    m_stackIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_deletionTimeHasBeenSet(false),
    m_stackStatus(StackStatus::NOT_SET),
    m_stackStatusHasBeenSet(false),
    m_stackStatusReasonHasBeenSet(false)
{
}

StackSummary::StackSummary(const XmlNode& xmlNode) : 
    m_stackIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_deletionTimeHasBeenSet(false),
    m_stackStatus(StackStatus::NOT_SET),
    m_stackStatusHasBeenSet(false),
    m_stackStatusReasonHasBeenSet(false)
{
  *this = xmlNode;
}

StackSummary& StackSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = StringUtils::Trim(stackIdNode.GetText().c_str());
      m_stackIdHasBeenSet = true;
    }
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = StringUtils::Trim(stackNameNode.GetText().c_str());
      m_stackNameHasBeenSet = true;
    }
    XmlNode templateDescriptionNode = resultNode.FirstChild("TemplateDescription");
    if(!templateDescriptionNode.IsNull())
    {
      m_templateDescription = StringUtils::Trim(templateDescriptionNode.GetText().c_str());
      m_templateDescriptionHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(creationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode lastUpdatedTimeNode = resultNode.FirstChild("LastUpdatedTime");
    if(!lastUpdatedTimeNode.IsNull())
    {
      m_lastUpdatedTime = DateTime(StringUtils::Trim(lastUpdatedTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastUpdatedTimeHasBeenSet = true;
    }
    XmlNode deletionTimeNode = resultNode.FirstChild("DeletionTime");
    if(!deletionTimeNode.IsNull())
    {
      m_deletionTime = DateTime(StringUtils::Trim(deletionTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_deletionTimeHasBeenSet = true;
    }
    XmlNode stackStatusNode = resultNode.FirstChild("StackStatus");
    if(!stackStatusNode.IsNull())
    {
      m_stackStatus = StackStatusMapper::GetStackStatusForName(StringUtils::Trim(stackStatusNode.GetText().c_str()).c_str());
      m_stackStatusHasBeenSet = true;
    }
    XmlNode stackStatusReasonNode = resultNode.FirstChild("StackStatusReason");
    if(!stackStatusReasonNode.IsNull())
    {
      m_stackStatusReason = StringUtils::Trim(stackStatusReasonNode.GetText().c_str());
      m_stackStatusReasonHasBeenSet = true;
    }
  }

  return *this;
}

void StackSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }

  if(m_stackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_templateDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateDescription=" << StringUtils::URLEncode(m_templateDescription.c_str()) << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deletionTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeletionTime=" << StringUtils::URLEncode(m_deletionTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_stackStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackStatus=" << StackStatusMapper::GetNameForStackStatus(m_stackStatus) << "&";
  }

  if(m_stackStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackStatusReason=" << StringUtils::URLEncode(m_stackStatusReason.c_str()) << "&";
  }

}

void StackSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackIdHasBeenSet)
  {
      oStream << location << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }
  if(m_stackNameHasBeenSet)
  {
      oStream << location << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }
  if(m_templateDescriptionHasBeenSet)
  {
      oStream << location << ".TemplateDescription=" << StringUtils::URLEncode(m_templateDescription.c_str()) << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deletionTimeHasBeenSet)
  {
      oStream << location << ".DeletionTime=" << StringUtils::URLEncode(m_deletionTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_stackStatusHasBeenSet)
  {
      oStream << location << ".StackStatus=" << StackStatusMapper::GetNameForStackStatus(m_stackStatus) << "&";
  }
  if(m_stackStatusReasonHasBeenSet)
  {
      oStream << location << ".StackStatusReason=" << StringUtils::URLEncode(m_stackStatusReason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
