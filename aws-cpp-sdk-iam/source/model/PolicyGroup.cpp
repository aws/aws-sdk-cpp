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
#include <aws/iam/model/PolicyGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace IAM
{
namespace Model
{

PolicyGroup::PolicyGroup() : 
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

PolicyGroup::PolicyGroup(const XmlNode& xmlNode) : 
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyGroup& PolicyGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode groupNameNode = resultNode.FirstChild("GroupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = StringUtils::Trim(groupNameNode.GetText().c_str());
      m_groupNameHasBeenSet = true;
    }
    XmlNode groupIdNode = resultNode.FirstChild("GroupId");
    if(!groupIdNode.IsNull())
    {
      m_groupId = StringUtils::Trim(groupIdNode.GetText().c_str());
      m_groupIdHasBeenSet = true;
    }
  }

  return *this;
}

void PolicyGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

}

void PolicyGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
