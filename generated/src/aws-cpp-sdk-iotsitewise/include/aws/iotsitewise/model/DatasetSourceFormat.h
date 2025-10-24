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
enum class DatasetSourceFormat { NOT_SET, KNOWLEDGE_BASE };

namespace DatasetSourceFormatMapper {
AWS_IOTSITEWISE_API DatasetSourceFormat GetDatasetSourceFormatForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForDatasetSourceFormat(DatasetSourceFormat value);
}  // namespace DatasetSourceFormatMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
