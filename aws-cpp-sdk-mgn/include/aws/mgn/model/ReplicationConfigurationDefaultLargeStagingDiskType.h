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
  enum class ReplicationConfigurationDefaultLargeStagingDiskType
  {
    NOT_SET,
    GP2,
    ST1,
    GP3
  };

namespace ReplicationConfigurationDefaultLargeStagingDiskTypeMapper
{
AWS_MGN_API ReplicationConfigurationDefaultLargeStagingDiskType GetReplicationConfigurationDefaultLargeStagingDiskTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForReplicationConfigurationDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType value);
} // namespace ReplicationConfigurationDefaultLargeStagingDiskTypeMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
