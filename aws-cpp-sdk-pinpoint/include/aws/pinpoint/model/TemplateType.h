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
  enum class TemplateType
  {
    NOT_SET,
    EMAIL,
    SMS,
    VOICE,
    PUSH
  };

namespace TemplateTypeMapper
{
AWS_PINPOINT_API TemplateType GetTemplateTypeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForTemplateType(TemplateType value);
} // namespace TemplateTypeMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
