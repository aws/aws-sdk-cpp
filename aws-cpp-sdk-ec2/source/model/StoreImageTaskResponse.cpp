/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StoreImageTaskResponse.h>
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

StoreImageTaskResponse::StoreImageTaskResponse() : 
    m_amiIdHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_s3objectKeyHasBeenSet(false),
    m_progressPercentage(0),
    m_progressPercentageHasBeenSet(false),
    m_storeTaskStateHasBeenSet(false),
    m_storeTaskFailureReasonHasBeenSet(false)
{
}

StoreImageTaskResponse::StoreImageTaskResponse(const XmlNode& xmlNode) : 
    m_amiIdHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_s3objectKeyHasBeenSet(false),
    m_progressPercentage(0),
    m_progressPercentageHasBeenSet(false),
    m_storeTaskStateHasBeenSet(false),
    m_storeTaskFailureReasonHasBeenSet(false)
{
  *this = xmlNode;
}

StoreImageTaskResponse& StoreImageTaskResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode amiIdNode = resultNode.FirstChild("amiId");
    if(!amiIdNode.IsNull())
    {
      m_amiId = Aws::Utils::Xml::DecodeEscapedXmlText(amiIdNode.GetText());
      m_amiIdHasBeenSet = true;
    }
    XmlNode taskStartTimeNode = resultNode.FirstChild("taskStartTime");
    if(!taskStartTimeNode.IsNull())
    {
      m_taskStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(taskStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_taskStartTimeHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode s3objectKeyNode = resultNode.FirstChild("s3objectKey");
    if(!s3objectKeyNode.IsNull())
    {
      m_s3objectKey = Aws::Utils::Xml::DecodeEscapedXmlText(s3objectKeyNode.GetText());
      m_s3objectKeyHasBeenSet = true;
    }
    XmlNode progressPercentageNode = resultNode.FirstChild("progressPercentage");
    if(!progressPercentageNode.IsNull())
    {
      m_progressPercentage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(progressPercentageNode.GetText()).c_str()).c_str());
      m_progressPercentageHasBeenSet = true;
    }
    XmlNode storeTaskStateNode = resultNode.FirstChild("storeTaskState");
    if(!storeTaskStateNode.IsNull())
    {
      m_storeTaskState = Aws::Utils::Xml::DecodeEscapedXmlText(storeTaskStateNode.GetText());
      m_storeTaskStateHasBeenSet = true;
    }
    XmlNode storeTaskFailureReasonNode = resultNode.FirstChild("storeTaskFailureReason");
    if(!storeTaskFailureReasonNode.IsNull())
    {
      m_storeTaskFailureReason = Aws::Utils::Xml::DecodeEscapedXmlText(storeTaskFailureReasonNode.GetText());
      m_storeTaskFailureReasonHasBeenSet = true;
    }
  }

  return *this;
}

void StoreImageTaskResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_amiIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AmiId=" << StringUtils::URLEncode(m_amiId.c_str()) << "&";
  }

  if(m_taskStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TaskStartTime=" << StringUtils::URLEncode(m_taskStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_bucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }

  if(m_s3objectKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3objectKey=" << StringUtils::URLEncode(m_s3objectKey.c_str()) << "&";
  }

  if(m_progressPercentageHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProgressPercentage=" << m_progressPercentage << "&";
  }

  if(m_storeTaskStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".StoreTaskState=" << StringUtils::URLEncode(m_storeTaskState.c_str()) << "&";
  }

  if(m_storeTaskFailureReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StoreTaskFailureReason=" << StringUtils::URLEncode(m_storeTaskFailureReason.c_str()) << "&";
  }

}

void StoreImageTaskResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_amiIdHasBeenSet)
  {
      oStream << location << ".AmiId=" << StringUtils::URLEncode(m_amiId.c_str()) << "&";
  }
  if(m_taskStartTimeHasBeenSet)
  {
      oStream << location << ".TaskStartTime=" << StringUtils::URLEncode(m_taskStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_bucketHasBeenSet)
  {
      oStream << location << ".Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }
  if(m_s3objectKeyHasBeenSet)
  {
      oStream << location << ".S3objectKey=" << StringUtils::URLEncode(m_s3objectKey.c_str()) << "&";
  }
  if(m_progressPercentageHasBeenSet)
  {
      oStream << location << ".ProgressPercentage=" << m_progressPercentage << "&";
  }
  if(m_storeTaskStateHasBeenSet)
  {
      oStream << location << ".StoreTaskState=" << StringUtils::URLEncode(m_storeTaskState.c_str()) << "&";
  }
  if(m_storeTaskFailureReasonHasBeenSet)
  {
      oStream << location << ".StoreTaskFailureReason=" << StringUtils::URLEncode(m_storeTaskFailureReason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
