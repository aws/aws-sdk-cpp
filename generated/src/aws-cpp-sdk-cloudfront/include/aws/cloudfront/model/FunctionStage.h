/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{
  enum class FunctionStage
  {
    NOT_SET,
    DEVELOPMENT,
    LIVE
  };

namespace FunctionStageMapper
{
AWS_CLOUDFRONT_API FunctionStage GetFunctionStageForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForFunctionStage(FunctionStage value);
} // namespace FunctionStageMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
