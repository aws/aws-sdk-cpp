/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class RegistryType
  {
    NOT_SET,
    RESOURCE,
    MODULE,
    HOOK
  };

namespace RegistryTypeMapper
{
AWS_CLOUDFORMATION_API RegistryType GetRegistryTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForRegistryType(RegistryType value);
} // namespace RegistryTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
