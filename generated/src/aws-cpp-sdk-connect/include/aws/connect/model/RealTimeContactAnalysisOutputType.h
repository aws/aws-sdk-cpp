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
  enum class RealTimeContactAnalysisOutputType
  {
    NOT_SET,
    Raw,
    Redacted
  };

namespace RealTimeContactAnalysisOutputTypeMapper
{
AWS_CONNECT_API RealTimeContactAnalysisOutputType GetRealTimeContactAnalysisOutputTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRealTimeContactAnalysisOutputType(RealTimeContactAnalysisOutputType value);
} // namespace RealTimeContactAnalysisOutputTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
