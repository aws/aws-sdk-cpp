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
  enum class CustomLineItemRelationship
  {
    NOT_SET,
    PARENT,
    CHILD
  };

namespace CustomLineItemRelationshipMapper
{
AWS_BILLINGCONDUCTOR_API CustomLineItemRelationship GetCustomLineItemRelationshipForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForCustomLineItemRelationship(CustomLineItemRelationship value);
} // namespace CustomLineItemRelationshipMapper
} // namespace Model
} // namespace BillingConductor
} // namespace Aws
