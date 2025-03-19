/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

S3Action::S3Action(const XmlNode& xmlNode)
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
      m_topicArn = Aws::Utils::Xml::DecodeEscapedXmlText(topicArnNode.GetText());
      m_topicArnHasBeenSet = true;
    }
    XmlNode bucketNameNode = resultNode.FirstChild("BucketName");
    if(!bucketNameNode.IsNull())
    {
      m_bucketName = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNameNode.GetText());
      m_bucketNameHasBeenSet = true;
    }
    XmlNode objectKeyPrefixNode = resultNode.FirstChild("ObjectKeyPrefix");
    if(!objectKeyPrefixNode.IsNull())
    {
      m_objectKeyPrefix = Aws::Utils::Xml::DecodeEscapedXmlText(objectKeyPrefixNode.GetText());
      m_objectKeyPrefixHasBeenSet = true;
    }
    XmlNode kmsKeyArnNode = resultNode.FirstChild("KmsKeyArn");
    if(!kmsKeyArnNode.IsNull())
    {
      m_kmsKeyArn = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyArnNode.GetText());
      m_kmsKeyArnHasBeenSet = true;
    }
    XmlNode iamRoleArnNode = resultNode.FirstChild("IamRoleArn");
    if(!iamRoleArnNode.IsNull())
    {
      m_iamRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(iamRoleArnNode.GetText());
      m_iamRoleArnHasBeenSet = true;
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

  if(m_iamRoleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
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
  if(m_iamRoleArnHasBeenSet)
  {
      oStream << location << ".IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
