/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetInstanceTpmEkPubResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetInstanceTpmEkPubResponse::GetInstanceTpmEkPubResponse() : 
    m_keyType(EkPubKeyType::NOT_SET),
    m_keyFormat(EkPubKeyFormat::NOT_SET)
{
}

GetInstanceTpmEkPubResponse::GetInstanceTpmEkPubResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_keyType(EkPubKeyType::NOT_SET),
    m_keyFormat(EkPubKeyFormat::NOT_SET)
{
  *this = result;
}

GetInstanceTpmEkPubResponse& GetInstanceTpmEkPubResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetInstanceTpmEkPubResponse"))
  {
    resultNode = rootNode.FirstChild("GetInstanceTpmEkPubResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
    }
    XmlNode keyTypeNode = resultNode.FirstChild("keyType");
    if(!keyTypeNode.IsNull())
    {
      m_keyType = EkPubKeyTypeMapper::GetEkPubKeyTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(keyTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode keyFormatNode = resultNode.FirstChild("keyFormat");
    if(!keyFormatNode.IsNull())
    {
      m_keyFormat = EkPubKeyFormatMapper::GetEkPubKeyFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(keyFormatNode.GetText()).c_str()).c_str());
    }
    XmlNode keyValueNode = resultNode.FirstChild("keyValue");
    if(!keyValueNode.IsNull())
    {
      m_keyValue = Aws::Utils::Xml::DecodeEscapedXmlText(keyValueNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetInstanceTpmEkPubResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
