/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Artifact {
namespace Model {
enum class QueryStatus { NOT_SET, PROCESSING, COMPLETED, FAILED };

namespace QueryStatusMapper {
AWS_ARTIFACT_API QueryStatus GetQueryStatusForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForQueryStatus(QueryStatus value);
}  // namespace QueryStatusMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
