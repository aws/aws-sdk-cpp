/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class DataProductItemType { NOT_SET, ASSET };

namespace DataProductItemTypeMapper {
AWS_DATAZONE_API DataProductItemType GetDataProductItemTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDataProductItemType(DataProductItemType value);
}  // namespace DataProductItemTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
