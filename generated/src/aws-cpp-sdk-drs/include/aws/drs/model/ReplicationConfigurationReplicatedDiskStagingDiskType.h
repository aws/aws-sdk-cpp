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
  enum class ReplicationConfigurationReplicatedDiskStagingDiskType
  {
    NOT_SET,
    AUTO,
    GP2,
    GP3,
    IO1,
    SC1,
    ST1,
    STANDARD
  };

namespace ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper
{
AWS_DRS_API ReplicationConfigurationReplicatedDiskStagingDiskType GetReplicationConfigurationReplicatedDiskStagingDiskTypeForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForReplicationConfigurationReplicatedDiskStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType value);
} // namespace ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper
} // namespace Model
} // namespace drs
} // namespace Aws
