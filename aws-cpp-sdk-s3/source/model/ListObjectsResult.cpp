/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/ListObjectsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListObjectsResult::ListObjectsResult() : 
    m_isTruncated(false),
    m_maxKeys(0)
{
}

ListObjectsResult::ListObjectsResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false),
    m_maxKeys(0)
{
  *this = result;
}

ListObjectsResult& ListObjectsResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    XmlNode markerNode = resultNode.FirstChild("Marker");
    m_marker = StringUtils::Trim(markerNode.GetText().c_str());
    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    m_nextMarker = StringUtils::Trim(nextMarkerNode.GetText().c_str());
    XmlNode objectNode = resultNode.FirstChild("Contents");
    while(!objectNode.IsNull())
    {
      m_contents.push_back(objectNode);
      objectNode = objectNode.NextNode("Contents");
    }

    XmlNode nameNode = resultNode.FirstChild("Name");
    m_name = StringUtils::Trim(nameNode.GetText().c_str());
    XmlNode prefixNode = resultNode.FirstChild("Prefix");
    m_prefix = StringUtils::Trim(prefixNode.GetText().c_str());
    XmlNode delimiterNode = resultNode.FirstChild("Delimiter");
    m_delimiter = StringUtils::Trim(delimiterNode.GetText().c_str());
    XmlNode maxKeysNode = resultNode.FirstChild("MaxKeys");
    m_maxKeys = StringUtils::ConvertToInt32(StringUtils::Trim(maxKeysNode.GetText().c_str()).c_str());
    XmlNode commonPrefixNode = resultNode.FirstChild("CommonPrefixes");
    while(!commonPrefixNode.IsNull())
    {
      m_commonPrefixes.push_back(commonPrefixNode);
      commonPrefixNode = commonPrefixNode.NextNode("CommonPrefixes");
    }

    XmlNode encodingTypeNode = resultNode.FirstChild("EncodingType");
    m_encodingType = EncodingTypeMapper::GetEncodingTypeForName(StringUtils::Trim(encodingTypeNode.GetText().c_str()).c_str());
  }

  return *this;
}
