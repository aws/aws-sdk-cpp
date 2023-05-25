/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{
  enum class DatasetStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_COMPLETE,
    CREATE_FAILED,
    UPDATE_IN_PROGRESS,
    UPDATE_COMPLETE,
    UPDATE_FAILED_ROLLBACK_IN_PROGRESS,
    UPDATE_FAILED_ROLLBACK_COMPLETE,
    DELETE_IN_PROGRESS,
    DELETE_COMPLETE,
    DELETE_FAILED
  };

namespace DatasetStatusMapper
{
AWS_LOOKOUTFORVISION_API DatasetStatus GetDatasetStatusForName(const Aws::String& name);

AWS_LOOKOUTFORVISION_API Aws::String GetNameForDatasetStatus(DatasetStatus value);
} // namespace DatasetStatusMapper
} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
