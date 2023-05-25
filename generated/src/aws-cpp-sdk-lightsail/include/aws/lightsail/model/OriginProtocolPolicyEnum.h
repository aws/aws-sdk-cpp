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
  enum class OriginProtocolPolicyEnum
  {
    NOT_SET,
    http_only,
    https_only
  };

namespace OriginProtocolPolicyEnumMapper
{
AWS_LIGHTSAIL_API OriginProtocolPolicyEnum GetOriginProtocolPolicyEnumForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForOriginProtocolPolicyEnum(OriginProtocolPolicyEnum value);
} // namespace OriginProtocolPolicyEnumMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
