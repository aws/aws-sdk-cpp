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
  enum class TrainedModelExportJobStatus
  {
    NOT_SET,
    CREATE_PENDING,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    ACTIVE
  };

namespace TrainedModelExportJobStatusMapper
{
AWS_CLEANROOMSML_API TrainedModelExportJobStatus GetTrainedModelExportJobStatusForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForTrainedModelExportJobStatus(TrainedModelExportJobStatus value);
} // namespace TrainedModelExportJobStatusMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
