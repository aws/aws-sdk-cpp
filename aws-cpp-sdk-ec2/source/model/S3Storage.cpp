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

#include <aws/ec2/model/S3Storage.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

S3Storage::S3Storage() : 
    m_aWSAccessKeyIdHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_uploadPolicyHasBeenSet(false),
    m_uploadPolicySignatureHasBeenSet(false)
{
}

S3Storage::S3Storage(const XmlNode& xmlNode) : 
    m_aWSAccessKeyIdHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_uploadPolicyHasBeenSet(false),
    m_uploadPolicySignatureHasBeenSet(false)
{
  *this = xmlNode;
}

S3Storage& S3Storage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode aWSAccessKeyIdNode = resultNode.FirstChild("AWSAccessKeyId");
    if(!aWSAccessKeyIdNode.IsNull())
    {
      m_aWSAccessKeyId = aWSAccessKeyIdNode.GetText();
      m_aWSAccessKeyIdHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = bucketNode.GetText();
      m_bucketHasBeenSet = true;
    }
    XmlNode prefixNode = resultNode.FirstChild("prefix");
    if(!prefixNode.IsNull())
    {
      m_prefix = prefixNode.GetText();
      m_prefixHasBeenSet = true;
    }
    XmlNode uploadPolicyNode = resultNode.FirstChild("uploadPolicy");
    if(!uploadPolicyNode.IsNull())
    {
      m_uploadPolicy = HashingUtils::Base64Decode(uploadPolicyNode.GetText());
      m_uploadPolicyHasBeenSet = true;
    }
    XmlNode uploadPolicySignatureNode = resultNode.FirstChild("uploadPolicySignature");
    if(!uploadPolicySignatureNode.IsNull())
    {
      m_uploadPolicySignature = uploadPolicySignatureNode.GetText();
      m_uploadPolicySignatureHasBeenSet = true;
    }
  }

  return *this;
}

void S3Storage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_aWSAccessKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AWSAccessKeyId=" << StringUtils::URLEncode(m_aWSAccessKeyId.c_str()) << "&";
  }

  if(m_bucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }

  if(m_prefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }

  if(m_uploadPolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".UploadPolicy=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_uploadPolicy).c_str()) << "&";
  }

  if(m_uploadPolicySignatureHasBeenSet)
  {
      oStream << location << index << locationValue << ".UploadPolicySignature=" << StringUtils::URLEncode(m_uploadPolicySignature.c_str()) << "&";
  }

}

void S3Storage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_aWSAccessKeyIdHasBeenSet)
  {
      oStream << location << ".AWSAccessKeyId=" << StringUtils::URLEncode(m_aWSAccessKeyId.c_str()) << "&";
  }
  if(m_bucketHasBeenSet)
  {
      oStream << location << ".Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }
  if(m_prefixHasBeenSet)
  {
      oStream << location << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }
  if(m_uploadPolicyHasBeenSet)
  {
      oStream << location << ".UploadPolicy=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_uploadPolicy).c_str()) << "&";
  }
  if(m_uploadPolicySignatureHasBeenSet)
  {
      oStream << location << ".UploadPolicySignature=" << StringUtils::URLEncode(m_uploadPolicySignature.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
