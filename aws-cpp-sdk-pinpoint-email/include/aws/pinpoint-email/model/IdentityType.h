/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{
  enum class IdentityType
  {
    NOT_SET,
    EMAIL_ADDRESS,
    DOMAIN_,
    MANAGED_DOMAIN
  };

namespace IdentityTypeMapper
{
AWS_PINPOINTEMAIL_API IdentityType GetIdentityTypeForName(const Aws::String& name);

AWS_PINPOINTEMAIL_API Aws::String GetNameForIdentityType(IdentityType value);
} // namespace IdentityTypeMapper
} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
