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
  enum class AccessScopeType
  {
    NOT_SET,
    cluster,
    namespace_
  };

namespace AccessScopeTypeMapper
{
AWS_EKS_API AccessScopeType GetAccessScopeTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForAccessScopeType(AccessScopeType value);
} // namespace AccessScopeTypeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
