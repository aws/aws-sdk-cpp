/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/RevocationContent.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

RevocationContent::RevocationContent() : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_s3ObjectVersionHasBeenSet(false),
    m_revocationType(RevocationType::NOT_SET),
    m_revocationTypeHasBeenSet(false)
{
}

RevocationContent::RevocationContent(const XmlNode& xmlNode) : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_s3ObjectVersionHasBeenSet(false),
    m_revocationType(RevocationType::NOT_SET),
    m_revocationTypeHasBeenSet(false)
{
  *this = xmlNode;
}

RevocationContent& RevocationContent::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode s3BucketNode = resultNode.FirstChild("S3Bucket");
    if(!s3BucketNode.IsNull())
    {
      m_s3Bucket = Aws::Utils::Xml::DecodeEscapedXmlText(s3BucketNode.GetText());
      m_s3BucketHasBeenSet = true;
    }
    XmlNode s3KeyNode = resultNode.FirstChild("S3Key");
    if(!s3KeyNode.IsNull())
    {
      m_s3Key = Aws::Utils::Xml::DecodeEscapedXmlText(s3KeyNode.GetText());
      m_s3KeyHasBeenSet = true;
    }
    XmlNode s3ObjectVersionNode = resultNode.FirstChild("S3ObjectVersion");
    if(!s3ObjectVersionNode.IsNull())
    {
      m_s3ObjectVersion = Aws::Utils::Xml::DecodeEscapedXmlText(s3ObjectVersionNode.GetText());
      m_s3ObjectVersionHasBeenSet = true;
    }
    XmlNode revocationTypeNode = resultNode.FirstChild("RevocationType");
    if(!revocationTypeNode.IsNull())
    {
      m_revocationType = RevocationTypeMapper::GetRevocationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(revocationTypeNode.GetText()).c_str()).c_str());
      m_revocationTypeHasBeenSet = true;
    }
  }

  return *this;
}

void RevocationContent::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_s3BucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }

  if(m_s3KeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Key=" << StringUtils::URLEncode(m_s3Key.c_str()) << "&";
  }

  if(m_s3ObjectVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3ObjectVersion=" << StringUtils::URLEncode(m_s3ObjectVersion.c_str()) << "&";
  }

  if(m_revocationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RevocationType=" << RevocationTypeMapper::GetNameForRevocationType(m_revocationType) << "&";
  }

}

void RevocationContent::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_s3BucketHasBeenSet)
  {
      oStream << location << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }
  if(m_s3KeyHasBeenSet)
  {
      oStream << location << ".S3Key=" << StringUtils::URLEncode(m_s3Key.c_str()) << "&";
  }
  if(m_s3ObjectVersionHasBeenSet)
  {
      oStream << location << ".S3ObjectVersion=" << StringUtils::URLEncode(m_s3ObjectVersion.c_str()) << "&";
  }
  if(m_revocationTypeHasBeenSet)
  {
      oStream << location << ".RevocationType=" << RevocationTypeMapper::GetNameForRevocationType(m_revocationType) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
