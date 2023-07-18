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
  enum class FailbackReplicationError
  {
    NOT_SET,
    AGENT_NOT_SEEN,
    FAILBACK_CLIENT_NOT_SEEN,
    NOT_CONVERGING,
    UNSTABLE_NETWORK,
    FAILED_TO_ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION,
    FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT,
    FAILED_TO_CONFIGURE_REPLICATION_SOFTWARE,
    FAILED_TO_PAIR_AGENT_WITH_REPLICATION_SOFTWARE,
    FAILED_TO_ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION
  };

namespace FailbackReplicationErrorMapper
{
AWS_DRS_API FailbackReplicationError GetFailbackReplicationErrorForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForFailbackReplicationError(FailbackReplicationError value);
} // namespace FailbackReplicationErrorMapper
} // namespace Model
} // namespace drs
} // namespace Aws
