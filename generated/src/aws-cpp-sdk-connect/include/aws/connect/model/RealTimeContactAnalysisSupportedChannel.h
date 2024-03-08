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
  enum class RealTimeContactAnalysisSupportedChannel
  {
    NOT_SET,
    VOICE,
    CHAT
  };

namespace RealTimeContactAnalysisSupportedChannelMapper
{
AWS_CONNECT_API RealTimeContactAnalysisSupportedChannel GetRealTimeContactAnalysisSupportedChannelForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRealTimeContactAnalysisSupportedChannel(RealTimeContactAnalysisSupportedChannel value);
} // namespace RealTimeContactAnalysisSupportedChannelMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
