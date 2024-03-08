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
  enum class RealTimeContactAnalysisSegmentType
  {
    NOT_SET,
    Transcript,
    Categories,
    Issues,
    Event,
    Attachments
  };

namespace RealTimeContactAnalysisSegmentTypeMapper
{
AWS_CONNECT_API RealTimeContactAnalysisSegmentType GetRealTimeContactAnalysisSegmentTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRealTimeContactAnalysisSegmentType(RealTimeContactAnalysisSegmentType value);
} // namespace RealTimeContactAnalysisSegmentTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
