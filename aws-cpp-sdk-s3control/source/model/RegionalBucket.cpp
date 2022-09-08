/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/RegionalBucket.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

RegionalBucket::RegionalBucket() : 
    m_bucketHasBeenSet(false),
    m_bucketArnHasBeenSet(false),
    m_publicAccessBlockEnabled(false),
    m_publicAccessBlockEnabledHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_outpostIdHasBeenSet(false)
{
}

RegionalBucket::RegionalBucket(const XmlNode& xmlNode) : 
    m_bucketHasBeenSet(false),
    m_bucketArnHasBeenSet(false),
    m_publicAccessBlockEnabled(false),
    m_publicAccessBlockEnabledHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_outpostIdHasBeenSet(false)
{
  *this = xmlNode;
}

RegionalBucket& RegionalBucket::operator =(const XmlNode& xmlNode)
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
    XmlNode bucketArnNode = resultNode.FirstChild("BucketArn");
    if(!bucketArnNode.IsNull())
    {
      m_bucketArn = Aws::Utils::Xml::DecodeEscapedXmlText(bucketArnNode.GetText());
      m_bucketArnHasBeenSet = true;
    }
    XmlNode publicAccessBlockEnabledNode = resultNode.FirstChild("PublicAccessBlockEnabled");
    if(!publicAccessBlockEnabledNode.IsNull())
    {
      m_publicAccessBlockEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publicAccessBlockEnabledNode.GetText()).c_str()).c_str());
      m_publicAccessBlockEnabledHasBeenSet = true;
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationDateHasBeenSet = true;
    }
    XmlNode outpostIdNode = resultNode.FirstChild("OutpostId");
    if(!outpostIdNode.IsNull())
    {
      m_outpostId = Aws::Utils::Xml::DecodeEscapedXmlText(outpostIdNode.GetText());
      m_outpostIdHasBeenSet = true;
    }
  }

  return *this;
}

void RegionalBucket::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   bucketNode.SetText(m_bucket);
  }

  if(m_bucketArnHasBeenSet)
  {
   XmlNode bucketArnNode = parentNode.CreateChildElement("BucketArn");
   bucketArnNode.SetText(m_bucketArn);
  }

  if(m_publicAccessBlockEnabledHasBeenSet)
  {
   XmlNode publicAccessBlockEnabledNode = parentNode.CreateChildElement("PublicAccessBlockEnabled");
   ss << std::boolalpha << m_publicAccessBlockEnabled;
   publicAccessBlockEnabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_creationDateHasBeenSet)
  {
   XmlNode creationDateNode = parentNode.CreateChildElement("CreationDate");
   creationDateNode.SetText(m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_outpostIdHasBeenSet)
  {
   XmlNode outpostIdNode = parentNode.CreateChildElement("OutpostId");
   outpostIdNode.SetText(m_outpostId);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
