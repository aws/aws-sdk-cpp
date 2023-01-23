/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DLM
{
namespace Model
{
  enum class ResourceTypeValues
  {
    NOT_SET,
    VOLUME,
    INSTANCE
  };

namespace ResourceTypeValuesMapper
{
AWS_DLM_API ResourceTypeValues GetResourceTypeValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForResourceTypeValues(ResourceTypeValues value);
} // namespace ResourceTypeValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
