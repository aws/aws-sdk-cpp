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
  enum class RecoveryInstanceDataReplicationInitiationStepName
  {
    NOT_SET,
    LINK_FAILBACK_CLIENT_WITH_RECOVERY_INSTANCE,
    COMPLETE_VOLUME_MAPPING,
    ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION,
    DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT,
    CONFIGURE_REPLICATION_SOFTWARE,
    PAIR_AGENT_WITH_REPLICATION_SOFTWARE,
    ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION
  };

namespace RecoveryInstanceDataReplicationInitiationStepNameMapper
{
AWS_DRS_API RecoveryInstanceDataReplicationInitiationStepName GetRecoveryInstanceDataReplicationInitiationStepNameForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoveryInstanceDataReplicationInitiationStepName(RecoveryInstanceDataReplicationInitiationStepName value);
} // namespace RecoveryInstanceDataReplicationInitiationStepNameMapper
} // namespace Model
} // namespace drs
} // namespace Aws
