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
  enum class RealTimeContactAnalysisPostContactSummaryFailureCode
  {
    NOT_SET,
    QUOTA_EXCEEDED,
    INSUFFICIENT_CONVERSATION_CONTENT,
    FAILED_SAFETY_GUIDELINES,
    INVALID_ANALYSIS_CONFIGURATION,
    INTERNAL_ERROR
  };

namespace RealTimeContactAnalysisPostContactSummaryFailureCodeMapper
{
AWS_CONNECT_API RealTimeContactAnalysisPostContactSummaryFailureCode GetRealTimeContactAnalysisPostContactSummaryFailureCodeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRealTimeContactAnalysisPostContactSummaryFailureCode(RealTimeContactAnalysisPostContactSummaryFailureCode value);
} // namespace RealTimeContactAnalysisPostContactSummaryFailureCodeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
