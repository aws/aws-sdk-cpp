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
  enum class ValidationExceptionReason
  {
    NOT_SET,
    UNKNOWN_OPERATION,
    CANNOT_PARSE,
    FIELD_VALIDATION_FAILED,
    OTHER,
    INVALID_PARAMETER,
    INVALID_ARN,
    INVALID_IDENTITY_FOR_DESTINATION_COUNTRY,
    DESTINATION_COUNTRY_BLOCKED,
    CANNOT_ADD_OPTED_OUT_NUMBER,
    COUNTRY_CODE_MISMATCH,
    INVALID_FILTER_VALUES,
    INVALID_NEXT_TOKEN,
    MISSING_PARAMETER,
    PARAMETERS_CANNOT_BE_USED_TOGETHER,
    PHONE_NUMBER_CANNOT_BE_OPTED_IN,
    PHONE_NUMBER_CANNOT_BE_RELEASED,
    PRICE_OVER_THRESHOLD,
    REQUESTED_SPEND_LIMIT_HIGHER_THAN_SERVICE_LIMIT,
    SENDER_ID_NOT_REGISTERED,
    SENDER_ID_NOT_SUPPORTED,
    TWO_WAY_NOT_ENABLED,
    TWO_WAY_NOT_SUPPORTED_IN_COUNTRY,
    TWO_WAY_NOT_SUPPORTED_IN_REGION,
    TWO_WAY_TOPIC_NOT_PRESENT
  };

namespace ValidationExceptionReasonMapper
{
AWS_PINPOINTSMSVOICEV2_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
