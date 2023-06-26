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
  enum class SplunkS3BackupMode
  {
    NOT_SET,
    FailedEventsOnly,
    AllEvents
  };

namespace SplunkS3BackupModeMapper
{
AWS_FIREHOSE_API SplunkS3BackupMode GetSplunkS3BackupModeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForSplunkS3BackupMode(SplunkS3BackupMode value);
} // namespace SplunkS3BackupModeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
