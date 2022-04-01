/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class PhoneNumberType
  {
    NOT_SET,
    MOBILE,
    WORK,
    HOME
  };

namespace PhoneNumberTypeMapper
{
AWS_ALEXAFORBUSINESS_API PhoneNumberType GetPhoneNumberTypeForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForPhoneNumberType(PhoneNumberType value);
} // namespace PhoneNumberTypeMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
