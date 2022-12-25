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
  enum class ReplicationDirection
  {
    NOT_SET,
    FAILOVER,
    FAILBACK
  };

namespace ReplicationDirectionMapper
{
AWS_DRS_API ReplicationDirection GetReplicationDirectionForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForReplicationDirection(ReplicationDirection value);
} // namespace ReplicationDirectionMapper
} // namespace Model
} // namespace drs
} // namespace Aws
