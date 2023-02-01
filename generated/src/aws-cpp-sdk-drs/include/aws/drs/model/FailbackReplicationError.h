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
    FAILED_TO_ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION,
    FAILED_GETTING_REPLICATION_STATE,
    SNAPSHOTS_FAILURE,
    FAILED_TO_CREATE_SECURITY_GROUP,
    FAILED_TO_LAUNCH_REPLICATION_SERVER,
    FAILED_TO_BOOT_REPLICATION_SERVER,
    FAILED_TO_AUTHENTICATE_WITH_SERVICE,
    FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE,
    FAILED_TO_CREATE_STAGING_DISKS,
    FAILED_TO_ATTACH_STAGING_DISKS,
    FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT,
    FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER,
    FAILED_TO_START_DATA_TRANSFER
  };

namespace FailbackReplicationErrorMapper
{
AWS_DRS_API FailbackReplicationError GetFailbackReplicationErrorForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForFailbackReplicationError(FailbackReplicationError value);
} // namespace FailbackReplicationErrorMapper
} // namespace Model
} // namespace drs
} // namespace Aws
