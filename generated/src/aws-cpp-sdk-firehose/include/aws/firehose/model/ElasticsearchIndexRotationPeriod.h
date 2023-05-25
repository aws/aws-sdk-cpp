/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class ElasticsearchIndexRotationPeriod
  {
    NOT_SET,
    NoRotation,
    OneHour,
    OneDay,
    OneWeek,
    OneMonth
  };

namespace ElasticsearchIndexRotationPeriodMapper
{
AWS_FIREHOSE_API ElasticsearchIndexRotationPeriod GetElasticsearchIndexRotationPeriodForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForElasticsearchIndexRotationPeriod(ElasticsearchIndexRotationPeriod value);
} // namespace ElasticsearchIndexRotationPeriodMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
