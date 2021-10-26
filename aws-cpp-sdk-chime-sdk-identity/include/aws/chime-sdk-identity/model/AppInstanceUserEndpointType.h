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
  enum class AppInstanceUserEndpointType
  {
    NOT_SET,
    APNS,
    APNS_SANDBOX,
    GCM
  };

namespace AppInstanceUserEndpointTypeMapper
{
AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpointType GetAppInstanceUserEndpointTypeForName(const Aws::String& name);

AWS_CHIMESDKIDENTITY_API Aws::String GetNameForAppInstanceUserEndpointType(AppInstanceUserEndpointType value);
} // namespace AppInstanceUserEndpointTypeMapper
} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
