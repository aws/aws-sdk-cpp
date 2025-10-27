/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class DataCompressionType { NOT_SET, NONE, LZ4 };

namespace DataCompressionTypeMapper {
AWS_FSX_API DataCompressionType GetDataCompressionTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForDataCompressionType(DataCompressionType value);
}  // namespace DataCompressionTypeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
