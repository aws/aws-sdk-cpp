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
  enum class PermissionModels
  {
    NOT_SET,
    SERVICE_MANAGED,
    SELF_MANAGED
  };

namespace PermissionModelsMapper
{
AWS_CLOUDFORMATION_API PermissionModels GetPermissionModelsForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForPermissionModels(PermissionModels value);
} // namespace PermissionModelsMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
