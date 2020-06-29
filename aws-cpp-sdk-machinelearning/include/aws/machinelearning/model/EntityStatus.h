/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{
  enum class EntityStatus
  {
    NOT_SET,
    PENDING,
    INPROGRESS,
    FAILED,
    COMPLETED,
    DELETED
  };

namespace EntityStatusMapper
{
AWS_MACHINELEARNING_API EntityStatus GetEntityStatusForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForEntityStatus(EntityStatus value);
} // namespace EntityStatusMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
