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
  enum class PhoneNumberType
  {
    NOT_SET,
    TOLL_FREE,
    DID
  };

namespace PhoneNumberTypeMapper
{
AWS_CONNECT_API PhoneNumberType GetPhoneNumberTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForPhoneNumberType(PhoneNumberType value);
} // namespace PhoneNumberTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
