/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class DataSource
  {
    NOT_SET,
    FLOW_LOGS,
    CLOUD_TRAIL,
    DNS_LOGS,
    S3_LOGS
  };

namespace DataSourceMapper
{
AWS_GUARDDUTY_API DataSource GetDataSourceForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForDataSource(DataSource value);
} // namespace DataSourceMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
