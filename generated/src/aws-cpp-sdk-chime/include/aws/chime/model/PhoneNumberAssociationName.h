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
  enum class PhoneNumberAssociationName
  {
    NOT_SET,
    AccountId,
    UserId,
    VoiceConnectorId,
    VoiceConnectorGroupId,
    SipRuleId
  };

namespace PhoneNumberAssociationNameMapper
{
AWS_CHIME_API PhoneNumberAssociationName GetPhoneNumberAssociationNameForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForPhoneNumberAssociationName(PhoneNumberAssociationName value);
} // namespace PhoneNumberAssociationNameMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
