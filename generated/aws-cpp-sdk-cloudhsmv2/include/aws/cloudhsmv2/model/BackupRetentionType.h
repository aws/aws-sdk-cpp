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
  enum class BackupRetentionType
  {
    NOT_SET,
    DAYS
  };

namespace BackupRetentionTypeMapper
{
AWS_CLOUDHSMV2_API BackupRetentionType GetBackupRetentionTypeForName(const Aws::String& name);

AWS_CLOUDHSMV2_API Aws::String GetNameForBackupRetentionType(BackupRetentionType value);
} // namespace BackupRetentionTypeMapper
} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
