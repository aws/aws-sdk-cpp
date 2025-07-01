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
  enum class TrainingInputMode
  {
    NOT_SET,
    File,
    FastFile,
    Pipe
  };

namespace TrainingInputModeMapper
{
AWS_CLEANROOMSML_API TrainingInputMode GetTrainingInputModeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForTrainingInputMode(TrainingInputMode value);
} // namespace TrainingInputModeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
