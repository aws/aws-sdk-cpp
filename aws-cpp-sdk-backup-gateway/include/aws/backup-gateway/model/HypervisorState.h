/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{
  enum class HypervisorState
  {
    NOT_SET,
    PENDING,
    ONLINE,
    OFFLINE,
    ERROR_
  };

namespace HypervisorStateMapper
{
AWS_BACKUPGATEWAY_API HypervisorState GetHypervisorStateForName(const Aws::String& name);

AWS_BACKUPGATEWAY_API Aws::String GetNameForHypervisorState(HypervisorState value);
} // namespace HypervisorStateMapper
} // namespace Model
} // namespace BackupGateway
} // namespace Aws
