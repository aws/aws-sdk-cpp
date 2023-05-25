/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class S3BackupMode
  {
    NOT_SET,
    Disabled,
    Enabled
  };

namespace S3BackupModeMapper
{
AWS_FIREHOSE_API S3BackupMode GetS3BackupModeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForS3BackupMode(S3BackupMode value);
} // namespace S3BackupModeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
