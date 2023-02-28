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
  enum class DatasetStatus
  {
    NOT_SET,
    CREATING,
    COMPLETED,
    FAILED
  };

namespace DatasetStatusMapper
{
AWS_COMPREHEND_API DatasetStatus GetDatasetStatusForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForDatasetStatus(DatasetStatus value);
} // namespace DatasetStatusMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
