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
  enum class IngestionStatus
  {
    NOT_SET,
    PENDING,
    FAILED,
    SUCCESS,
    RUNNING,
    STOP_REQUESTED
  };

namespace IngestionStatusMapper
{
AWS_FINSPACEDATA_API IngestionStatus GetIngestionStatusForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForIngestionStatus(IngestionStatus value);
} // namespace IngestionStatusMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
