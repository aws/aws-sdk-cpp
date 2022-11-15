/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{
  enum class BatchJobType
  {
    NOT_SET,
    VSE,
    JES2,
    JES3
  };

namespace BatchJobTypeMapper
{
AWS_MAINFRAMEMODERNIZATION_API BatchJobType GetBatchJobTypeForName(const Aws::String& name);

AWS_MAINFRAMEMODERNIZATION_API Aws::String GetNameForBatchJobType(BatchJobType value);
} // namespace BatchJobTypeMapper
} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
