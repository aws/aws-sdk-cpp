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
enum class CompressionType { NOT_SET, gzip, bzip2 };

namespace CompressionTypeMapper {
AWS_GLUE_API CompressionType GetCompressionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForCompressionType(CompressionType value);
}  // namespace CompressionTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
