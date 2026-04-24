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
enum class MessageFormat { NOT_SET, RAW, JSON };

namespace MessageFormatMapper {
AWS_IOT_API MessageFormat GetMessageFormatForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForMessageFormat(MessageFormat value);
}  // namespace MessageFormatMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
