/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class ComponentFormat
  {
    NOT_SET,
    SHELL
  };

namespace ComponentFormatMapper
{
AWS_IMAGEBUILDER_API ComponentFormat GetComponentFormatForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForComponentFormat(ComponentFormat value);
} // namespace ComponentFormatMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
