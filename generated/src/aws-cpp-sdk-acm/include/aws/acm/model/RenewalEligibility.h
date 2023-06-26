/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class RenewalEligibility
  {
    NOT_SET,
    ELIGIBLE,
    INELIGIBLE
  };

namespace RenewalEligibilityMapper
{
AWS_ACM_API RenewalEligibility GetRenewalEligibilityForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForRenewalEligibility(RenewalEligibility value);
} // namespace RenewalEligibilityMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
