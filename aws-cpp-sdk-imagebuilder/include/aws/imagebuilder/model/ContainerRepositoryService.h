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
  enum class ContainerRepositoryService
  {
    NOT_SET,
    ECR
  };

namespace ContainerRepositoryServiceMapper
{
AWS_IMAGEBUILDER_API ContainerRepositoryService GetContainerRepositoryServiceForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForContainerRepositoryService(ContainerRepositoryService value);
} // namespace ContainerRepositoryServiceMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
