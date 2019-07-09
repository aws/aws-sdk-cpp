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

#include <aws/cloudformation/model/StackSetSummary.h>
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

StackSetSummary::StackSetSummary() : 
    m_stackSetNameHasBeenSet(false),
    m_stackSetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(StackSetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

StackSetSummary::StackSetSummary(const XmlNode& xmlNode) : 
    m_stackSetNameHasBeenSet(false),
    m_stackSetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(StackSetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

StackSetSummary& StackSetSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackSetNameNode = resultNode.FirstChild("StackSetName");
    if(!stackSetNameNode.IsNull())
    {
      m_stackSetName = stackSetNameNode.GetText();
      m_stackSetNameHasBeenSet = true;
    }
    XmlNode stackSetIdNode = resultNode.FirstChild("StackSetId");
    if(!stackSetIdNode.IsNull())
    {
      m_stackSetId = stackSetIdNode.GetText();
      m_stackSetIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackSetStatusMapper::GetStackSetStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void StackSetSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  if(m_stackSetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackSetId=" << StringUtils::URLEncode(m_stackSetId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StackSetStatusMapper::GetNameForStackSetStatus(m_status) << "&";
  }

}

void StackSetSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackSetNameHasBeenSet)
  {
      oStream << location << ".StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }
  if(m_stackSetIdHasBeenSet)
  {
      oStream << location << ".StackSetId=" << StringUtils::URLEncode(m_stackSetId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StackSetStatusMapper::GetNameForStackSetStatus(m_status) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
