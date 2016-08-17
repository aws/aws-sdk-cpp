/*
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
#include <aws/sdb/model/DomainMetadataResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DomainMetadataResult::DomainMetadataResult() : 
    m_itemCount(0),
    m_itemNamesSizeBytes(0),
    m_attributeNameCount(0),
    m_attributeNamesSizeBytes(0),
    m_attributeValueCount(0),
    m_attributeValuesSizeBytes(0),
    m_timestamp(0)
{
}

DomainMetadataResult::DomainMetadataResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_itemCount(0),
    m_itemNamesSizeBytes(0),
    m_attributeNameCount(0),
    m_attributeNamesSizeBytes(0),
    m_attributeValueCount(0),
    m_attributeValuesSizeBytes(0),
    m_timestamp(0)
{
  *this = result;
}

DomainMetadataResult& DomainMetadataResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "DomainMetadataResult")
  {
    resultNode = rootNode.FirstChild("DomainMetadataResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode itemCountNode = resultNode.FirstChild("ItemCount");
    if(!itemCountNode.IsNull())
    {
      m_itemCount = StringUtils::ConvertToInt32(StringUtils::Trim(itemCountNode.GetText().c_str()).c_str());
    }
    XmlNode itemNamesSizeBytesNode = resultNode.FirstChild("ItemNamesSizeBytes");
    if(!itemNamesSizeBytesNode.IsNull())
    {
      m_itemNamesSizeBytes = StringUtils::ConvertToInt64(StringUtils::Trim(itemNamesSizeBytesNode.GetText().c_str()).c_str());
    }
    XmlNode attributeNameCountNode = resultNode.FirstChild("AttributeNameCount");
    if(!attributeNameCountNode.IsNull())
    {
      m_attributeNameCount = StringUtils::ConvertToInt32(StringUtils::Trim(attributeNameCountNode.GetText().c_str()).c_str());
    }
    XmlNode attributeNamesSizeBytesNode = resultNode.FirstChild("AttributeNamesSizeBytes");
    if(!attributeNamesSizeBytesNode.IsNull())
    {
      m_attributeNamesSizeBytes = StringUtils::ConvertToInt64(StringUtils::Trim(attributeNamesSizeBytesNode.GetText().c_str()).c_str());
    }
    XmlNode attributeValueCountNode = resultNode.FirstChild("AttributeValueCount");
    if(!attributeValueCountNode.IsNull())
    {
      m_attributeValueCount = StringUtils::ConvertToInt32(StringUtils::Trim(attributeValueCountNode.GetText().c_str()).c_str());
    }
    XmlNode attributeValuesSizeBytesNode = resultNode.FirstChild("AttributeValuesSizeBytes");
    if(!attributeValuesSizeBytesNode.IsNull())
    {
      m_attributeValuesSizeBytes = StringUtils::ConvertToInt64(StringUtils::Trim(attributeValuesSizeBytesNode.GetText().c_str()).c_str());
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = StringUtils::ConvertToInt32(StringUtils::Trim(timestampNode.GetText().c_str()).c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::SimpleDB::Model::DomainMetadataResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
