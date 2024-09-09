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
  enum class IngestConfigurationState
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace IngestConfigurationStateMapper
{
AWS_IVSREALTIME_API IngestConfigurationState GetIngestConfigurationStateForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForIngestConfigurationState(IngestConfigurationState value);
} // namespace IngestConfigurationStateMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
