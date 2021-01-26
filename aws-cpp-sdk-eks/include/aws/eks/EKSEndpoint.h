/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace EKS
{
namespace EKSEndpoint
{
AWS_EKS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace EKSEndpoint
} // namespace EKS
} // namespace Aws
