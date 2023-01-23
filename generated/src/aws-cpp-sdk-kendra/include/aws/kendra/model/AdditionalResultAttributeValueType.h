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
  enum class AdditionalResultAttributeValueType
  {
    NOT_SET,
    TEXT_WITH_HIGHLIGHTS_VALUE
  };

namespace AdditionalResultAttributeValueTypeMapper
{
AWS_KENDRA_API AdditionalResultAttributeValueType GetAdditionalResultAttributeValueTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForAdditionalResultAttributeValueType(AdditionalResultAttributeValueType value);
} // namespace AdditionalResultAttributeValueTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
