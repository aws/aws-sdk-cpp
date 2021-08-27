/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{
  enum class TrainingDataSourceEnum
  {
    NOT_SET,
    EXTERNAL_EVENTS
  };

namespace TrainingDataSourceEnumMapper
{
AWS_FRAUDDETECTOR_API TrainingDataSourceEnum GetTrainingDataSourceEnumForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForTrainingDataSourceEnum(TrainingDataSourceEnum value);
} // namespace TrainingDataSourceEnumMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
