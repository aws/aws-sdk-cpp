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
  enum class EksAnywhereSubscriptionStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    EXPIRING,
    EXPIRED,
    DELETING
  };

namespace EksAnywhereSubscriptionStatusMapper
{
AWS_EKS_API EksAnywhereSubscriptionStatus GetEksAnywhereSubscriptionStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForEksAnywhereSubscriptionStatus(EksAnywhereSubscriptionStatus value);
} // namespace EksAnywhereSubscriptionStatusMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
