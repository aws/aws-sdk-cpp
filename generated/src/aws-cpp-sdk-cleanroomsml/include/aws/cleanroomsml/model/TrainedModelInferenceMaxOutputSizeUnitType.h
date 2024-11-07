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
  enum class TrainedModelInferenceMaxOutputSizeUnitType
  {
    NOT_SET,
    GB
  };

namespace TrainedModelInferenceMaxOutputSizeUnitTypeMapper
{
AWS_CLEANROOMSML_API TrainedModelInferenceMaxOutputSizeUnitType GetTrainedModelInferenceMaxOutputSizeUnitTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForTrainedModelInferenceMaxOutputSizeUnitType(TrainedModelInferenceMaxOutputSizeUnitType value);
} // namespace TrainedModelInferenceMaxOutputSizeUnitTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
