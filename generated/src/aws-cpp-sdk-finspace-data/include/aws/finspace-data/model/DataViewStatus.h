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
  enum class DataViewStatus
  {
    NOT_SET,
    RUNNING,
    STARTING,
    FAILED,
    CANCELLED,
    TIMEOUT,
    SUCCESS,
    PENDING,
    FAILED_CLEANUP_FAILED
  };

namespace DataViewStatusMapper
{
AWS_FINSPACEDATA_API DataViewStatus GetDataViewStatusForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForDataViewStatus(DataViewStatus value);
} // namespace DataViewStatusMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
