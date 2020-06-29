/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class __EndpointTypesElement
  {
    NOT_SET,
    PUSH,
    GCM,
    APNS,
    APNS_SANDBOX,
    APNS_VOIP,
    APNS_VOIP_SANDBOX,
    ADM,
    SMS,
    VOICE,
    EMAIL,
    BAIDU,
    CUSTOM
  };

namespace __EndpointTypesElementMapper
{
AWS_PINPOINT_API __EndpointTypesElement Get__EndpointTypesElementForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameFor__EndpointTypesElement(__EndpointTypesElement value);
} // namespace __EndpointTypesElementMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
