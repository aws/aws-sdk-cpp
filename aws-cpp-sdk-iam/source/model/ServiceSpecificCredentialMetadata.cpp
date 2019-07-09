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

#include <aws/iam/model/ServiceSpecificCredentialMetadata.h>
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

ServiceSpecificCredentialMetadata::ServiceSpecificCredentialMetadata() : 
    m_userNameHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_serviceUserNameHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_serviceSpecificCredentialIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

ServiceSpecificCredentialMetadata::ServiceSpecificCredentialMetadata(const XmlNode& xmlNode) : 
    m_userNameHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_serviceUserNameHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_serviceSpecificCredentialIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
  *this = xmlNode;
}

ServiceSpecificCredentialMetadata& ServiceSpecificCredentialMetadata::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    if(!userNameNode.IsNull())
    {
      m_userName = userNameNode.GetText();
      m_userNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StatusTypeMapper::GetStatusTypeForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode serviceUserNameNode = resultNode.FirstChild("ServiceUserName");
    if(!serviceUserNameNode.IsNull())
    {
      m_serviceUserName = serviceUserNameNode.GetText();
      m_serviceUserNameHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = DateTime(StringUtils::Trim(createDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createDateHasBeenSet = true;
    }
    XmlNode serviceSpecificCredentialIdNode = resultNode.FirstChild("ServiceSpecificCredentialId");
    if(!serviceSpecificCredentialIdNode.IsNull())
    {
      m_serviceSpecificCredentialId = serviceSpecificCredentialIdNode.GetText();
      m_serviceSpecificCredentialIdHasBeenSet = true;
    }
    XmlNode serviceNameNode = resultNode.FirstChild("ServiceName");
    if(!serviceNameNode.IsNull())
    {
      m_serviceName = serviceNameNode.GetText();
      m_serviceNameHasBeenSet = true;
    }
  }

  return *this;
}

void ServiceSpecificCredentialMetadata::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StatusTypeMapper::GetNameForStatusType(m_status) << "&";
  }

  if(m_serviceUserNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUserName=" << StringUtils::URLEncode(m_serviceUserName.c_str()) << "&";
  }

  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceSpecificCredentialIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceSpecificCredentialId=" << StringUtils::URLEncode(m_serviceSpecificCredentialId.c_str()) << "&";
  }

  if(m_serviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }

}

void ServiceSpecificCredentialMetadata::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userNameHasBeenSet)
  {
      oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StatusTypeMapper::GetNameForStatusType(m_status) << "&";
  }
  if(m_serviceUserNameHasBeenSet)
  {
      oStream << location << ".ServiceUserName=" << StringUtils::URLEncode(m_serviceUserName.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceSpecificCredentialIdHasBeenSet)
  {
      oStream << location << ".ServiceSpecificCredentialId=" << StringUtils::URLEncode(m_serviceSpecificCredentialId.c_str()) << "&";
  }
  if(m_serviceNameHasBeenSet)
  {
      oStream << location << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
