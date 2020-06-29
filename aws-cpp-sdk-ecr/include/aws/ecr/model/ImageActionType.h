/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class ImageActionType
  {
    NOT_SET,
    EXPIRE
  };

namespace ImageActionTypeMapper
{
AWS_ECR_API ImageActionType GetImageActionTypeForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForImageActionType(ImageActionType value);
} // namespace ImageActionTypeMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
