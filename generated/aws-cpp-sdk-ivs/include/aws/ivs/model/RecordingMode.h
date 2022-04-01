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
  enum class RecordingMode
  {
    NOT_SET,
    DISABLED,
    INTERVAL
  };

namespace RecordingModeMapper
{
AWS_IVS_API RecordingMode GetRecordingModeForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForRecordingMode(RecordingMode value);
} // namespace RecordingModeMapper
} // namespace Model
} // namespace IVS
} // namespace Aws
