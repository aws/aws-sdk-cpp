/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{
  enum class DestinationCountryParameterKey
  {
    NOT_SET,
    IN_TEMPLATE_ID,
    IN_ENTITY_ID
  };

namespace DestinationCountryParameterKeyMapper
{
AWS_PINPOINTSMSVOICEV2_API DestinationCountryParameterKey GetDestinationCountryParameterKeyForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForDestinationCountryParameterKey(DestinationCountryParameterKey value);
} // namespace DestinationCountryParameterKeyMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
