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
  enum class ContainerType
  {
    NOT_SET,
    DOCKER
  };

namespace ContainerTypeMapper
{
AWS_IMAGEBUILDER_API ContainerType GetContainerTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForContainerType(ContainerType value);
} // namespace ContainerTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
