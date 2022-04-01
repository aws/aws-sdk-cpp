/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class UserProfileSortKey
  {
    NOT_SET,
    CreationTime,
    LastModifiedTime
  };

namespace UserProfileSortKeyMapper
{
AWS_SAGEMAKER_API UserProfileSortKey GetUserProfileSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForUserProfileSortKey(UserProfileSortKey value);
} // namespace UserProfileSortKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
