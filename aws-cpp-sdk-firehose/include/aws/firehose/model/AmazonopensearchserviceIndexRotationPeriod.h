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
  enum class AmazonopensearchserviceIndexRotationPeriod
  {
    NOT_SET,
    NoRotation,
    OneHour,
    OneDay,
    OneWeek,
    OneMonth
  };

namespace AmazonopensearchserviceIndexRotationPeriodMapper
{
AWS_FIREHOSE_API AmazonopensearchserviceIndexRotationPeriod GetAmazonopensearchserviceIndexRotationPeriodForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForAmazonopensearchserviceIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod value);
} // namespace AmazonopensearchserviceIndexRotationPeriodMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
