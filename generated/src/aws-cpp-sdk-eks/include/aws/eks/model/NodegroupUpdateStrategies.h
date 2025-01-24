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
  enum class NodegroupUpdateStrategies
  {
    NOT_SET,
    DEFAULT,
    MINIMAL
  };

namespace NodegroupUpdateStrategiesMapper
{
AWS_EKS_API NodegroupUpdateStrategies GetNodegroupUpdateStrategiesForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForNodegroupUpdateStrategies(NodegroupUpdateStrategies value);
} // namespace NodegroupUpdateStrategiesMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
