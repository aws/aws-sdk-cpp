/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>

namespace Aws {
namespace EKS {
namespace Model {
enum class ScoringStrategyType { NOT_SET, LeastAllocated, MostAllocated };

namespace ScoringStrategyTypeMapper {
AWS_EKS_API ScoringStrategyType GetScoringStrategyTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForScoringStrategyType(ScoringStrategyType value);
}  // namespace ScoringStrategyTypeMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
