/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class HttpTokens
  {
    NOT_SET,
    optional,
    required
  };

namespace HttpTokensMapper
{
AWS_LIGHTSAIL_API HttpTokens GetHttpTokensForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForHttpTokens(HttpTokens value);
} // namespace HttpTokensMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
