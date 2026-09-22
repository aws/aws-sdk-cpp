/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class RowScopeOperator { NOT_SET, IN };

namespace RowScopeOperatorMapper {
AWS_CLOUDWATCHOMNI_API RowScopeOperator GetRowScopeOperatorForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForRowScopeOperator(RowScopeOperator value);
}  // namespace RowScopeOperatorMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
