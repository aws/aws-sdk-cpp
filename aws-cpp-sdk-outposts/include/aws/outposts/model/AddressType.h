/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class AddressType
  {
    NOT_SET,
    SHIPPING_ADDRESS,
    OPERATING_ADDRESS
  };

namespace AddressTypeMapper
{
AWS_OUTPOSTS_API AddressType GetAddressTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForAddressType(AddressType value);
} // namespace AddressTypeMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
