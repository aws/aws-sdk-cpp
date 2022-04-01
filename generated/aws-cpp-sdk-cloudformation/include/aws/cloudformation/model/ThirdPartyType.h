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
  enum class ThirdPartyType
  {
    NOT_SET,
    RESOURCE,
    MODULE,
    HOOK
  };

namespace ThirdPartyTypeMapper
{
AWS_CLOUDFORMATION_API ThirdPartyType GetThirdPartyTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForThirdPartyType(ThirdPartyType value);
} // namespace ThirdPartyTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
