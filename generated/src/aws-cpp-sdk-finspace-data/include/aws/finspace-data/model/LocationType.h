/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>

namespace Aws {
namespace FinSpaceData {
namespace Model {
enum class LocationType { NOT_SET, INGESTION, SAGEMAKER };

namespace LocationTypeMapper {
AWS_FINSPACEDATA_API LocationType GetLocationTypeForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForLocationType(LocationType value);
}  // namespace LocationTypeMapper
}  // namespace Model
}  // namespace FinSpaceData
}  // namespace Aws
