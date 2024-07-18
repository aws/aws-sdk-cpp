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
  enum class IcebergS3BackupMode
  {
    NOT_SET,
    FailedDataOnly,
    AllData
  };

namespace IcebergS3BackupModeMapper
{
AWS_FIREHOSE_API IcebergS3BackupMode GetIcebergS3BackupModeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForIcebergS3BackupMode(IcebergS3BackupMode value);
} // namespace IcebergS3BackupModeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
