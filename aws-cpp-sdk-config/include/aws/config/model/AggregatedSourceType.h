/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class AggregatedSourceType
  {
    NOT_SET,
    ACCOUNT,
    ORGANIZATION
  };

namespace AggregatedSourceTypeMapper
{
AWS_CONFIGSERVICE_API AggregatedSourceType GetAggregatedSourceTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForAggregatedSourceType(AggregatedSourceType value);
} // namespace AggregatedSourceTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
