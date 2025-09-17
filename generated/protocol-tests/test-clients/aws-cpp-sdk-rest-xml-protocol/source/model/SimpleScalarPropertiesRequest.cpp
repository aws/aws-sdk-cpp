/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/SimpleScalarPropertiesRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String SimpleScalarPropertiesRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("SimpleScalarPropertiesRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if (m_stringValueHasBeenSet) {
    XmlNode stringValueNode = parentNode.CreateChildElement("stringValue");
    stringValueNode.SetText(m_stringValue);
  }

  if (m_trueBooleanValueHasBeenSet) {
    XmlNode trueBooleanValueNode = parentNode.CreateChildElement("trueBooleanValue");
    ss << std::boolalpha << m_trueBooleanValue;
    trueBooleanValueNode.SetText(ss.str());
    ss.str("");
  }

  if (m_falseBooleanValueHasBeenSet) {
    XmlNode falseBooleanValueNode = parentNode.CreateChildElement("falseBooleanValue");
    ss << std::boolalpha << m_falseBooleanValue;
    falseBooleanValueNode.SetText(ss.str());
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
    XmlNode doubleValueNode = parentNode.CreateChildElement("DoubleDribble");
    ss << m_doubleValue;
    doubleValueNode.SetText(ss.str());
    ss.str("");
  }

  return payloadDoc.ConvertToString();
}

Aws::Http::HeaderValueCollection SimpleScalarPropertiesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_fooHasBeenSet) {
    ss << m_foo;
    headers.emplace("x-foo", ss.str());
    ss.str("");
  }

  return headers;
}
