/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{
  enum class OptimizerType
  {
    NOT_SET,
    COMPACTION,
    GARBAGE_COLLECTION,
    ALL
  };

namespace OptimizerTypeMapper
{
AWS_LAKEFORMATION_API OptimizerType GetOptimizerTypeForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForOptimizerType(OptimizerType value);
} // namespace OptimizerTypeMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
