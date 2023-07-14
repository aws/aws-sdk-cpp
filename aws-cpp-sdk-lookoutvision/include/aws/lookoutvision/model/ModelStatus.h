/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{
  enum class ModelStatus
  {
    NOT_SET,
    TRAINING,
    TRAINED,
    TRAINING_FAILED,
    STARTING_HOSTING,
    HOSTED,
    HOSTING_FAILED,
    STOPPING_HOSTING,
    SYSTEM_UPDATING,
    DELETING
  };

namespace ModelStatusMapper
{
AWS_LOOKOUTFORVISION_API ModelStatus GetModelStatusForName(const Aws::String& name);

AWS_LOOKOUTFORVISION_API Aws::String GetNameForModelStatus(ModelStatus value);
} // namespace ModelStatusMapper
} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
