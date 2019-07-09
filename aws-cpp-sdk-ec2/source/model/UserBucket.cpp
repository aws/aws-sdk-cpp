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

#include <aws/ec2/model/UserBucket.h>
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

UserBucket::UserBucket() : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
}

UserBucket::UserBucket(const XmlNode& xmlNode) : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
  *this = xmlNode;
}

UserBucket& UserBucket::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode s3BucketNode = resultNode.FirstChild("S3Bucket");
    if(!s3BucketNode.IsNull())
    {
      m_s3Bucket = s3BucketNode.GetText();
      m_s3BucketHasBeenSet = true;
    }
    XmlNode s3KeyNode = resultNode.FirstChild("S3Key");
    if(!s3KeyNode.IsNull())
    {
      m_s3Key = s3KeyNode.GetText();
      m_s3KeyHasBeenSet = true;
    }
  }

  return *this;
}

void UserBucket::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_s3BucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }

  if(m_s3KeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Key=" << StringUtils::URLEncode(m_s3Key.c_str()) << "&";
  }

}

void UserBucket::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_s3BucketHasBeenSet)
  {
      oStream << location << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }
  if(m_s3KeyHasBeenSet)
  {
      oStream << location << ".S3Key=" << StringUtils::URLEncode(m_s3Key.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
