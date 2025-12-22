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
enum class OutputFormat { NOT_SET, JSON, CBOR };

namespace OutputFormatMapper {
AWS_IOT_API OutputFormat GetOutputFormatForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForOutputFormat(OutputFormat value);
}  // namespace OutputFormatMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
