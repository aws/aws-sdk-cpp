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
enum class StreamStatus { NOT_SET, CREATING, ACTIVE, DELETING, DELETED, FAILED, IMPAIRED };

namespace StreamStatusMapper {
AWS_DSQL_API StreamStatus GetStreamStatusForName(const Aws::String& name);

AWS_DSQL_API Aws::String GetNameForStreamStatus(StreamStatus value);
}  // namespace StreamStatusMapper
}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
