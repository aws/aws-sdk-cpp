/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{
  enum class ElementRequirement
  {
    NOT_SET,
    OPTIONAL,
    MANDATORY
  };

namespace ElementRequirementMapper
{
AWS_B2BI_API ElementRequirement GetElementRequirementForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForElementRequirement(ElementRequirement value);
} // namespace ElementRequirementMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
