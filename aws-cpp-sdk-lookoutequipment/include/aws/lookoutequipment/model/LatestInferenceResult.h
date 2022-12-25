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
  enum class LatestInferenceResult
  {
    NOT_SET,
    ANOMALOUS,
    NORMAL
  };

namespace LatestInferenceResultMapper
{
AWS_LOOKOUTEQUIPMENT_API LatestInferenceResult GetLatestInferenceResultForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForLatestInferenceResult(LatestInferenceResult value);
} // namespace LatestInferenceResultMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
