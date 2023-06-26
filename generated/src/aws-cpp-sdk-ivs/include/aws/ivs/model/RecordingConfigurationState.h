/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IVS
{
namespace Model
{
  enum class RecordingConfigurationState
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    ACTIVE
  };

namespace RecordingConfigurationStateMapper
{
AWS_IVS_API RecordingConfigurationState GetRecordingConfigurationStateForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForRecordingConfigurationState(RecordingConfigurationState value);
} // namespace RecordingConfigurationStateMapper
} // namespace Model
} // namespace IVS
} // namespace Aws
