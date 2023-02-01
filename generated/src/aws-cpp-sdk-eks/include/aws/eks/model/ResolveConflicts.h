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
  enum class ResolveConflicts
  {
    NOT_SET,
    OVERWRITE,
    NONE,
    PRESERVE
  };

namespace ResolveConflictsMapper
{
AWS_EKS_API ResolveConflicts GetResolveConflictsForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForResolveConflicts(ResolveConflicts value);
} // namespace ResolveConflictsMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
