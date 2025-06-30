/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class AttributeType
  {
    NOT_SET,
    STRING,
    NUMBER,
    BOOLEAN,
    STRING_LIST
  };

namespace AttributeTypeMapper
{
AWS_BEDROCK_API AttributeType GetAttributeTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAttributeType(AttributeType value);
} // namespace AttributeTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
