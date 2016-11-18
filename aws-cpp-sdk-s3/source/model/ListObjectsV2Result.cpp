﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/ListObjectsV2Result.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListObjectsV2Result::ListObjectsV2Result() : 
    m_isTruncated(false),
    m_maxKeys(0),
    m_encodingType(EncodingType::NOT_SET),
    m_keyCount(0)
{
}

ListObjectsV2Result::ListObjectsV2Result(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false),
    m_maxKeys(0),
    m_encodingType(EncodingType::NOT_SET),
    m_keyCount(0)
{
  *this = result;
}

ListObjectsV2Result& ListObjectsV2Result::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode contentsNode = resultNode.FirstChild("Contents");
    if(!contentsNode.IsNull())
    {
      XmlNode contentsMember = contentsNode;
      while(!contentsMember.IsNull())
      {
        m_contents.push_back(contentsMember);
        contentsMember = contentsMember.NextNode("Contents");
      }

    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = StringUtils::Trim(nameNode.GetText().c_str());
    }
    XmlNode prefixNode = resultNode.FirstChild("Prefix");
    if(!prefixNode.IsNull())
    {
      m_prefix = StringUtils::Trim(prefixNode.GetText().c_str());
    }
    XmlNode delimiterNode = resultNode.FirstChild("Delimiter");
    if(!delimiterNode.IsNull())
    {
      m_delimiter = StringUtils::Trim(delimiterNode.GetText().c_str());
    }
    XmlNode maxKeysNode = resultNode.FirstChild("MaxKeys");
    if(!maxKeysNode.IsNull())
    {
      m_maxKeys = StringUtils::ConvertToInt32(StringUtils::Trim(maxKeysNode.GetText().c_str()).c_str());
    }
    XmlNode commonPrefixesNode = resultNode.FirstChild("CommonPrefixes");
    if(!commonPrefixesNode.IsNull())
    {
      XmlNode commonPrefixesMember = commonPrefixesNode;
      while(!commonPrefixesMember.IsNull())
      {
        m_commonPrefixes.push_back(commonPrefixesMember);
        commonPrefixesMember = commonPrefixesMember.NextNode("CommonPrefixes");
      }

    }
    XmlNode encodingTypeNode = resultNode.FirstChild("EncodingType");
    if(!encodingTypeNode.IsNull())
    {
      m_encodingType = EncodingTypeMapper::GetEncodingTypeForName(StringUtils::Trim(encodingTypeNode.GetText().c_str()).c_str());
    }
    XmlNode keyCountNode = resultNode.FirstChild("KeyCount");
    if(!keyCountNode.IsNull())
    {
      m_keyCount = StringUtils::ConvertToInt32(StringUtils::Trim(keyCountNode.GetText().c_str()).c_str());
    }
    XmlNode continuationTokenNode = resultNode.FirstChild("ContinuationToken");
    if(!continuationTokenNode.IsNull())
    {
      m_continuationToken = StringUtils::Trim(continuationTokenNode.GetText().c_str());
    }
    XmlNode nextContinuationTokenNode = resultNode.FirstChild("NextContinuationToken");
    if(!nextContinuationTokenNode.IsNull())
    {
      m_nextContinuationToken = StringUtils::Trim(nextContinuationTokenNode.GetText().c_str());
    }
    XmlNode startAfterNode = resultNode.FirstChild("StartAfter");
    if(!startAfterNode.IsNull())
    {
      m_startAfter = StringUtils::Trim(startAfterNode.GetText().c_str());
    }
  }

  return *this;
}
