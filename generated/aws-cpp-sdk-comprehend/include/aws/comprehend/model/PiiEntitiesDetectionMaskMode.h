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
  enum class PiiEntitiesDetectionMaskMode
  {
    NOT_SET,
    MASK,
    REPLACE_WITH_PII_ENTITY_TYPE
  };

namespace PiiEntitiesDetectionMaskModeMapper
{
AWS_COMPREHEND_API PiiEntitiesDetectionMaskMode GetPiiEntitiesDetectionMaskModeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForPiiEntitiesDetectionMaskMode(PiiEntitiesDetectionMaskMode value);
} // namespace PiiEntitiesDetectionMaskModeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
