/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{
  enum class UpdateDataRetentionOperation
  {
    NOT_SET,
    INCREASE_DATA_RETENTION,
    DECREASE_DATA_RETENTION
  };

namespace UpdateDataRetentionOperationMapper
{
AWS_KINESISVIDEO_API UpdateDataRetentionOperation GetUpdateDataRetentionOperationForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForUpdateDataRetentionOperation(UpdateDataRetentionOperation value);
} // namespace UpdateDataRetentionOperationMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
