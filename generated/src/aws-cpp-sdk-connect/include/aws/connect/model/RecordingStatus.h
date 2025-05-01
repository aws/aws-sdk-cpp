/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class RecordingStatus
  {
    NOT_SET,
    AVAILABLE,
    DELETED
  };

namespace RecordingStatusMapper
{
AWS_CONNECT_API RecordingStatus GetRecordingStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRecordingStatus(RecordingStatus value);
} // namespace RecordingStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
