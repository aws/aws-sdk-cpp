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
  enum class InitiatedBy
  {
    NOT_SET,
    START_RECOVERY,
    START_DRILL,
    FAILBACK,
    DIAGNOSTIC,
    TERMINATE_RECOVERY_INSTANCES,
    TARGET_ACCOUNT,
    CREATE_NETWORK_RECOVERY,
    UPDATE_NETWORK_RECOVERY,
    ASSOCIATE_NETWORK_RECOVERY
  };

namespace InitiatedByMapper
{
AWS_DRS_API InitiatedBy GetInitiatedByForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForInitiatedBy(InitiatedBy value);
} // namespace InitiatedByMapper
} // namespace Model
} // namespace drs
} // namespace Aws
