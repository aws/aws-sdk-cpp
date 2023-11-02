/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class IpAddressType
  {
    NOT_SET,
    IPV4,
    DUAL_STACK
  };

namespace IpAddressTypeMapper
{
AWS_APPRUNNER_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForIpAddressType(IpAddressType value);
} // namespace IpAddressTypeMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
