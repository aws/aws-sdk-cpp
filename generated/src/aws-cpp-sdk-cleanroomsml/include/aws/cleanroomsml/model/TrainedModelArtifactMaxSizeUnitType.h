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
  enum class TrainedModelArtifactMaxSizeUnitType
  {
    NOT_SET,
    GB
  };

namespace TrainedModelArtifactMaxSizeUnitTypeMapper
{
AWS_CLEANROOMSML_API TrainedModelArtifactMaxSizeUnitType GetTrainedModelArtifactMaxSizeUnitTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForTrainedModelArtifactMaxSizeUnitType(TrainedModelArtifactMaxSizeUnitType value);
} // namespace TrainedModelArtifactMaxSizeUnitTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
