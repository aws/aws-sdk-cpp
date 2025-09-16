/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {
enum class StringEnum { NOT_SET, enumvalue };

namespace StringEnumMapper {
AWS_RESTXMLPROTOCOL_API StringEnum GetStringEnumForName(const Aws::String& name);

AWS_RESTXMLPROTOCOL_API Aws::String GetNameForStringEnum(StringEnum value);
}  // namespace StringEnumMapper
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
