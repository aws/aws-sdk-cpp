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
  enum class SupportType
  {
    NOT_SET,
    STANDARD,
    EXTENDED
  };

namespace SupportTypeMapper
{
AWS_EKS_API SupportType GetSupportTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForSupportType(SupportType value);
} // namespace SupportTypeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
