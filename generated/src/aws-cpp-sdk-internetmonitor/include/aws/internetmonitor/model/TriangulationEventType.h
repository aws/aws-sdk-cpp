/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{
  enum class TriangulationEventType
  {
    NOT_SET,
    AWS,
    Internet
  };

namespace TriangulationEventTypeMapper
{
AWS_INTERNETMONITOR_API TriangulationEventType GetTriangulationEventTypeForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForTriangulationEventType(TriangulationEventType value);
} // namespace TriangulationEventTypeMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
