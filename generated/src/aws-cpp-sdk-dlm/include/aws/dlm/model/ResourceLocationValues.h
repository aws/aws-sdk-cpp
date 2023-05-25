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
  enum class ResourceLocationValues
  {
    NOT_SET,
    CLOUD,
    OUTPOST
  };

namespace ResourceLocationValuesMapper
{
AWS_DLM_API ResourceLocationValues GetResourceLocationValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForResourceLocationValues(ResourceLocationValues value);
} // namespace ResourceLocationValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
