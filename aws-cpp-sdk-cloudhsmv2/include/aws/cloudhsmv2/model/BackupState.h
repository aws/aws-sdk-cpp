/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{
  enum class BackupState
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    READY,
    DELETED,
    PENDING_DELETION
  };

namespace BackupStateMapper
{
AWS_CLOUDHSMV2_API BackupState GetBackupStateForName(const Aws::String& name);

AWS_CLOUDHSMV2_API Aws::String GetNameForBackupState(BackupState value);
} // namespace BackupStateMapper
} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
