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
#include <aws/iam/model/UserDetail.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

UserDetail::UserDetail() : 
    m_pathHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createDate(0.0),
    m_createDateHasBeenSet(false),
    m_userPolicyListHasBeenSet(false),
    m_groupListHasBeenSet(false),
    m_attachedManagedPoliciesHasBeenSet(false)
{
}

UserDetail::UserDetail(const XmlNode& xmlNode) : 
    m_pathHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createDate(0.0),
    m_createDateHasBeenSet(false),
    m_userPolicyListHasBeenSet(false),
    m_groupListHasBeenSet(false),
    m_attachedManagedPoliciesHasBeenSet(false)
{
  *this = xmlNode;
}

UserDetail& UserDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pathNode = resultNode.FirstChild("Path");
    if(pathNode.IsNull())
    {
      pathNode = resultNode;
    }

    if(!pathNode.IsNull())
    {
      m_path = StringUtils::Trim(pathNode.GetText().c_str());
      m_pathHasBeenSet = true;
    }
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    if(userNameNode.IsNull())
    {
      userNameNode = resultNode;
    }

    if(!userNameNode.IsNull())
    {
      m_userName = StringUtils::Trim(userNameNode.GetText().c_str());
      m_userNameHasBeenSet = true;
    }
    XmlNode userIdNode = resultNode.FirstChild("UserId");
    if(userIdNode.IsNull())
    {
      userIdNode = resultNode;
    }

    if(!userIdNode.IsNull())
    {
      m_userId = StringUtils::Trim(userIdNode.GetText().c_str());
      m_userIdHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(arnNode.IsNull())
    {
      arnNode = resultNode;
    }

    if(!arnNode.IsNull())
    {
      m_arn = StringUtils::Trim(arnNode.GetText().c_str());
      m_arnHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    if(createDateNode.IsNull())
    {
      createDateNode = resultNode;
    }

    if(!createDateNode.IsNull())
    {
      m_createDate = StringUtils::ConvertToDouble(StringUtils::Trim(createDateNode.GetText().c_str()).c_str());
      m_createDateHasBeenSet = true;
    }
    XmlNode userPolicyListNode = resultNode.FirstChild("UserPolicyList");
    if(!userPolicyListNode.IsNull())
    {
      XmlNode userPolicyListMember = userPolicyListNode.FirstChild("member");
      while(!userPolicyListMember.IsNull())
      {
        m_userPolicyList.push_back(userPolicyListMember);
        userPolicyListMember = userPolicyListMember.NextNode("member");
      }

      m_userPolicyListHasBeenSet = true;
    }
    XmlNode groupListNode = resultNode.FirstChild("GroupList");
    if(!groupListNode.IsNull())
    {
      XmlNode groupListMember = groupListNode.FirstChild("member");
      while(!groupListMember.IsNull())
      {
        m_groupList.push_back(StringUtils::Trim(groupListMember.GetText().c_str()));
        groupListMember = groupListMember.NextNode("member");
      }

      m_groupListHasBeenSet = true;
    }
    XmlNode attachedManagedPoliciesNode = resultNode.FirstChild("AttachedManagedPolicies");
    if(!attachedManagedPoliciesNode.IsNull())
    {
      XmlNode attachedManagedPoliciesMember = attachedManagedPoliciesNode.FirstChild("member");
      while(!attachedManagedPoliciesMember.IsNull())
      {
        m_attachedManagedPolicies.push_back(attachedManagedPoliciesMember);
        attachedManagedPoliciesMember = attachedManagedPoliciesMember.NextNode("member");
      }

      m_attachedManagedPoliciesHasBeenSet = true;
    }
  }

  return *this;
}

void UserDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_pathHasBeenSet)
  {
      oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }
  if(m_userNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_userIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }
  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << m_createDate << "&";
  }
  if(m_userPolicyListHasBeenSet)
  {
      for(auto& item : m_userPolicyList)
      {
        Aws::StringStream userPolicyListSs;
        userPolicyListSs << location << index << locationValue << ".UserPolicyList";
        item.OutputToStream(oStream, userPolicyListSs.str().c_str());
      }
  }
  if(m_groupListHasBeenSet)
  {
      for(auto& item : m_groupList)
      {
        oStream << location << index << locationValue << ".GroupList=" << StringUtils::URLEncode(item.c_str()) << "&";
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

void UserDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_pathHasBeenSet)
  {
      oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }
  if(m_userNameHasBeenSet)
  {
      oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_userIdHasBeenSet)
  {
      oStream << location << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << m_createDate << "&";
  }
  if(m_userPolicyListHasBeenSet)
  {
      for(auto& item : m_userPolicyList)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".UserPolicyList";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_groupListHasBeenSet)
  {
      for(auto& item : m_groupList)
      {
        oStream << location << ".GroupList=" << StringUtils::URLEncode(item.c_str()) << "&";
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
