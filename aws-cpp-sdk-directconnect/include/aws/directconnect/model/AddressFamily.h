/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{
  enum class AddressFamily
  {
    NOT_SET,
    ipv4,
    ipv6
  };

namespace AddressFamilyMapper
{
AWS_DIRECTCONNECT_API AddressFamily GetAddressFamilyForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForAddressFamily(AddressFamily value);
} // namespace AddressFamilyMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
