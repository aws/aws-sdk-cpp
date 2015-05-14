/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <stdint.h>
#include <chrono>

namespace Aws
{
namespace Utils
{
namespace RateLimits
{

class RateLimiterInterface
{
    public:

        using DelayType = std::chrono::milliseconds;

        virtual ~RateLimiterInterface() {}

        virtual DelayType ApplyCost(int64_t cost) = 0;
        virtual void ApplyAndPayForCost(int64_t cost) = 0;

        virtual void SetRate(int64_t rate, bool resetAccumulator = false) = 0;
};

} // namespace RateLimits
} // namespace Utils
} // namespace Aws