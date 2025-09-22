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
  enum class RepairAction
  {
    NOT_SET,
    Replace,
    Reboot,
    NoAction
  };

namespace RepairActionMapper
{
AWS_EKS_API RepairAction GetRepairActionForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForRepairAction(RepairAction value);
} // namespace RepairActionMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
