/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class AttributeType
  {
    NOT_SET,
    INCLUSIVE,
    EXCLUSIVE
  };

namespace AttributeTypeMapper
{
AWS_PINPOINT_API AttributeType GetAttributeTypeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForAttributeType(AttributeType value);
} // namespace AttributeTypeMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
