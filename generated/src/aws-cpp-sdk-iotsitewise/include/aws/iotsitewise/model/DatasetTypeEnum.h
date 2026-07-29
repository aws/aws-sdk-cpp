/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class DatasetTypeEnum { NOT_SET, SESSION, CURATED, EXTERNAL };

namespace DatasetTypeEnumMapper {
AWS_IOTSITEWISE_API DatasetTypeEnum GetDatasetTypeEnumForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForDatasetTypeEnum(DatasetTypeEnum value);
}  // namespace DatasetTypeEnumMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
