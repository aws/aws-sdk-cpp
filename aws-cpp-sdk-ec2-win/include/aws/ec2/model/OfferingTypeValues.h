/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class OfferingTypeValues
  {
    NOT_SET,
    Heavy_Utilization,
    Medium_Utilization,
    Light_Utilization,
    No_Upfront,
    Partial_Upfront,
    All_Upfront
  };

namespace OfferingTypeValuesMapper
{
AWS_EC2_API OfferingTypeValues GetOfferingTypeValuesForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForOfferingTypeValues(OfferingTypeValues value);
} // namespace OfferingTypeValuesMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
