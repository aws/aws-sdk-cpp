/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{
  enum class RecordingConfigurationFormat
  {
    NOT_SET,
    HLS
  };

namespace RecordingConfigurationFormatMapper
{
AWS_IVSREALTIME_API RecordingConfigurationFormat GetRecordingConfigurationFormatForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForRecordingConfigurationFormat(RecordingConfigurationFormat value);
} // namespace RecordingConfigurationFormatMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
