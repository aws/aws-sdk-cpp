/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Billing
{
namespace Model
{
  enum class Dimension
  {
    NOT_SET,
    LINKED_ACCOUNT
  };

namespace DimensionMapper
{
AWS_BILLING_API Dimension GetDimensionForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForDimension(Dimension value);
} // namespace DimensionMapper
} // namespace Model
} // namespace Billing
} // namespace Aws
