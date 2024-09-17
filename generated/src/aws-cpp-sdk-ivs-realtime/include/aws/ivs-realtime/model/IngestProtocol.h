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
  enum class IngestProtocol
  {
    NOT_SET,
    RTMP,
    RTMPS
  };

namespace IngestProtocolMapper
{
AWS_IVSREALTIME_API IngestProtocol GetIngestProtocolForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForIngestProtocol(IngestProtocol value);
} // namespace IngestProtocolMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
