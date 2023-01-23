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
  enum class DifferenceType
  {
    NOT_SET,
    ADD,
    REMOVE,
    NOT_EQUAL
  };

namespace DifferenceTypeMapper
{
AWS_CLOUDFORMATION_API DifferenceType GetDifferenceTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForDifferenceType(DifferenceType value);
} // namespace DifferenceTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
