/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/DataPipeline_EXPORTS.h>

namespace Aws {
namespace DataPipeline {
namespace Model {
enum class OperatorType { NOT_SET, EQ, REF_EQ, LE, GE, BETWEEN };

namespace OperatorTypeMapper {
AWS_DATAPIPELINE_API OperatorType GetOperatorTypeForName(const Aws::String& name);

AWS_DATAPIPELINE_API Aws::String GetNameForOperatorType(OperatorType value);
}  // namespace OperatorTypeMapper
}  // namespace Model
}  // namespace DataPipeline
}  // namespace Aws
