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
  enum class AggregatedSourceStatusType
  {
    NOT_SET,
    FAILED,
    SUCCEEDED,
    OUTDATED
  };

namespace AggregatedSourceStatusTypeMapper
{
AWS_CONFIGSERVICE_API AggregatedSourceStatusType GetAggregatedSourceStatusTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForAggregatedSourceStatusType(AggregatedSourceStatusType value);
} // namespace AggregatedSourceStatusTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
