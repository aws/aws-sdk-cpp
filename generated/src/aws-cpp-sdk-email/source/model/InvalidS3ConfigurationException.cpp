/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/InvalidS3ConfigurationException.h>
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

InvalidS3ConfigurationException::InvalidS3ConfigurationException() : 
    m_bucketHasBeenSet(false)
{
}

InvalidS3ConfigurationException::InvalidS3ConfigurationException(const XmlNode& xmlNode) : 
    m_bucketHasBeenSet(false)
{
  *this = xmlNode;
}

InvalidS3ConfigurationException& InvalidS3ConfigurationException::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
  }

  return *this;
}

void InvalidS3ConfigurationException::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_bucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }

}

void InvalidS3ConfigurationException::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_bucketHasBeenSet)
  {
      oStream << location << ".Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
