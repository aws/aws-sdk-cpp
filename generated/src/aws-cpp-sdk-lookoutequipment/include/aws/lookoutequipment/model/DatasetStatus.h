/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{
  enum class DatasetStatus
  {
    NOT_SET,
    CREATED,
    INGESTION_IN_PROGRESS,
    ACTIVE,
    IMPORT_IN_PROGRESS
  };

namespace DatasetStatusMapper
{
AWS_LOOKOUTEQUIPMENT_API DatasetStatus GetDatasetStatusForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForDatasetStatus(DatasetStatus value);
} // namespace DatasetStatusMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
