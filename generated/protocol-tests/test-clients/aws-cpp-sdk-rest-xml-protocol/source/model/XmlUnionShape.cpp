/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
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

XmlUnionShape& XmlUnionShape::operator=(const XmlNode&) { return *this; }

void XmlUnionShape::AddToNode(XmlNode&) const {}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
