/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class SeverityRating
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH,
    CRITICAL
  };

namespace SeverityRatingMapper
{
AWS_SECURITYHUB_API SeverityRating GetSeverityRatingForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForSeverityRating(SeverityRating value);
} // namespace SeverityRatingMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
