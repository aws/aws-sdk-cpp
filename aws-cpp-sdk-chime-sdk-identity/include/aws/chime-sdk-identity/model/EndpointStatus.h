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
  enum class EndpointStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace EndpointStatusMapper
{
AWS_CHIMESDKIDENTITY_API EndpointStatus GetEndpointStatusForName(const Aws::String& name);

AWS_CHIMESDKIDENTITY_API Aws::String GetNameForEndpointStatus(EndpointStatus value);
} // namespace EndpointStatusMapper
} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
