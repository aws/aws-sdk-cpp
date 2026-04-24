/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/SimpleScalarXmlPropertiesResult.h>

#include <utility>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

SimpleScalarXmlPropertiesResult::SimpleScalarXmlPropertiesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

SimpleScalarXmlPropertiesResult& SimpleScalarXmlPropertiesResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "SimpleScalarXmlPropertiesResult")) {
    resultNode = rootNode.FirstChild("SimpleScalarXmlPropertiesResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode stringValueNode = resultNode.FirstChild("stringValue");
    if (!stringValueNode.IsNull()) {
      m_stringValue = Aws::Utils::Xml::DecodeEscapedXmlText(stringValueNode.GetText());
      m_stringValueHasBeenSet = true;
    }
    XmlNode emptyStringValueNode = resultNode.FirstChild("emptyStringValue");
    if (!emptyStringValueNode.IsNull()) {
      m_emptyStringValue = Aws::Utils::Xml::DecodeEscapedXmlText(emptyStringValueNode.GetText());
      m_emptyStringValueHasBeenSet = true;
    }
    XmlNode trueBooleanValueNode = resultNode.FirstChild("trueBooleanValue");
    if (!trueBooleanValueNode.IsNull()) {
      m_trueBooleanValue = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trueBooleanValueNode.GetText()).c_str()).c_str());
      m_trueBooleanValueHasBeenSet = true;
    }
    XmlNode falseBooleanValueNode = resultNode.FirstChild("falseBooleanValue");
    if (!falseBooleanValueNode.IsNull()) {
      m_falseBooleanValue = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(falseBooleanValueNode.GetText()).c_str()).c_str());
      m_falseBooleanValueHasBeenSet = true;
    }
    XmlNode byteValueNode = resultNode.FirstChild("byteValue");
    if (!byteValueNode.IsNull()) {
      m_byteValue =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(byteValueNode.GetText()).c_str()).c_str());
      m_byteValueHasBeenSet = true;
    }
    XmlNode shortValueNode = resultNode.FirstChild("shortValue");
    if (!shortValueNode.IsNull()) {
      m_shortValue =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(shortValueNode.GetText()).c_str()).c_str());
      m_shortValueHasBeenSet = true;
    }
    XmlNode integerValueNode = resultNode.FirstChild("integerValue");
    if (!integerValueNode.IsNull()) {
      m_integerValue =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(integerValueNode.GetText()).c_str()).c_str());
      m_integerValueHasBeenSet = true;
    }
    XmlNode longValueNode = resultNode.FirstChild("longValue");
    if (!longValueNode.IsNull()) {
      m_longValue =
          StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(longValueNode.GetText()).c_str()).c_str());
      m_longValueHasBeenSet = true;
    }
    XmlNode floatValueNode = resultNode.FirstChild("floatValue");
    if (!floatValueNode.IsNull()) {
      m_floatValue =
          StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(floatValueNode.GetText()).c_str()).c_str());
      m_floatValueHasBeenSet = true;
    }
    XmlNode doubleValueNode = resultNode.FirstChild("DoubleDribble");
    if (!doubleValueNode.IsNull()) {
      m_doubleValue =
          StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(doubleValueNode.GetText()).c_str()).c_str());
      m_doubleValueHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::SimpleScalarXmlPropertiesResult",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
