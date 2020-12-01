/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{
  enum class ResolutionStrategy
  {
    NOT_SET,
    OPTIMISTIC_CONCURRENCY,
    LAMBDA,
    AUTOMERGE,
    NONE
  };

namespace ResolutionStrategyMapper
{
AWS_AMPLIFYBACKEND_API ResolutionStrategy GetResolutionStrategyForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForResolutionStrategy(ResolutionStrategy value);
} // namespace ResolutionStrategyMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
