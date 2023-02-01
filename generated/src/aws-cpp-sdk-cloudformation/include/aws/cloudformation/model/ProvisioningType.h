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
  enum class ProvisioningType
  {
    NOT_SET,
    NON_PROVISIONABLE,
    IMMUTABLE,
    FULLY_MUTABLE
  };

namespace ProvisioningTypeMapper
{
AWS_CLOUDFORMATION_API ProvisioningType GetProvisioningTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForProvisioningType(ProvisioningType value);
} // namespace ProvisioningTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
