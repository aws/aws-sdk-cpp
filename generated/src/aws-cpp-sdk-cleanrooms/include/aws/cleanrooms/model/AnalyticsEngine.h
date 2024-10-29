/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class AnalyticsEngine
  {
    NOT_SET,
    SPARK,
    CLEAN_ROOMS_SQL
  };

namespace AnalyticsEngineMapper
{
AWS_CLEANROOMS_API AnalyticsEngine GetAnalyticsEngineForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAnalyticsEngine(AnalyticsEngine value);
} // namespace AnalyticsEngineMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
