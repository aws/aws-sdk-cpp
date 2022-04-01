/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ExistCondition
  {
    NOT_SET,
    MUST_EXIST,
    NOT_EXIST,
    NONE
  };

namespace ExistConditionMapper
{
AWS_GLUE_API ExistCondition GetExistConditionForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForExistCondition(ExistCondition value);
} // namespace ExistConditionMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
