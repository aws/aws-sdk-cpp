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
#include <aws/ec2/model/ClientData.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ClientData::ClientData() : 
    m_uploadStart(0.0),
    m_uploadStartHasBeenSet(false),
    m_uploadEnd(0.0),
    m_uploadEndHasBeenSet(false),
    m_uploadSize(0.0),
    m_uploadSizeHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

ClientData::ClientData(const XmlNode& xmlNode) : 
    m_uploadStart(0.0),
    m_uploadStartHasBeenSet(false),
    m_uploadEnd(0.0),
    m_uploadEndHasBeenSet(false),
    m_uploadSize(0.0),
    m_uploadSizeHasBeenSet(false),
    m_commentHasBeenSet(false)
{
  *this = xmlNode;
}

ClientData& ClientData::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode uploadStartNode = resultNode.FirstChild("UploadStart");
    if(!uploadStartNode.IsNull())
    {
      m_uploadStart = StringUtils::ConvertToDouble(StringUtils::Trim(uploadStartNode.GetText().c_str()).c_str());
      m_uploadStartHasBeenSet = true;
    }
    XmlNode uploadEndNode = resultNode.FirstChild("UploadEnd");
    if(!uploadEndNode.IsNull())
    {
      m_uploadEnd = StringUtils::ConvertToDouble(StringUtils::Trim(uploadEndNode.GetText().c_str()).c_str());
      m_uploadEndHasBeenSet = true;
    }
    XmlNode uploadSizeNode = resultNode.FirstChild("UploadSize");
    if(!uploadSizeNode.IsNull())
    {
      m_uploadSize = StringUtils::ConvertToDouble(StringUtils::Trim(uploadSizeNode.GetText().c_str()).c_str());
      m_uploadSizeHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = StringUtils::Trim(commentNode.GetText().c_str());
      m_commentHasBeenSet = true;
    }
  }

  return *this;
}

void ClientData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_uploadStartHasBeenSet)
  {
      oStream << location << index << locationValue << ".UploadStart=" << m_uploadStart << "&";
  }
  if(m_uploadEndHasBeenSet)
  {
      oStream << location << index << locationValue << ".UploadEnd=" << m_uploadEnd << "&";
  }
  if(m_uploadSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UploadSize=" << m_uploadSize << "&";
  }
  if(m_commentHasBeenSet)
  {
      oStream << location << index << locationValue << ".Comment=" << StringUtils::URLEncode(m_comment.c_str()) << "&";
  }
}

void ClientData::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_uploadStartHasBeenSet)
  {
      oStream << location << ".UploadStart=" << m_uploadStart << "&";
  }
  if(m_uploadEndHasBeenSet)
  {
      oStream << location << ".UploadEnd=" << m_uploadEnd << "&";
  }
  if(m_uploadSizeHasBeenSet)
  {
      oStream << location << ".UploadSize=" << m_uploadSize << "&";
  }
  if(m_commentHasBeenSet)
  {
      oStream << location << ".Comment=" << StringUtils::URLEncode(m_comment.c_str()) << "&";
  }
}
