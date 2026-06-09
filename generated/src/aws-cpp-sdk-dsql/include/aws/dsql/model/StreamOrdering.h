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
enum class StreamOrdering { NOT_SET, UNORDERED };

namespace StreamOrderingMapper {
AWS_DSQL_API StreamOrdering GetStreamOrderingForName(const Aws::String& name);

AWS_DSQL_API Aws::String GetNameForStreamOrdering(StreamOrdering value);
}  // namespace StreamOrderingMapper
}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
