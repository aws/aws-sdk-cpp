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
  enum class DifferentialPrivacyAggregationType
  {
    NOT_SET,
    AVG,
    COUNT,
    COUNT_DISTINCT,
    SUM,
    STDDEV
  };

namespace DifferentialPrivacyAggregationTypeMapper
{
AWS_CLEANROOMS_API DifferentialPrivacyAggregationType GetDifferentialPrivacyAggregationTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForDifferentialPrivacyAggregationType(DifferentialPrivacyAggregationType value);
} // namespace DifferentialPrivacyAggregationTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
