/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class LogDestinationType
  {
    NOT_SET,
    s3,
    cloudwatch
  };

namespace LogDestinationTypeMapper
{
AWS_REDSHIFT_API LogDestinationType GetLogDestinationTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForLogDestinationType(LogDestinationType value);
} // namespace LogDestinationTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
