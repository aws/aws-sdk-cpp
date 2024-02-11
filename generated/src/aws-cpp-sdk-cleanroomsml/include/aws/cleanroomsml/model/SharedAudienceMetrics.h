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
  enum class SharedAudienceMetrics
  {
    NOT_SET,
    ALL,
    NONE
  };

namespace SharedAudienceMetricsMapper
{
AWS_CLEANROOMSML_API SharedAudienceMetrics GetSharedAudienceMetricsForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForSharedAudienceMetrics(SharedAudienceMetrics value);
} // namespace SharedAudienceMetricsMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
