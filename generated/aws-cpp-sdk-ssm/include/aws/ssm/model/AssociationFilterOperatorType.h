/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class AssociationFilterOperatorType
  {
    NOT_SET,
    EQUAL,
    LESS_THAN,
    GREATER_THAN
  };

namespace AssociationFilterOperatorTypeMapper
{
AWS_SSM_API AssociationFilterOperatorType GetAssociationFilterOperatorTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAssociationFilterOperatorType(AssociationFilterOperatorType value);
} // namespace AssociationFilterOperatorTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
