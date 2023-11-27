/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class RecordingFrequency
  {
    NOT_SET,
    CONTINUOUS,
    DAILY
  };

namespace RecordingFrequencyMapper
{
AWS_CONFIGSERVICE_API RecordingFrequency GetRecordingFrequencyForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForRecordingFrequency(RecordingFrequency value);
} // namespace RecordingFrequencyMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
