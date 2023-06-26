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
  enum class ReplicationConfigurationDefaultLargeStagingDiskType
  {
    NOT_SET,
    GP2,
    GP3,
    ST1,
    AUTO
  };

namespace ReplicationConfigurationDefaultLargeStagingDiskTypeMapper
{
AWS_DRS_API ReplicationConfigurationDefaultLargeStagingDiskType GetReplicationConfigurationDefaultLargeStagingDiskTypeForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForReplicationConfigurationDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType value);
} // namespace ReplicationConfigurationDefaultLargeStagingDiskTypeMapper
} // namespace Model
} // namespace drs
} // namespace Aws
