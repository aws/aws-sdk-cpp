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

#include <aws/cloudformation/model/StackInstanceSummary.h>
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

StackInstanceSummary::StackInstanceSummary() : 
    m_stackSetIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_status(StackInstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

StackInstanceSummary::StackInstanceSummary(const XmlNode& xmlNode) : 
    m_stackSetIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_status(StackInstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = xmlNode;
}

StackInstanceSummary& StackInstanceSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackSetIdNode = resultNode.FirstChild("StackSetId");
    if(!stackSetIdNode.IsNull())
    {
      m_stackSetId = stackSetIdNode.GetText();
      m_stackSetIdHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = regionNode.GetText();
      m_regionHasBeenSet = true;
    }
    XmlNode accountNode = resultNode.FirstChild("Account");
    if(!accountNode.IsNull())
    {
      m_account = accountNode.GetText();
      m_accountHasBeenSet = true;
    }
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = stackIdNode.GetText();
      m_stackIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackInstanceStatusMapper::GetStackInstanceStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = statusReasonNode.GetText();
      m_statusReasonHasBeenSet = true;
    }
  }

  return *this;
}

void StackInstanceSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StackInstanceStatusMapper::GetNameForStackInstanceStatus(m_status) << "&";
  }

  if(m_statusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }

}

void StackInstanceSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
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
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StackInstanceStatusMapper::GetNameForStackInstanceStatus(m_status) << "&";
  }
  if(m_statusReasonHasBeenSet)
  {
      oStream << location << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
