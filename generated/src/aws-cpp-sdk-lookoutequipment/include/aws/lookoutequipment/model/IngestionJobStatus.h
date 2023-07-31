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
  enum class IngestionJobStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCESS,
    FAILED,
    IMPORT_IN_PROGRESS
  };

namespace IngestionJobStatusMapper
{
AWS_LOOKOUTEQUIPMENT_API IngestionJobStatus GetIngestionJobStatusForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForIngestionJobStatus(IngestionJobStatus value);
} // namespace IngestionJobStatusMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
