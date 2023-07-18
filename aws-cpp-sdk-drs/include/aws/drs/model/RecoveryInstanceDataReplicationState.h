﻿/**
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
  enum class RecoveryInstanceDataReplicationState
  {
    NOT_SET,
    STOPPED,
    INITIATING,
    INITIAL_SYNC,
    BACKLOG,
    CREATING_SNAPSHOT,
    CONTINUOUS,
    PAUSED,
    RESCAN,
    STALLED,
    DISCONNECTED
  };

namespace RecoveryInstanceDataReplicationStateMapper
{
AWS_DRS_API RecoveryInstanceDataReplicationState GetRecoveryInstanceDataReplicationStateForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoveryInstanceDataReplicationState(RecoveryInstanceDataReplicationState value);
} // namespace RecoveryInstanceDataReplicationStateMapper
} // namespace Model
} // namespace drs
} // namespace Aws
