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
  enum class ChangesetStatus
  {
    NOT_SET,
    PENDING,
    FAILED,
    SUCCESS,
    RUNNING,
    STOP_REQUESTED
  };

namespace ChangesetStatusMapper
{
AWS_FINSPACEDATA_API ChangesetStatus GetChangesetStatusForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForChangesetStatus(ChangesetStatus value);
} // namespace ChangesetStatusMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
