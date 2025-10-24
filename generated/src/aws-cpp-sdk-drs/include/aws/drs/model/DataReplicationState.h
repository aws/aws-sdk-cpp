/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>

namespace Aws {
namespace drs {
namespace Model {
enum class DataReplicationState {
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

namespace DataReplicationStateMapper {
AWS_DRS_API DataReplicationState GetDataReplicationStateForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForDataReplicationState(DataReplicationState value);
}  // namespace DataReplicationStateMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
