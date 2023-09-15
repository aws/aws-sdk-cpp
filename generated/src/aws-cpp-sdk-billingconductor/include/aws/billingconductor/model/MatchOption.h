/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{
  enum class MatchOption
  {
    NOT_SET,
    NOT_EQUAL
  };

namespace MatchOptionMapper
{
AWS_BILLINGCONDUCTOR_API MatchOption GetMatchOptionForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForMatchOption(MatchOption value);
} // namespace MatchOptionMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
