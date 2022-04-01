/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class CanaryStateReasonCode
  {
    NOT_SET,
    INVALID_PERMISSIONS
  };

namespace CanaryStateReasonCodeMapper
{
AWS_SYNTHETICS_API CanaryStateReasonCode GetCanaryStateReasonCodeForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForCanaryStateReasonCode(CanaryStateReasonCode value);
} // namespace CanaryStateReasonCodeMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
