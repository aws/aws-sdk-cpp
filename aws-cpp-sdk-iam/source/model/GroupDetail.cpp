/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/GroupDetail.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

GroupDetail::GroupDetail() : 
    m_pathHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createDate(0.0),
    m_createDateHasBeenSet(false),
    m_groupPolicyListHasBeenSet(false),
    m_attachedManagedPoliciesHasBeenSet(false)
{
}

GroupDetail::GroupDetail(const XmlNode& xmlNode) : 
    m_pathHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createDate(0.0),
    m_createDateHasBeenSet(false),
    m_groupPolicyListHasBeenSet(false),
    m_attachedManagedPoliciesHasBeenSet(false)
{
  *this = xmlNode;
}

GroupDetail& GroupDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pathNode = resultNode.FirstChild("Path");
    if(!pathNode.IsNull())
    {
      m_path = StringUtils::Trim(pathNode.GetText().c_str());
      m_pathHasBeenSet = true;
    }
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
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = StringUtils::Trim(arnNode.GetText().c_str());
      m_arnHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = StringUtils::ConvertToDouble(StringUtils::Trim(createDateNode.GetText().c_str()).c_str());
      m_createDateHasBeenSet = true;
    }
    XmlNode groupPolicyListNode = resultNode.FirstChild("GroupPolicyList");
    if(!groupPolicyListNode.IsNull())
    {
      while(!groupPolicyListNode.IsNull())
      {
        m_groupPolicyList.push_back(groupPolicyListNode);
        groupPolicyListNode = groupPolicyListNode.NextNode("GroupPolicyList");
      }

      m_groupPolicyListHasBeenSet = true;
    }
    XmlNode attachedManagedPoliciesNode = resultNode.FirstChild("AttachedManagedPolicies");
    if(!attachedManagedPoliciesNode.IsNull())
    {
      while(!attachedManagedPoliciesNode.IsNull())
      {
        m_attachedManagedPolicies.push_back(attachedManagedPoliciesNode);
        attachedManagedPoliciesNode = attachedManagedPoliciesNode.NextNode("AttachedManagedPolicies");
      }

      m_attachedManagedPoliciesHasBeenSet = true;
    }
  }

  return *this;
}

void GroupDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_pathHasBeenSet)
  {
      oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << m_createDate << "&";
  }
  if(m_groupPolicyListHasBeenSet)
  {
      for(auto& item : m_groupPolicyList)
      {
        Aws::StringStream groupPolicyListSs;
        groupPolicyListSs << location << index << locationValue << ".GroupPolicyList";
        item.OutputToStream(oStream, groupPolicyListSs.str().c_str());
      }
  }
  if(m_attachedManagedPoliciesHasBeenSet)
  {
      for(auto& item : m_attachedManagedPolicies)
      {
        Aws::StringStream attachedManagedPoliciesSs;
        attachedManagedPoliciesSs << location << index << locationValue << ".AttachedManagedPolicies";
        item.OutputToStream(oStream, attachedManagedPoliciesSs.str().c_str());
      }
  }
}

void GroupDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_pathHasBeenSet)
  {
      oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << m_createDate << "&";
  }
  if(m_groupPolicyListHasBeenSet)
  {
      for(auto& item : m_groupPolicyList)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".GroupPolicyList";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_attachedManagedPoliciesHasBeenSet)
  {
      for(auto& item : m_attachedManagedPolicies)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".AttachedManagedPolicies";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
