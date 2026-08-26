/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class RealTimeContactAnalysisExtractedInformationFailureCode {
  NOT_SET,
  QUOTA_EXCEEDED,
  INSUFFICIENT_CONVERSATION_CONTENT,
  FAILED_SAFETY_GUIDELINES,
  INTERNAL_ERROR,
  MAX_PACKAGE_FEATURE_ONLY
};

namespace RealTimeContactAnalysisExtractedInformationFailureCodeMapper {
AWS_CONNECT_API RealTimeContactAnalysisExtractedInformationFailureCode
GetRealTimeContactAnalysisExtractedInformationFailureCodeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRealTimeContactAnalysisExtractedInformationFailureCode(
    RealTimeContactAnalysisExtractedInformationFailureCode value);
}  // namespace RealTimeContactAnalysisExtractedInformationFailureCodeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
