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
  enum class HubSortBy
  {
    NOT_SET,
    HubName,
    CreationTime,
    HubStatus,
    AccountIdOwner
  };

namespace HubSortByMapper
{
AWS_SAGEMAKER_API HubSortBy GetHubSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHubSortBy(HubSortBy value);
} // namespace HubSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
