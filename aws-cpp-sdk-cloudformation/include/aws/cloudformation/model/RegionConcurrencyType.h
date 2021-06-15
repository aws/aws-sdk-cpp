/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class RegionConcurrencyType
  {
    NOT_SET,
    SEQUENTIAL,
    PARALLEL
  };

namespace RegionConcurrencyTypeMapper
{
AWS_CLOUDFORMATION_API RegionConcurrencyType GetRegionConcurrencyTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForRegionConcurrencyType(RegionConcurrencyType value);
} // namespace RegionConcurrencyTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
