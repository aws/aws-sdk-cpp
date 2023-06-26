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
  enum class DataReplicationInitiationStepName
  {
    NOT_SET,
    WAIT,
    CREATE_SECURITY_GROUP,
    LAUNCH_REPLICATION_SERVER,
    BOOT_REPLICATION_SERVER,
    AUTHENTICATE_WITH_SERVICE,
    DOWNLOAD_REPLICATION_SOFTWARE,
    CREATE_STAGING_DISKS,
    ATTACH_STAGING_DISKS,
    PAIR_REPLICATION_SERVER_WITH_AGENT,
    CONNECT_AGENT_TO_REPLICATION_SERVER,
    START_DATA_TRANSFER
  };

namespace DataReplicationInitiationStepNameMapper
{
AWS_DRS_API DataReplicationInitiationStepName GetDataReplicationInitiationStepNameForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForDataReplicationInitiationStepName(DataReplicationInitiationStepName value);
} // namespace DataReplicationInitiationStepNameMapper
} // namespace Model
} // namespace drs
} // namespace Aws
