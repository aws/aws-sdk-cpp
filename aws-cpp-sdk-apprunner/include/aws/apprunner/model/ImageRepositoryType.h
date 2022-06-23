/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class ImageRepositoryType
  {
    NOT_SET,
    ECR,
    ECR_PUBLIC
  };

namespace ImageRepositoryTypeMapper
{
AWS_APPRUNNER_API ImageRepositoryType GetImageRepositoryTypeForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForImageRepositoryType(ImageRepositoryType value);
} // namespace ImageRepositoryTypeMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
