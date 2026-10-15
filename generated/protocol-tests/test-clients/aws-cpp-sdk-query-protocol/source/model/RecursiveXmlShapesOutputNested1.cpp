/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/RecursiveXmlShapesOutputNested1.h>
#include <aws/query-protocol/model/RecursiveXmlShapesOutputNested2.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace QueryProtocol {
namespace Model {

RecursiveXmlShapesOutputNested1::RecursiveXmlShapesOutputNested1(const XmlNode& xmlNode) { *this = xmlNode; }

RecursiveXmlShapesOutputNested1& RecursiveXmlShapesOutputNested1::operator=(const XmlNode&) { return *this; }

void RecursiveXmlShapesOutputNested1::OutputToStream(Aws::OStream&, const char*, unsigned, const char*) const {}

void RecursiveXmlShapesOutputNested1::OutputToStream(Aws::OStream&, const char*) const {}

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
