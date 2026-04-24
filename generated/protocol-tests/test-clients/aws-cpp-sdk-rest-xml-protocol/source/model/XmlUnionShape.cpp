/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlUnionShape.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

XmlUnionShape::XmlUnionShape(const XmlNode& xmlNode) { *this = xmlNode; }

XmlUnionShape& XmlUnionShape::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode stringValueNode = resultNode.FirstChild("stringValue");
    if (!stringValueNode.IsNull()) {
      m_stringValue = Aws::Utils::Xml::DecodeEscapedXmlText(stringValueNode.GetText());
      m_stringValueHasBeenSet = true;
    }
    XmlNode booleanValueNode = resultNode.FirstChild("booleanValue");
    if (!booleanValueNode.IsNull()) {
      m_booleanValue =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(booleanValueNode.GetText()).c_str()).c_str());
      m_booleanValueHasBeenSet = true;
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
    XmlNode doubleValueNode = resultNode.FirstChild("doubleValue");
    if (!doubleValueNode.IsNull()) {
      m_doubleValue =
          StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(doubleValueNode.GetText()).c_str()).c_str());
      m_doubleValueHasBeenSet = true;
    }
    XmlNode unionValueNode = resultNode.FirstChild("unionValue");
    if (!unionValueNode.IsNull()) {
      m_unionValue = Aws::MakeShared<XmlUnionShape>("XmlUnionShape", unionValueNode);
      m_unionValueHasBeenSet = true;
    }
    XmlNode structValueNode = resultNode.FirstChild("structValue");
    if (!structValueNode.IsNull()) {
      m_structValue = structValueNode;
      m_structValueHasBeenSet = true;
    }
  }

  return *this;
}

void XmlUnionShape::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_stringValueHasBeenSet) {
    XmlNode stringValueNode = parentNode.CreateChildElement("stringValue");
    stringValueNode.SetText(m_stringValue);
  }

  if (m_booleanValueHasBeenSet) {
    XmlNode booleanValueNode = parentNode.CreateChildElement("booleanValue");
    ss << std::boolalpha << m_booleanValue;
    booleanValueNode.SetText(ss.str());
    ss.str("");
  }

  if (m_byteValueHasBeenSet) {
    XmlNode byteValueNode = parentNode.CreateChildElement("byteValue");
    ss << m_byteValue;
    byteValueNode.SetText(ss.str());
    ss.str("");
  }

  if (m_shortValueHasBeenSet) {
    XmlNode shortValueNode = parentNode.CreateChildElement("shortValue");
    ss << m_shortValue;
    shortValueNode.SetText(ss.str());
    ss.str("");
  }

  if (m_integerValueHasBeenSet) {
    XmlNode integerValueNode = parentNode.CreateChildElement("integerValue");
    ss << m_integerValue;
    integerValueNode.SetText(ss.str());
    ss.str("");
  }

  if (m_longValueHasBeenSet) {
    XmlNode longValueNode = parentNode.CreateChildElement("longValue");
    ss << m_longValue;
    longValueNode.SetText(ss.str());
    ss.str("");
  }

  if (m_floatValueHasBeenSet) {
    XmlNode floatValueNode = parentNode.CreateChildElement("floatValue");
    ss << m_floatValue;
    floatValueNode.SetText(ss.str());
    ss.str("");
  }

  if (m_doubleValueHasBeenSet) {
    XmlNode doubleValueNode = parentNode.CreateChildElement("doubleValue");
    ss << m_doubleValue;
    doubleValueNode.SetText(ss.str());
    ss.str("");
  }

  if (m_unionValueHasBeenSet) {
    XmlNode unionValueNode = parentNode.CreateChildElement("unionValue");
    m_unionValue->AddToNode(unionValueNode);
  }

  if (m_structValueHasBeenSet) {
    XmlNode structValueNode = parentNode.CreateChildElement("structValue");
    m_structValue.AddToNode(structValueNode);
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
