/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class DocumentAttributeValueType
  {
    NOT_SET,
    STRING_VALUE,
    STRING_LIST_VALUE,
    LONG_VALUE,
    DATE_VALUE
  };

namespace DocumentAttributeValueTypeMapper
{
AWS_KENDRA_API DocumentAttributeValueType GetDocumentAttributeValueTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForDocumentAttributeValueType(DocumentAttributeValueType value);
} // namespace DocumentAttributeValueTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
