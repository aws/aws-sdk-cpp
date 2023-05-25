/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class ModelType
  {
    NOT_SET,
    DOCUMENT_CLASSIFIER,
    ENTITY_RECOGNIZER
  };

namespace ModelTypeMapper
{
AWS_COMPREHEND_API ModelType GetModelTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForModelType(ModelType value);
} // namespace ModelTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
