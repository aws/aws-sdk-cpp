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
  enum class OpsItemEventFilterOperator
  {
    NOT_SET,
    Equal
  };

namespace OpsItemEventFilterOperatorMapper
{
AWS_SSM_API OpsItemEventFilterOperator GetOpsItemEventFilterOperatorForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForOpsItemEventFilterOperator(OpsItemEventFilterOperator value);
} // namespace OpsItemEventFilterOperatorMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
