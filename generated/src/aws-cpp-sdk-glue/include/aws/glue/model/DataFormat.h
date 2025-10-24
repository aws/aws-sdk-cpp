/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class DataFormat { NOT_SET, AVRO, JSON, PROTOBUF };

namespace DataFormatMapper {
AWS_GLUE_API DataFormat GetDataFormatForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDataFormat(DataFormat value);
}  // namespace DataFormatMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
