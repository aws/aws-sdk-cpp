/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectCases {
namespace Model {
enum class MergeStatus { NOT_SET, IN_PROGRESS, COMPLETED };

namespace MergeStatusMapper {
AWS_CONNECTCASES_API MergeStatus GetMergeStatusForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForMergeStatus(MergeStatus value);
}  // namespace MergeStatusMapper
}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
