/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{
  enum class EndpointStatusReason
  {
    NOT_SET,
    INVALID_DEVICE_TOKEN,
    INVALID_PINPOINT_ARN
  };

namespace EndpointStatusReasonMapper
{
AWS_CHIMESDKIDENTITY_API EndpointStatusReason GetEndpointStatusReasonForName(const Aws::String& name);

AWS_CHIMESDKIDENTITY_API Aws::String GetNameForEndpointStatusReason(EndpointStatusReason value);
} // namespace EndpointStatusReasonMapper
} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
