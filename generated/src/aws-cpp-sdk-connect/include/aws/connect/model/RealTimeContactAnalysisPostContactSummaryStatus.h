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
  enum class RealTimeContactAnalysisPostContactSummaryStatus
  {
    NOT_SET,
    FAILED,
    COMPLETED
  };

namespace RealTimeContactAnalysisPostContactSummaryStatusMapper
{
AWS_CONNECT_API RealTimeContactAnalysisPostContactSummaryStatus GetRealTimeContactAnalysisPostContactSummaryStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRealTimeContactAnalysisPostContactSummaryStatus(RealTimeContactAnalysisPostContactSummaryStatus value);
} // namespace RealTimeContactAnalysisPostContactSummaryStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
