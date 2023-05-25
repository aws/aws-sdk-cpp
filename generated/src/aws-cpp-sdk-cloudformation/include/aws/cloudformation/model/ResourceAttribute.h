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
  enum class ResourceAttribute
  {
    NOT_SET,
    Properties,
    Metadata,
    CreationPolicy,
    UpdatePolicy,
    DeletionPolicy,
    Tags
  };

namespace ResourceAttributeMapper
{
AWS_CLOUDFORMATION_API ResourceAttribute GetResourceAttributeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForResourceAttribute(ResourceAttribute value);
} // namespace ResourceAttributeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
