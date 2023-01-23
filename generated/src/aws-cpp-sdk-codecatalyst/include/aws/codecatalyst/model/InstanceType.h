/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{
  enum class InstanceType
  {
    NOT_SET,
    dev_standard1_small,
    dev_standard1_medium,
    dev_standard1_large,
    dev_standard1_xlarge
  };

namespace InstanceTypeMapper
{
AWS_CODECATALYST_API InstanceType GetInstanceTypeForName(const Aws::String& name);

AWS_CODECATALYST_API Aws::String GetNameForInstanceType(InstanceType value);
} // namespace InstanceTypeMapper
} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
