/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQL_EXPORTS.h>

namespace Aws {
namespace DSQL {
namespace Model {
enum class MetricGroup { NOT_SET, STATEMENT_STATISTICS };

namespace MetricGroupMapper {
AWS_DSQL_API MetricGroup GetMetricGroupForName(const Aws::String& name);

AWS_DSQL_API Aws::String GetNameForMetricGroup(MetricGroup value);
}  // namespace MetricGroupMapper
}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
