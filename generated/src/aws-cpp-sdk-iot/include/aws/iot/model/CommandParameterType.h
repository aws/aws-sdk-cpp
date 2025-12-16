/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class CommandParameterType { NOT_SET, STRING, INTEGER, DOUBLE, LONG, UNSIGNEDLONG, BOOLEAN, BINARY };

namespace CommandParameterTypeMapper {
AWS_IOT_API CommandParameterType GetCommandParameterTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForCommandParameterType(CommandParameterType value);
}  // namespace CommandParameterTypeMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
