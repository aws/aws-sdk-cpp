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
  enum class ReplicationStatus
  {
    NOT_SET,
    STOPPED,
    IN_PROGRESS,
    PROTECTED,
    ERROR_
  };

namespace ReplicationStatusMapper
{
AWS_DRS_API ReplicationStatus GetReplicationStatusForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForReplicationStatus(ReplicationStatus value);
} // namespace ReplicationStatusMapper
} // namespace Model
} // namespace drs
} // namespace Aws
