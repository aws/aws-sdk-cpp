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
  enum class PiiEntitiesDetectionMode
  {
    NOT_SET,
    ONLY_REDACTION,
    ONLY_OFFSETS
  };

namespace PiiEntitiesDetectionModeMapper
{
AWS_COMPREHEND_API PiiEntitiesDetectionMode GetPiiEntitiesDetectionModeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForPiiEntitiesDetectionMode(PiiEntitiesDetectionMode value);
} // namespace PiiEntitiesDetectionModeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
