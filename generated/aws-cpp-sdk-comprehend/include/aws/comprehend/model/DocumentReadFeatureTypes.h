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
  enum class DocumentReadFeatureTypes
  {
    NOT_SET,
    TABLES,
    FORMS
  };

namespace DocumentReadFeatureTypesMapper
{
AWS_COMPREHEND_API DocumentReadFeatureTypes GetDocumentReadFeatureTypesForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForDocumentReadFeatureTypes(DocumentReadFeatureTypes value);
} // namespace DocumentReadFeatureTypesMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
