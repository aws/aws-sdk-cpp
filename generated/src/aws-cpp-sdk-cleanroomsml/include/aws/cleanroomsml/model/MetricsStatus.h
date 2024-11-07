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
  enum class MetricsStatus
  {
    NOT_SET,
    PUBLISH_SUCCEEDED,
    PUBLISH_FAILED
  };

namespace MetricsStatusMapper
{
AWS_CLEANROOMSML_API MetricsStatus GetMetricsStatusForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForMetricsStatus(MetricsStatus value);
} // namespace MetricsStatusMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
