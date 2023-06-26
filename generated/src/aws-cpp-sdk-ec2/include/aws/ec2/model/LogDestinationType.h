/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class LogDestinationType
  {
    NOT_SET,
    cloud_watch_logs,
    s3,
    kinesis_data_firehose
  };

namespace LogDestinationTypeMapper
{
AWS_EC2_API LogDestinationType GetLogDestinationTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForLogDestinationType(LogDestinationType value);
} // namespace LogDestinationTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
