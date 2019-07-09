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

#include <aws/iam/model/AccessKey.h>
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

AccessKey::AccessKey() : 
    m_userNameHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
}

AccessKey::AccessKey(const XmlNode& xmlNode) : 
    m_userNameHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
  *this = xmlNode;
}

AccessKey& AccessKey::operator =(const XmlNode& xmlNode)
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
    XmlNode accessKeyIdNode = resultNode.FirstChild("AccessKeyId");
    if(!accessKeyIdNode.IsNull())
    {
      m_accessKeyId = accessKeyIdNode.GetText();
      m_accessKeyIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StatusTypeMapper::GetStatusTypeForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode secretAccessKeyNode = resultNode.FirstChild("SecretAccessKey");
    if(!secretAccessKeyNode.IsNull())
    {
      m_secretAccessKey = secretAccessKeyNode.GetText();
      m_secretAccessKeyHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = DateTime(StringUtils::Trim(createDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createDateHasBeenSet = true;
    }
  }

  return *this;
}

void AccessKey::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }

  if(m_accessKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccessKeyId=" << StringUtils::URLEncode(m_accessKeyId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StatusTypeMapper::GetNameForStatusType(m_status) << "&";
  }

  if(m_secretAccessKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecretAccessKey=" << StringUtils::URLEncode(m_secretAccessKey.c_str()) << "&";
  }

  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void AccessKey::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userNameHasBeenSet)
  {
      oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_accessKeyIdHasBeenSet)
  {
      oStream << location << ".AccessKeyId=" << StringUtils::URLEncode(m_accessKeyId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StatusTypeMapper::GetNameForStatusType(m_status) << "&";
  }
  if(m_secretAccessKeyHasBeenSet)
  {
      oStream << location << ".SecretAccessKey=" << StringUtils::URLEncode(m_secretAccessKey.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
