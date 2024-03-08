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
  enum class EksAnywhereSubscriptionLicenseType
  {
    NOT_SET,
    Cluster
  };

namespace EksAnywhereSubscriptionLicenseTypeMapper
{
AWS_EKS_API EksAnywhereSubscriptionLicenseType GetEksAnywhereSubscriptionLicenseTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForEksAnywhereSubscriptionLicenseType(EksAnywhereSubscriptionLicenseType value);
} // namespace EksAnywhereSubscriptionLicenseTypeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
