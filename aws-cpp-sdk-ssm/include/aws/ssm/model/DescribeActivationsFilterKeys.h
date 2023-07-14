﻿/**
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
  enum class DescribeActivationsFilterKeys
  {
    NOT_SET,
    ActivationIds,
    DefaultInstanceName,
    IamRole
  };

namespace DescribeActivationsFilterKeysMapper
{
AWS_SSM_API DescribeActivationsFilterKeys GetDescribeActivationsFilterKeysForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDescribeActivationsFilterKeys(DescribeActivationsFilterKeys value);
} // namespace DescribeActivationsFilterKeysMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
