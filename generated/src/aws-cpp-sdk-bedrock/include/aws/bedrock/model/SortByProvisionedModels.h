/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class SortByProvisionedModels
  {
    NOT_SET,
    CreationTime
  };

namespace SortByProvisionedModelsMapper
{
AWS_BEDROCK_API SortByProvisionedModels GetSortByProvisionedModelsForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForSortByProvisionedModels(SortByProvisionedModels value);
} // namespace SortByProvisionedModelsMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
