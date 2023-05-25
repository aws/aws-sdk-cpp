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
  enum class DataReplicationErrorString
  {
    NOT_SET,
    AGENT_NOT_SEEN,
    SNAPSHOTS_FAILURE,
    NOT_CONVERGING,
    UNSTABLE_NETWORK,
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

namespace DataReplicationErrorStringMapper
{
AWS_DRS_API DataReplicationErrorString GetDataReplicationErrorStringForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForDataReplicationErrorString(DataReplicationErrorString value);
} // namespace DataReplicationErrorStringMapper
} // namespace Model
} // namespace drs
} // namespace Aws
