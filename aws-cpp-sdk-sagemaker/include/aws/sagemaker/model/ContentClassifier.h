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
  enum class ContentClassifier
  {
    NOT_SET,
    FreeOfPersonallyIdentifiableInformation,
    FreeOfAdultContent
  };

namespace ContentClassifierMapper
{
AWS_SAGEMAKER_API ContentClassifier GetContentClassifierForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForContentClassifier(ContentClassifier value);
} // namespace ContentClassifierMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
