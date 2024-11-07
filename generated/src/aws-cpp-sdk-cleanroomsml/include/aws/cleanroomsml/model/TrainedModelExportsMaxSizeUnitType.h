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
  enum class TrainedModelExportsMaxSizeUnitType
  {
    NOT_SET,
    GB
  };

namespace TrainedModelExportsMaxSizeUnitTypeMapper
{
AWS_CLEANROOMSML_API TrainedModelExportsMaxSizeUnitType GetTrainedModelExportsMaxSizeUnitTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForTrainedModelExportsMaxSizeUnitType(TrainedModelExportsMaxSizeUnitType value);
} // namespace TrainedModelExportsMaxSizeUnitTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
