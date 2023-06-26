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
  enum class Capability
  {
    NOT_SET,
    CAPABILITY_IAM,
    CAPABILITY_NAMED_IAM,
    CAPABILITY_AUTO_EXPAND
  };

namespace CapabilityMapper
{
AWS_CLOUDFORMATION_API Capability GetCapabilityForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForCapability(Capability value);
} // namespace CapabilityMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
