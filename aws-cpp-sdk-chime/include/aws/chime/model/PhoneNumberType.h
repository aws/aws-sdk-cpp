/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class PhoneNumberType
  {
    NOT_SET,
    Local,
    TollFree
  };

namespace PhoneNumberTypeMapper
{
AWS_CHIME_API PhoneNumberType GetPhoneNumberTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForPhoneNumberType(PhoneNumberType value);
} // namespace PhoneNumberTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
