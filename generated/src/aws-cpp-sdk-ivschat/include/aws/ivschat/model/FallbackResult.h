/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ivschat
{
namespace Model
{
  enum class FallbackResult
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace FallbackResultMapper
{
AWS_IVSCHAT_API FallbackResult GetFallbackResultForName(const Aws::String& name);

AWS_IVSCHAT_API Aws::String GetNameForFallbackResult(FallbackResult value);
} // namespace FallbackResultMapper
} // namespace Model
} // namespace ivschat
} // namespace Aws
