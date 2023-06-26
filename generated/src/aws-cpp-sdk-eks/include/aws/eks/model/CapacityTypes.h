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
  enum class CapacityTypes
  {
    NOT_SET,
    ON_DEMAND,
    SPOT
  };

namespace CapacityTypesMapper
{
AWS_EKS_API CapacityTypes GetCapacityTypesForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForCapacityTypes(CapacityTypes value);
} // namespace CapacityTypesMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
