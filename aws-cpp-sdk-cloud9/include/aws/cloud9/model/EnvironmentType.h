/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Cloud9
{
namespace Model
{
  enum class EnvironmentType
  {
    NOT_SET,
    ssh,
    ec2
  };

namespace EnvironmentTypeMapper
{
AWS_CLOUD9_API EnvironmentType GetEnvironmentTypeForName(const Aws::String& name);

AWS_CLOUD9_API Aws::String GetNameForEnvironmentType(EnvironmentType value);
} // namespace EnvironmentTypeMapper
} // namespace Model
} // namespace Cloud9
} // namespace Aws
