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

#include <aws/ec2/model/ClientData.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ClientData::ClientData() : 
    m_commentHasBeenSet(false),
    m_uploadEndHasBeenSet(false),
    m_uploadSize(0.0),
    m_uploadSizeHasBeenSet(false),
    m_uploadStartHasBeenSet(false)
{
}

ClientData::ClientData(const XmlNode& xmlNode) : 
    m_commentHasBeenSet(false),
    m_uploadEndHasBeenSet(false),
    m_uploadSize(0.0),
    m_uploadSizeHasBeenSet(false),
    m_uploadStartHasBeenSet(false)
{
  *this = xmlNode;
}

ClientData& ClientData::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = commentNode.GetText();
      m_commentHasBeenSet = true;
    }
    XmlNode uploadEndNode = resultNode.FirstChild("UploadEnd");
    if(!uploadEndNode.IsNull())
    {
      m_uploadEnd = DateTime(StringUtils::Trim(uploadEndNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_uploadEndHasBeenSet = true;
    }
    XmlNode uploadSizeNode = resultNode.FirstChild("UploadSize");
    if(!uploadSizeNode.IsNull())
    {
      m_uploadSize = StringUtils::ConvertToDouble(StringUtils::Trim(uploadSizeNode.GetText().c_str()).c_str());
      m_uploadSizeHasBeenSet = true;
    }
    XmlNode uploadStartNode = resultNode.FirstChild("UploadStart");
    if(!uploadStartNode.IsNull())
    {
      m_uploadStart = DateTime(StringUtils::Trim(uploadStartNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_uploadStartHasBeenSet = true;
    }
  }

  return *this;
}

void ClientData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_commentHasBeenSet)
  {
      oStream << location << index << locationValue << ".Comment=" << StringUtils::URLEncode(m_comment.c_str()) << "&";
  }

  if(m_uploadEndHasBeenSet)
  {
      oStream << location << index << locationValue << ".UploadEnd=" << StringUtils::URLEncode(m_uploadEnd.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_uploadSizeHasBeenSet)
  {
        oStream << location << index << locationValue << ".UploadSize=" << StringUtils::URLEncode(m_uploadSize) << "&";
  }

  if(m_uploadStartHasBeenSet)
  {
      oStream << location << index << locationValue << ".UploadStart=" << StringUtils::URLEncode(m_uploadStart.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ClientData::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_commentHasBeenSet)
  {
      oStream << location << ".Comment=" << StringUtils::URLEncode(m_comment.c_str()) << "&";
  }
  if(m_uploadEndHasBeenSet)
  {
      oStream << location << ".UploadEnd=" << StringUtils::URLEncode(m_uploadEnd.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_uploadSizeHasBeenSet)
  {
        oStream << location << ".UploadSize=" << StringUtils::URLEncode(m_uploadSize) << "&";
  }
  if(m_uploadStartHasBeenSet)
  {
      oStream << location << ".UploadStart=" << StringUtils::URLEncode(m_uploadStart.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
