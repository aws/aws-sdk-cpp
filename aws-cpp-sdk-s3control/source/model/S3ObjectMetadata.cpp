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

#include <aws/s3control/model/S3ObjectMetadata.h>
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

S3ObjectMetadata::S3ObjectMetadata() : 
    m_cacheControlHasBeenSet(false),
    m_contentDispositionHasBeenSet(false),
    m_contentEncodingHasBeenSet(false),
    m_contentLanguageHasBeenSet(false),
    m_userMetadataHasBeenSet(false),
    m_contentLength(0),
    m_contentLengthHasBeenSet(false),
    m_contentMD5HasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_httpExpiresDateHasBeenSet(false),
    m_requesterCharged(false),
    m_requesterChargedHasBeenSet(false),
    m_sSEAlgorithm(S3SSEAlgorithm::NOT_SET),
    m_sSEAlgorithmHasBeenSet(false)
{
}

S3ObjectMetadata::S3ObjectMetadata(const XmlNode& xmlNode) : 
    m_cacheControlHasBeenSet(false),
    m_contentDispositionHasBeenSet(false),
    m_contentEncodingHasBeenSet(false),
    m_contentLanguageHasBeenSet(false),
    m_userMetadataHasBeenSet(false),
    m_contentLength(0),
    m_contentLengthHasBeenSet(false),
    m_contentMD5HasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_httpExpiresDateHasBeenSet(false),
    m_requesterCharged(false),
    m_requesterChargedHasBeenSet(false),
    m_sSEAlgorithm(S3SSEAlgorithm::NOT_SET),
    m_sSEAlgorithmHasBeenSet(false)
{
  *this = xmlNode;
}

S3ObjectMetadata& S3ObjectMetadata::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheControlNode = resultNode.FirstChild("CacheControl");
    if(!cacheControlNode.IsNull())
    {
      m_cacheControl = cacheControlNode.GetText();
      m_cacheControlHasBeenSet = true;
    }
    XmlNode contentDispositionNode = resultNode.FirstChild("ContentDisposition");
    if(!contentDispositionNode.IsNull())
    {
      m_contentDisposition = contentDispositionNode.GetText();
      m_contentDispositionHasBeenSet = true;
    }
    XmlNode contentEncodingNode = resultNode.FirstChild("ContentEncoding");
    if(!contentEncodingNode.IsNull())
    {
      m_contentEncoding = contentEncodingNode.GetText();
      m_contentEncodingHasBeenSet = true;
    }
    XmlNode contentLanguageNode = resultNode.FirstChild("ContentLanguage");
    if(!contentLanguageNode.IsNull())
    {
      m_contentLanguage = contentLanguageNode.GetText();
      m_contentLanguageHasBeenSet = true;
    }
    XmlNode userMetadataNode = resultNode.FirstChild("UserMetadata");

    if(!userMetadataNode.IsNull())
    {
      XmlNode userMetadataEntry = userMetadataNode.FirstChild("entry");
      while(!userMetadataEntry.IsNull())
      {
        XmlNode keyNode = userMetadataEntry.FirstChild("key");
        XmlNode valueNode = userMetadataEntry.FirstChild("value");
        m_userMetadata[keyNode.GetText()] =
            valueNode.GetText();
        userMetadataEntry = userMetadataEntry.NextNode("entry");
      }

      m_userMetadataHasBeenSet = true;
    }
    XmlNode contentLengthNode = resultNode.FirstChild("ContentLength");
    if(!contentLengthNode.IsNull())
    {
      m_contentLength = StringUtils::ConvertToInt64(StringUtils::Trim(contentLengthNode.GetText().c_str()).c_str());
      m_contentLengthHasBeenSet = true;
    }
    XmlNode contentMD5Node = resultNode.FirstChild("ContentMD5");
    if(!contentMD5Node.IsNull())
    {
      m_contentMD5 = contentMD5Node.GetText();
      m_contentMD5HasBeenSet = true;
    }
    XmlNode contentTypeNode = resultNode.FirstChild("ContentType");
    if(!contentTypeNode.IsNull())
    {
      m_contentType = contentTypeNode.GetText();
      m_contentTypeHasBeenSet = true;
    }
    XmlNode httpExpiresDateNode = resultNode.FirstChild("HttpExpiresDate");
    if(!httpExpiresDateNode.IsNull())
    {
      m_httpExpiresDate = DateTime(StringUtils::Trim(httpExpiresDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_httpExpiresDateHasBeenSet = true;
    }
    XmlNode requesterChargedNode = resultNode.FirstChild("RequesterCharged");
    if(!requesterChargedNode.IsNull())
    {
      m_requesterCharged = StringUtils::ConvertToBool(StringUtils::Trim(requesterChargedNode.GetText().c_str()).c_str());
      m_requesterChargedHasBeenSet = true;
    }
    XmlNode sSEAlgorithmNode = resultNode.FirstChild("SSEAlgorithm");
    if(!sSEAlgorithmNode.IsNull())
    {
      m_sSEAlgorithm = S3SSEAlgorithmMapper::GetS3SSEAlgorithmForName(StringUtils::Trim(sSEAlgorithmNode.GetText().c_str()).c_str());
      m_sSEAlgorithmHasBeenSet = true;
    }
  }

  return *this;
}

void S3ObjectMetadata::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_cacheControlHasBeenSet)
  {
   XmlNode cacheControlNode = parentNode.CreateChildElement("CacheControl");
   cacheControlNode.SetText(m_cacheControl);
  }

  if(m_contentDispositionHasBeenSet)
  {
   XmlNode contentDispositionNode = parentNode.CreateChildElement("ContentDisposition");
   contentDispositionNode.SetText(m_contentDisposition);
  }

  if(m_contentEncodingHasBeenSet)
  {
   XmlNode contentEncodingNode = parentNode.CreateChildElement("ContentEncoding");
   contentEncodingNode.SetText(m_contentEncoding);
  }

  if(m_contentLanguageHasBeenSet)
  {
   XmlNode contentLanguageNode = parentNode.CreateChildElement("ContentLanguage");
   contentLanguageNode.SetText(m_contentLanguage);
  }

  if(m_userMetadataHasBeenSet)
  {
  }

  if(m_contentLengthHasBeenSet)
  {
   XmlNode contentLengthNode = parentNode.CreateChildElement("ContentLength");
   ss << m_contentLength;
   contentLengthNode.SetText(ss.str());
   ss.str("");
  }

  if(m_contentMD5HasBeenSet)
  {
   XmlNode contentMD5Node = parentNode.CreateChildElement("ContentMD5");
   contentMD5Node.SetText(m_contentMD5);
  }

  if(m_contentTypeHasBeenSet)
  {
   XmlNode contentTypeNode = parentNode.CreateChildElement("ContentType");
   contentTypeNode.SetText(m_contentType);
  }

  if(m_httpExpiresDateHasBeenSet)
  {
   XmlNode httpExpiresDateNode = parentNode.CreateChildElement("HttpExpiresDate");
   httpExpiresDateNode.SetText(m_httpExpiresDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_requesterChargedHasBeenSet)
  {
   XmlNode requesterChargedNode = parentNode.CreateChildElement("RequesterCharged");
   ss << std::boolalpha << m_requesterCharged;
   requesterChargedNode.SetText(ss.str());
   ss.str("");
  }

  if(m_sSEAlgorithmHasBeenSet)
  {
   XmlNode sSEAlgorithmNode = parentNode.CreateChildElement("SSEAlgorithm");
   sSEAlgorithmNode.SetText(S3SSEAlgorithmMapper::GetNameForS3SSEAlgorithm(m_sSEAlgorithm));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
