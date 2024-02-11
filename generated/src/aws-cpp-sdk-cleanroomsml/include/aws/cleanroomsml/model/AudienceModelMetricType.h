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
  enum class AudienceModelMetricType
  {
    NOT_SET,
    NORMALIZED_DISCOUNTED_CUMULATIVE_GAIN,
    MEAN_RECIPROCAL_RANK,
    PRECISION,
    RECALL
  };

namespace AudienceModelMetricTypeMapper
{
AWS_CLEANROOMSML_API AudienceModelMetricType GetAudienceModelMetricTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForAudienceModelMetricType(AudienceModelMetricType value);
} // namespace AudienceModelMetricTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
