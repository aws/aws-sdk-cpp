/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class ParameterType
  {
    NOT_SET,
    Datetime,
    Number,
    String
  };

namespace ParameterTypeMapper
{
AWS_GLUEDATABREW_API ParameterType GetParameterTypeForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForParameterType(ParameterType value);
} // namespace ParameterTypeMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
