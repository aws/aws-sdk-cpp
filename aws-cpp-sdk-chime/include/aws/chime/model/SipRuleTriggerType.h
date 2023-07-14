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
  enum class SipRuleTriggerType
  {
    NOT_SET,
    ToPhoneNumber,
    RequestUriHostname
  };

namespace SipRuleTriggerTypeMapper
{
AWS_CHIME_API SipRuleTriggerType GetSipRuleTriggerTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForSipRuleTriggerType(SipRuleTriggerType value);
} // namespace SipRuleTriggerTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
