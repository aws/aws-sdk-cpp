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
  enum class RealTimeContactAnalysisStatus
  {
    NOT_SET,
    IN_PROGRESS,
    FAILED,
    COMPLETED
  };

namespace RealTimeContactAnalysisStatusMapper
{
AWS_CONNECT_API RealTimeContactAnalysisStatus GetRealTimeContactAnalysisStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRealTimeContactAnalysisStatus(RealTimeContactAnalysisStatus value);
} // namespace RealTimeContactAnalysisStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
