/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/AdditionalKeyExchangeMethodsListValue.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

AdditionalKeyExchangeMethodsListValue::AdditionalKeyExchangeMethodsListValue(const XmlNode& xmlNode) { *this = xmlNode; }

AdditionalKeyExchangeMethodsListValue& AdditionalKeyExchangeMethodsListValue::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode valueNode = resultNode.FirstChild("value");
    if (!valueNode.IsNull()) {
      m_value = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText()).c_str()).c_str());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void AdditionalKeyExchangeMethodsListValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                           const char* locationValue) const {
  if (m_valueHasBeenSet) {
    oStream << location << index << locationValue << ".Value=" << m_value << "&";
  }
}

void AdditionalKeyExchangeMethodsListValue::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_valueHasBeenSet) {
    oStream << location << ".Value=" << m_value << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
