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
  enum class TrainedModelExportFileType
  {
    NOT_SET,
    MODEL,
    OUTPUT
  };

namespace TrainedModelExportFileTypeMapper
{
AWS_CLEANROOMSML_API TrainedModelExportFileType GetTrainedModelExportFileTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForTrainedModelExportFileType(TrainedModelExportFileType value);
} // namespace TrainedModelExportFileTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
