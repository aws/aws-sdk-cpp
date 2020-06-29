/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace PinpointEmail
{
namespace PinpointEmailEndpoint
{
AWS_PINPOINTEMAIL_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace PinpointEmailEndpoint
} // namespace PinpointEmail
} // namespace Aws
