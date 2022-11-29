/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessLogS3DestinationOptions.h>
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

VerifiedAccessLogS3DestinationOptions::VerifiedAccessLogS3DestinationOptions() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_bucketOwnerHasBeenSet(false)
{
}

VerifiedAccessLogS3DestinationOptions::VerifiedAccessLogS3DestinationOptions(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_bucketOwnerHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessLogS3DestinationOptions& VerifiedAccessLogS3DestinationOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode bucketNameNode = resultNode.FirstChild("BucketName");
    if(!bucketNameNode.IsNull())
    {
      m_bucketName = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNameNode.GetText());
      m_bucketNameHasBeenSet = true;
    }
    XmlNode prefixNode = resultNode.FirstChild("Prefix");
    if(!prefixNode.IsNull())
    {
      m_prefix = Aws::Utils::Xml::DecodeEscapedXmlText(prefixNode.GetText());
      m_prefixHasBeenSet = true;
    }
    XmlNode bucketOwnerNode = resultNode.FirstChild("BucketOwner");
    if(!bucketOwnerNode.IsNull())
    {
      m_bucketOwner = Aws::Utils::Xml::DecodeEscapedXmlText(bucketOwnerNode.GetText());
      m_bucketOwnerHasBeenSet = true;
    }
  }

  return *this;
}

void VerifiedAccessLogS3DestinationOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_bucketNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".BucketName=" << StringUtils::URLEncode(m_bucketName.c_str()) << "&";
  }

  if(m_prefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }

  if(m_bucketOwnerHasBeenSet)
  {
      oStream << location << index << locationValue << ".BucketOwner=" << StringUtils::URLEncode(m_bucketOwner.c_str()) << "&";
  }

}

void VerifiedAccessLogS3DestinationOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_bucketNameHasBeenSet)
  {
      oStream << location << ".BucketName=" << StringUtils::URLEncode(m_bucketName.c_str()) << "&";
  }
  if(m_prefixHasBeenSet)
  {
      oStream << location << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }
  if(m_bucketOwnerHasBeenSet)
  {
      oStream << location << ".BucketOwner=" << StringUtils::URLEncode(m_bucketOwner.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
