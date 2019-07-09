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

#include <aws/email/model/S3Action.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

S3Action::S3Action() : 
    m_topicArnHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

S3Action::S3Action(const XmlNode& xmlNode) : 
    m_topicArnHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = xmlNode;
}

S3Action& S3Action::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = topicArnNode.GetText();
      m_topicArnHasBeenSet = true;
    }
    XmlNode bucketNameNode = resultNode.FirstChild("BucketName");
    if(!bucketNameNode.IsNull())
    {
      m_bucketName = bucketNameNode.GetText();
      m_bucketNameHasBeenSet = true;
    }
    XmlNode objectKeyPrefixNode = resultNode.FirstChild("ObjectKeyPrefix");
    if(!objectKeyPrefixNode.IsNull())
    {
      m_objectKeyPrefix = objectKeyPrefixNode.GetText();
      m_objectKeyPrefixHasBeenSet = true;
    }
    XmlNode kmsKeyArnNode = resultNode.FirstChild("KmsKeyArn");
    if(!kmsKeyArnNode.IsNull())
    {
      m_kmsKeyArn = kmsKeyArnNode.GetText();
      m_kmsKeyArnHasBeenSet = true;
    }
  }

  return *this;
}

void S3Action::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_bucketNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".BucketName=" << StringUtils::URLEncode(m_bucketName.c_str()) << "&";
  }

  if(m_objectKeyPrefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".ObjectKeyPrefix=" << StringUtils::URLEncode(m_objectKeyPrefix.c_str()) << "&";
  }

  if(m_kmsKeyArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyArn=" << StringUtils::URLEncode(m_kmsKeyArn.c_str()) << "&";
  }

}

void S3Action::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
  if(m_bucketNameHasBeenSet)
  {
      oStream << location << ".BucketName=" << StringUtils::URLEncode(m_bucketName.c_str()) << "&";
  }
  if(m_objectKeyPrefixHasBeenSet)
  {
      oStream << location << ".ObjectKeyPrefix=" << StringUtils::URLEncode(m_objectKeyPrefix.c_str()) << "&";
  }
  if(m_kmsKeyArnHasBeenSet)
  {
      oStream << location << ".KmsKeyArn=" << StringUtils::URLEncode(m_kmsKeyArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
