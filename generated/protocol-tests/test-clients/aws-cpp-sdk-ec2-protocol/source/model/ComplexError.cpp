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
#include <aws/ec2-protocol/model/ComplexError.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2Protocol {
namespace Model {

ComplexError::ComplexError(const XmlNode& xmlNode) { *this = xmlNode; }

ComplexError& ComplexError::operator=(const XmlNode&) { return *this; }

void ComplexError::OutputToStream(Aws::OStream&, const char*, unsigned, const char*) const {}

void ComplexError::OutputToStream(Aws::OStream&, const char*) const {}

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
