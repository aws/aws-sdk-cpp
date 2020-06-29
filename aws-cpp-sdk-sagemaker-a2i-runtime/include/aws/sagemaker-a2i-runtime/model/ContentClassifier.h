/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{
  enum class ContentClassifier
  {
    NOT_SET,
    FreeOfPersonallyIdentifiableInformation,
    FreeOfAdultContent
  };

namespace ContentClassifierMapper
{
AWS_AUGMENTEDAIRUNTIME_API ContentClassifier GetContentClassifierForName(const Aws::String& name);

AWS_AUGMENTEDAIRUNTIME_API Aws::String GetNameForContentClassifier(ContentClassifier value);
} // namespace ContentClassifierMapper
} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
