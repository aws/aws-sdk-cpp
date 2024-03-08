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
  enum class RealTimeContactAnalysisSentimentLabel
  {
    NOT_SET,
    POSITIVE,
    NEGATIVE,
    NEUTRAL
  };

namespace RealTimeContactAnalysisSentimentLabelMapper
{
AWS_CONNECT_API RealTimeContactAnalysisSentimentLabel GetRealTimeContactAnalysisSentimentLabelForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRealTimeContactAnalysisSentimentLabel(RealTimeContactAnalysisSentimentLabel value);
} // namespace RealTimeContactAnalysisSentimentLabelMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
