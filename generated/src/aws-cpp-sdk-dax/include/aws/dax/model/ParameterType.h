/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DAX
{
namespace Model
{
  enum class ParameterType
  {
    NOT_SET,
    DEFAULT,
    NODE_TYPE_SPECIFIC
  };

namespace ParameterTypeMapper
{
AWS_DAX_API ParameterType GetParameterTypeForName(const Aws::String& name);

AWS_DAX_API Aws::String GetNameForParameterType(ParameterType value);
} // namespace ParameterTypeMapper
} // namespace Model
} // namespace DAX
} // namespace Aws
