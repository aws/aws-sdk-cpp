/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class TrainingDatasetStatus
  {
    NOT_SET,
    ACTIVE
  };

namespace TrainingDatasetStatusMapper
{
AWS_CLEANROOMSML_API TrainingDatasetStatus GetTrainingDatasetStatusForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForTrainingDatasetStatus(TrainingDatasetStatus value);
} // namespace TrainingDatasetStatusMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
