/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Textract
{
namespace Model
{
  enum class FeatureType
  {
    NOT_SET,
    TABLES,
    FORMS,
    QUERIES,
    SIGNATURES
  };

namespace FeatureTypeMapper
{
AWS_TEXTRACT_API FeatureType GetFeatureTypeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForFeatureType(FeatureType value);
} // namespace FeatureTypeMapper
} // namespace Model
} // namespace Textract
} // namespace Aws
