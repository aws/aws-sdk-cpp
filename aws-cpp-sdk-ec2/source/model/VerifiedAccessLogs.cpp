/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessLogs.h>
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

VerifiedAccessLogs::VerifiedAccessLogs() : 
    m_s3HasBeenSet(false),
    m_cloudWatchLogsHasBeenSet(false),
    m_kinesisDataFirehoseHasBeenSet(false)
{
}

VerifiedAccessLogs::VerifiedAccessLogs(const XmlNode& xmlNode) : 
    m_s3HasBeenSet(false),
    m_cloudWatchLogsHasBeenSet(false),
    m_kinesisDataFirehoseHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessLogs& VerifiedAccessLogs::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode s3Node = resultNode.FirstChild("s3");
    if(!s3Node.IsNull())
    {
      m_s3 = s3Node;
      m_s3HasBeenSet = true;
    }
    XmlNode cloudWatchLogsNode = resultNode.FirstChild("cloudWatchLogs");
    if(!cloudWatchLogsNode.IsNull())
    {
      m_cloudWatchLogs = cloudWatchLogsNode;
      m_cloudWatchLogsHasBeenSet = true;
    }
    XmlNode kinesisDataFirehoseNode = resultNode.FirstChild("kinesisDataFirehose");
    if(!kinesisDataFirehoseNode.IsNull())
    {
      m_kinesisDataFirehose = kinesisDataFirehoseNode;
      m_kinesisDataFirehoseHasBeenSet = true;
    }
  }

  return *this;
}

void VerifiedAccessLogs::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_s3HasBeenSet)
  {
      Aws::StringStream s3LocationAndMemberSs;
      s3LocationAndMemberSs << location << index << locationValue << ".S3";
      m_s3.OutputToStream(oStream, s3LocationAndMemberSs.str().c_str());
  }

  if(m_cloudWatchLogsHasBeenSet)
  {
      Aws::StringStream cloudWatchLogsLocationAndMemberSs;
      cloudWatchLogsLocationAndMemberSs << location << index << locationValue << ".CloudWatchLogs";
      m_cloudWatchLogs.OutputToStream(oStream, cloudWatchLogsLocationAndMemberSs.str().c_str());
  }

  if(m_kinesisDataFirehoseHasBeenSet)
  {
      Aws::StringStream kinesisDataFirehoseLocationAndMemberSs;
      kinesisDataFirehoseLocationAndMemberSs << location << index << locationValue << ".KinesisDataFirehose";
      m_kinesisDataFirehose.OutputToStream(oStream, kinesisDataFirehoseLocationAndMemberSs.str().c_str());
  }

}

void VerifiedAccessLogs::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_s3HasBeenSet)
  {
      Aws::String s3LocationAndMember(location);
      s3LocationAndMember += ".S3";
      m_s3.OutputToStream(oStream, s3LocationAndMember.c_str());
  }
  if(m_cloudWatchLogsHasBeenSet)
  {
      Aws::String cloudWatchLogsLocationAndMember(location);
      cloudWatchLogsLocationAndMember += ".CloudWatchLogs";
      m_cloudWatchLogs.OutputToStream(oStream, cloudWatchLogsLocationAndMember.c_str());
  }
  if(m_kinesisDataFirehoseHasBeenSet)
  {
      Aws::String kinesisDataFirehoseLocationAndMember(location);
      kinesisDataFirehoseLocationAndMember += ".KinesisDataFirehose";
      m_kinesisDataFirehose.OutputToStream(oStream, kinesisDataFirehoseLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
