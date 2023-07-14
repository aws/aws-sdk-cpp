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
  enum class EventIngestion
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace EventIngestionMapper
{
AWS_FRAUDDETECTOR_API EventIngestion GetEventIngestionForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForEventIngestion(EventIngestion value);
} // namespace EventIngestionMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
