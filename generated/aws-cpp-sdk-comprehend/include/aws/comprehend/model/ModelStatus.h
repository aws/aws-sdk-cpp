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
  enum class ModelStatus
  {
    NOT_SET,
    SUBMITTED,
    TRAINING,
    DELETING,
    STOP_REQUESTED,
    STOPPED,
    IN_ERROR,
    TRAINED
  };

namespace ModelStatusMapper
{
AWS_COMPREHEND_API ModelStatus GetModelStatusForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForModelStatus(ModelStatus value);
} // namespace ModelStatusMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
