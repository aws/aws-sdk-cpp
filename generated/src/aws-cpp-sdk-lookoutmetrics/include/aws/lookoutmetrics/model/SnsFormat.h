/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class SnsFormat
  {
    NOT_SET,
    LONG_TEXT,
    SHORT_TEXT,
    JSON
  };

namespace SnsFormatMapper
{
AWS_LOOKOUTMETRICS_API SnsFormat GetSnsFormatForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForSnsFormat(SnsFormat value);
} // namespace SnsFormatMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
