/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{
  enum class AttributeMatchingModel
  {
    NOT_SET,
    ONE_TO_ONE,
    MANY_TO_MANY
  };

namespace AttributeMatchingModelMapper
{
AWS_ENTITYRESOLUTION_API AttributeMatchingModel GetAttributeMatchingModelForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForAttributeMatchingModel(AttributeMatchingModel value);
} // namespace AttributeMatchingModelMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
