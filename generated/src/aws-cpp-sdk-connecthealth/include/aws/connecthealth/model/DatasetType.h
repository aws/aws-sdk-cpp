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
enum class DatasetType { NOT_SET, MEDICAL_CODING };

namespace DatasetTypeMapper {
AWS_CONNECTHEALTH_API DatasetType GetDatasetTypeForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForDatasetType(DatasetType value);
}  // namespace DatasetTypeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
