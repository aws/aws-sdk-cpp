/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
enum class StringEnum { NOT_SET, enumvalue };

namespace StringEnumMapper {
AWS_RESTJSONPROTOCOL_API StringEnum GetStringEnumForName(const Aws::String& name);

AWS_RESTJSONPROTOCOL_API Aws::String GetNameForStringEnum(StringEnum value);
}  // namespace StringEnumMapper
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
