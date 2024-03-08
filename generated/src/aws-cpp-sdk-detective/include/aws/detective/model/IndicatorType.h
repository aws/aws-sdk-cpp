/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
{
namespace Model
{
  enum class IndicatorType
  {
    NOT_SET,
    TTP_OBSERVED,
    IMPOSSIBLE_TRAVEL,
    FLAGGED_IP_ADDRESS,
    NEW_GEOLOCATION,
    NEW_ASO,
    NEW_USER_AGENT,
    RELATED_FINDING,
    RELATED_FINDING_GROUP
  };

namespace IndicatorTypeMapper
{
AWS_DETECTIVE_API IndicatorType GetIndicatorTypeForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForIndicatorType(IndicatorType value);
} // namespace IndicatorTypeMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
