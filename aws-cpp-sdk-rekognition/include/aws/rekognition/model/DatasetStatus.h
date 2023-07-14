/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
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
    UPDATE_FAILED,
    DELETE_IN_PROGRESS
  };

namespace DatasetStatusMapper
{
AWS_REKOGNITION_API DatasetStatus GetDatasetStatusForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForDatasetStatus(DatasetStatus value);
} // namespace DatasetStatusMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
