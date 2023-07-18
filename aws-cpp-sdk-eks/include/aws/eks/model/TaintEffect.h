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
  enum class TaintEffect
  {
    NOT_SET,
    NO_SCHEDULE,
    NO_EXECUTE,
    PREFER_NO_SCHEDULE
  };

namespace TaintEffectMapper
{
AWS_EKS_API TaintEffect GetTaintEffectForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForTaintEffect(TaintEffect value);
} // namespace TaintEffectMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
