/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class TemplateType
  {
    NOT_SET,
    RTSP_CAMERA_STREAM
  };

namespace TemplateTypeMapper
{
AWS_PANORAMA_API TemplateType GetTemplateTypeForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForTemplateType(TemplateType value);
} // namespace TemplateTypeMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
