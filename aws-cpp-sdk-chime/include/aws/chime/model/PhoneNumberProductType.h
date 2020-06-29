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
  enum class PhoneNumberProductType
  {
    NOT_SET,
    BusinessCalling,
    VoiceConnector
  };

namespace PhoneNumberProductTypeMapper
{
AWS_CHIME_API PhoneNumberProductType GetPhoneNumberProductTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForPhoneNumberProductType(PhoneNumberProductType value);
} // namespace PhoneNumberProductTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
