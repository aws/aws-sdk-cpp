/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class EksAnywhereSubscriptionTermUnit
  {
    NOT_SET,
    MONTHS
  };

namespace EksAnywhereSubscriptionTermUnitMapper
{
AWS_EKS_API EksAnywhereSubscriptionTermUnit GetEksAnywhereSubscriptionTermUnitForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForEksAnywhereSubscriptionTermUnit(EksAnywhereSubscriptionTermUnit value);
} // namespace EksAnywhereSubscriptionTermUnitMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
