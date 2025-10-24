﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/Firehose_EXPORTS.h>

namespace Aws {
namespace Firehose {
namespace Model {
enum class SnowflakeS3BackupMode { NOT_SET, FailedDataOnly, AllData };

namespace SnowflakeS3BackupModeMapper {
AWS_FIREHOSE_API SnowflakeS3BackupMode GetSnowflakeS3BackupModeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForSnowflakeS3BackupMode(SnowflakeS3BackupMode value);
}  // namespace SnowflakeS3BackupModeMapper
}  // namespace Model
}  // namespace Firehose
}  // namespace Aws
