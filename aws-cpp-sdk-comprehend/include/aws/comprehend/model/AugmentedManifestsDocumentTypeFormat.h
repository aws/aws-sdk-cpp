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
  enum class AugmentedManifestsDocumentTypeFormat
  {
    NOT_SET,
    PLAIN_TEXT_DOCUMENT,
    SEMI_STRUCTURED_DOCUMENT
  };

namespace AugmentedManifestsDocumentTypeFormatMapper
{
AWS_COMPREHEND_API AugmentedManifestsDocumentTypeFormat GetAugmentedManifestsDocumentTypeFormatForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForAugmentedManifestsDocumentTypeFormat(AugmentedManifestsDocumentTypeFormat value);
} // namespace AugmentedManifestsDocumentTypeFormatMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
