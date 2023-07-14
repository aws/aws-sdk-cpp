/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class ParameterApplyType
  {
    NOT_SET,
    static_,
    dynamic
  };

namespace ParameterApplyTypeMapper
{
AWS_REDSHIFT_API ParameterApplyType GetParameterApplyTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForParameterApplyType(ParameterApplyType value);
} // namespace ParameterApplyTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
