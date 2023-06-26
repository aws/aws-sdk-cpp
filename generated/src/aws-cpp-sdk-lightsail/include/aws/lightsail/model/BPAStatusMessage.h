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
  enum class BPAStatusMessage
  {
    NOT_SET,
    DEFAULTED_FOR_SLR_MISSING,
    SYNC_ON_HOLD,
    DEFAULTED_FOR_SLR_MISSING_ON_HOLD,
    Unknown
  };

namespace BPAStatusMessageMapper
{
AWS_LIGHTSAIL_API BPAStatusMessage GetBPAStatusMessageForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForBPAStatusMessage(BPAStatusMessage value);
} // namespace BPAStatusMessageMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
