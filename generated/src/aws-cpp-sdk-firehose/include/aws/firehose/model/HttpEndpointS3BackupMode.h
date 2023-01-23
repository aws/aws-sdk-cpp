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
  enum class HttpEndpointS3BackupMode
  {
    NOT_SET,
    FailedDataOnly,
    AllData
  };

namespace HttpEndpointS3BackupModeMapper
{
AWS_FIREHOSE_API HttpEndpointS3BackupMode GetHttpEndpointS3BackupModeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForHttpEndpointS3BackupMode(HttpEndpointS3BackupMode value);
} // namespace HttpEndpointS3BackupModeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
