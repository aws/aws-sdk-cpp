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
  enum class DimensionValueSource
  {
    NOT_SET,
    MESSAGE_TAG,
    EMAIL_HEADER,
    LINK_TAG
  };

namespace DimensionValueSourceMapper
{
AWS_PINPOINTEMAIL_API DimensionValueSource GetDimensionValueSourceForName(const Aws::String& name);

AWS_PINPOINTEMAIL_API Aws::String GetNameForDimensionValueSource(DimensionValueSource value);
} // namespace DimensionValueSourceMapper
} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
