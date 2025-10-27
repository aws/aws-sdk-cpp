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
enum class HudiTargetCompressionType { NOT_SET, gzip, lzo, uncompressed, snappy };

namespace HudiTargetCompressionTypeMapper {
AWS_GLUE_API HudiTargetCompressionType GetHudiTargetCompressionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForHudiTargetCompressionType(HudiTargetCompressionType value);
}  // namespace HudiTargetCompressionTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
