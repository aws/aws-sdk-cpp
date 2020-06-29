/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class Algorithm
  {
    NOT_SET,
    aes128,
    aes192,
    aes256
  };

namespace AlgorithmMapper
{
AWS_MEDIACONNECT_API Algorithm GetAlgorithmForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForAlgorithm(Algorithm value);
} // namespace AlgorithmMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
