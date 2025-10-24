﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRoomsML {
namespace Model {
enum class TrainedModelInferenceJobStatus {
  NOT_SET,
  CREATE_PENDING,
  CREATE_IN_PROGRESS,
  CREATE_FAILED,
  ACTIVE,
  CANCEL_PENDING,
  CANCEL_IN_PROGRESS,
  CANCEL_FAILED,
  INACTIVE
};

namespace TrainedModelInferenceJobStatusMapper {
AWS_CLEANROOMSML_API TrainedModelInferenceJobStatus GetTrainedModelInferenceJobStatusForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForTrainedModelInferenceJobStatus(TrainedModelInferenceJobStatus value);
}  // namespace TrainedModelInferenceJobStatusMapper
}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
