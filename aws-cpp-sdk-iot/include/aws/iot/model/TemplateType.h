/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class TemplateType
  {
    NOT_SET,
    FLEET_PROVISIONING,
    JITP
  };

namespace TemplateTypeMapper
{
AWS_IOT_API TemplateType GetTemplateTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForTemplateType(TemplateType value);
} // namespace TemplateTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
