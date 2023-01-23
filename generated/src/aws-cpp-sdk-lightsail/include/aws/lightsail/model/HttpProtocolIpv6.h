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
  enum class HttpProtocolIpv6
  {
    NOT_SET,
    disabled,
    enabled
  };

namespace HttpProtocolIpv6Mapper
{
AWS_LIGHTSAIL_API HttpProtocolIpv6 GetHttpProtocolIpv6ForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForHttpProtocolIpv6(HttpProtocolIpv6 value);
} // namespace HttpProtocolIpv6Mapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
