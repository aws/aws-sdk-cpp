/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{
  enum class DatasetStatus
  {
    NOT_SET,
    PENDING,
    FAILED,
    SUCCESS,
    RUNNING
  };

namespace DatasetStatusMapper
{
AWS_FINSPACEDATA_API DatasetStatus GetDatasetStatusForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForDatasetStatus(DatasetStatus value);
} // namespace DatasetStatusMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
