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

#include <aws/iam/model/PolicyVersion.h>
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

PolicyVersion::PolicyVersion() : 
    m_documentHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
}

PolicyVersion::PolicyVersion(const XmlNode& xmlNode) : 
    m_documentHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyVersion& PolicyVersion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode documentNode = resultNode.FirstChild("Document");
    if(!documentNode.IsNull())
    {
      m_document = documentNode.GetText();
      m_documentHasBeenSet = true;
    }
    XmlNode versionIdNode = resultNode.FirstChild("VersionId");
    if(!versionIdNode.IsNull())
    {
      m_versionId = versionIdNode.GetText();
      m_versionIdHasBeenSet = true;
    }
    XmlNode isDefaultVersionNode = resultNode.FirstChild("IsDefaultVersion");
    if(!isDefaultVersionNode.IsNull())
    {
      m_isDefaultVersion = StringUtils::ConvertToBool(StringUtils::Trim(isDefaultVersionNode.GetText().c_str()).c_str());
      m_isDefaultVersionHasBeenSet = true;
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

void PolicyVersion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_documentHasBeenSet)
  {
      oStream << location << index << locationValue << ".Document=" << StringUtils::URLEncode(m_document.c_str()) << "&";
  }

  if(m_versionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VersionId=" << StringUtils::URLEncode(m_versionId.c_str()) << "&";
  }

  if(m_isDefaultVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefaultVersion=" << std::boolalpha << m_isDefaultVersion << "&";
  }

  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void PolicyVersion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_documentHasBeenSet)
  {
      oStream << location << ".Document=" << StringUtils::URLEncode(m_document.c_str()) << "&";
  }
  if(m_versionIdHasBeenSet)
  {
      oStream << location << ".VersionId=" << StringUtils::URLEncode(m_versionId.c_str()) << "&";
  }
  if(m_isDefaultVersionHasBeenSet)
  {
      oStream << location << ".IsDefaultVersion=" << std::boolalpha << m_isDefaultVersion << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
