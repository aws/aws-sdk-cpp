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
  enum class TlsPolicy
  {
    NOT_SET,
    REQUIRE,
    OPTIONAL
  };

namespace TlsPolicyMapper
{
AWS_PINPOINTEMAIL_API TlsPolicy GetTlsPolicyForName(const Aws::String& name);

AWS_PINPOINTEMAIL_API Aws::String GetNameForTlsPolicy(TlsPolicy value);
} // namespace TlsPolicyMapper
} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
