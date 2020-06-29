/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class EC2TagFilterType
  {
    NOT_SET,
    KEY_ONLY,
    VALUE_ONLY,
    KEY_AND_VALUE
  };

namespace EC2TagFilterTypeMapper
{
AWS_CODEDEPLOY_API EC2TagFilterType GetEC2TagFilterTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForEC2TagFilterType(EC2TagFilterType value);
} // namespace EC2TagFilterTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
