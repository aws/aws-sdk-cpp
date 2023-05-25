/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class PhoneType
  {
    NOT_SET,
    SOFT_PHONE,
    DESK_PHONE
  };

namespace PhoneTypeMapper
{
AWS_CONNECT_API PhoneType GetPhoneTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForPhoneType(PhoneType value);
} // namespace PhoneTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
