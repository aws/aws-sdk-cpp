/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class R53HostedZoneDeletionStateCode
  {
    NOT_SET,
    SUCCEEDED,
    PENDING,
    FAILED,
    STARTED
  };

namespace R53HostedZoneDeletionStateCodeMapper
{
AWS_LIGHTSAIL_API R53HostedZoneDeletionStateCode GetR53HostedZoneDeletionStateCodeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForR53HostedZoneDeletionStateCode(R53HostedZoneDeletionStateCode value);
} // namespace R53HostedZoneDeletionStateCodeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
