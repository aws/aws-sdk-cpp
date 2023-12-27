/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EFS
{
namespace Model
{
  enum class ReplicationOverwriteProtection
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    REPLICATING
  };

namespace ReplicationOverwriteProtectionMapper
{
AWS_EFS_API ReplicationOverwriteProtection GetReplicationOverwriteProtectionForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForReplicationOverwriteProtection(ReplicationOverwriteProtection value);
} // namespace ReplicationOverwriteProtectionMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
