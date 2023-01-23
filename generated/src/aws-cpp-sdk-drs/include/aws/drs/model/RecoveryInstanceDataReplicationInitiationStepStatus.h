/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class RecoveryInstanceDataReplicationInitiationStepStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED,
    SKIPPED
  };

namespace RecoveryInstanceDataReplicationInitiationStepStatusMapper
{
AWS_DRS_API RecoveryInstanceDataReplicationInitiationStepStatus GetRecoveryInstanceDataReplicationInitiationStepStatusForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoveryInstanceDataReplicationInitiationStepStatus(RecoveryInstanceDataReplicationInitiationStepStatus value);
} // namespace RecoveryInstanceDataReplicationInitiationStepStatusMapper
} // namespace Model
} // namespace drs
} // namespace Aws
