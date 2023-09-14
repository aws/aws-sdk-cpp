/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{
  enum class InferenceDataImportStrategy
  {
    NOT_SET,
    NO_IMPORT,
    ADD_WHEN_EMPTY,
    OVERWRITE
  };

namespace InferenceDataImportStrategyMapper
{
AWS_LOOKOUTEQUIPMENT_API InferenceDataImportStrategy GetInferenceDataImportStrategyForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForInferenceDataImportStrategy(InferenceDataImportStrategy value);
} // namespace InferenceDataImportStrategyMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
