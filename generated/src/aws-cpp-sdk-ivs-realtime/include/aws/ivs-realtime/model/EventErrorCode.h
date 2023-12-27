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
  enum class EventErrorCode
  {
    NOT_SET,
    INSUFFICIENT_CAPABILITIES,
    QUOTA_EXCEEDED,
    PUBLISHER_NOT_FOUND
  };

namespace EventErrorCodeMapper
{
AWS_IVSREALTIME_API EventErrorCode GetEventErrorCodeForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForEventErrorCode(EventErrorCode value);
} // namespace EventErrorCodeMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
