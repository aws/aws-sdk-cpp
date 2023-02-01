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
  enum class BuildType
  {
    NOT_SET,
    USER_INITIATED,
    SCHEDULED,
    IMPORT
  };

namespace BuildTypeMapper
{
AWS_IMAGEBUILDER_API BuildType GetBuildTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForBuildType(BuildType value);
} // namespace BuildTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
