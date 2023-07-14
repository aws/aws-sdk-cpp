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
  enum class ParametersFilterKey
  {
    NOT_SET,
    Name,
    Type,
    KeyId
  };

namespace ParametersFilterKeyMapper
{
AWS_SSM_API ParametersFilterKey GetParametersFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForParametersFilterKey(ParametersFilterKey value);
} // namespace ParametersFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
