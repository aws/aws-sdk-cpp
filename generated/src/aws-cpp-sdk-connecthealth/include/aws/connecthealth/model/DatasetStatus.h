/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class DatasetStatus { NOT_SET, CREATING, ACTIVE, CREATE_FAILED, DELETING, DELETE_FAILED, DELETED };

namespace DatasetStatusMapper {
AWS_CONNECTHEALTH_API DatasetStatus GetDatasetStatusForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForDatasetStatus(DatasetStatus value);
}  // namespace DatasetStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
