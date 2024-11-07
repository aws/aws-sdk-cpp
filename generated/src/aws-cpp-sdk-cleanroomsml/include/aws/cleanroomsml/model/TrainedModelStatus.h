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
  enum class TrainedModelStatus
  {
    NOT_SET,
    CREATE_PENDING,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    ACTIVE,
    DELETE_PENDING,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    INACTIVE,
    CANCEL_PENDING,
    CANCEL_IN_PROGRESS,
    CANCEL_FAILED
  };

namespace TrainedModelStatusMapper
{
AWS_CLEANROOMSML_API TrainedModelStatus GetTrainedModelStatusForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForTrainedModelStatus(TrainedModelStatus value);
} // namespace TrainedModelStatusMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
