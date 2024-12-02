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
  enum class IvrRecordingTrack
  {
    NOT_SET,
    ALL
  };

namespace IvrRecordingTrackMapper
{
AWS_CONNECT_API IvrRecordingTrack GetIvrRecordingTrackForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForIvrRecordingTrack(IvrRecordingTrack value);
} // namespace IvrRecordingTrackMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
