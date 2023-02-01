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
  enum class TagFilterType
  {
    NOT_SET,
    KEY_ONLY,
    VALUE_ONLY,
    KEY_AND_VALUE
  };

namespace TagFilterTypeMapper
{
AWS_CODEDEPLOY_API TagFilterType GetTagFilterTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForTagFilterType(TagFilterType value);
} // namespace TagFilterTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
