/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class DataReplicationInitiationStepStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED,
    SKIPPED
  };

namespace DataReplicationInitiationStepStatusMapper
{
AWS_MGN_API DataReplicationInitiationStepStatus GetDataReplicationInitiationStepStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForDataReplicationInitiationStepStatus(DataReplicationInitiationStepStatus value);
} // namespace DataReplicationInitiationStepStatusMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
