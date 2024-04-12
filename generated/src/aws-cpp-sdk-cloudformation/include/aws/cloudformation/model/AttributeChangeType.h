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
  enum class AttributeChangeType
  {
    NOT_SET,
    Add,
    Remove,
    Modify
  };

namespace AttributeChangeTypeMapper
{
AWS_CLOUDFORMATION_API AttributeChangeType GetAttributeChangeTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForAttributeChangeType(AttributeChangeType value);
} // namespace AttributeChangeTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
