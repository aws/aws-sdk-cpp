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
  enum class JsonFileCompression
  {
    NOT_SET,
    NONE,
    GZIP
  };

namespace JsonFileCompressionMapper
{
AWS_LOOKOUTMETRICS_API JsonFileCompression GetJsonFileCompressionForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForJsonFileCompression(JsonFileCompression value);
} // namespace JsonFileCompressionMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
