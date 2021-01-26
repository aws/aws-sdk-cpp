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
  enum class ProcessorParameterName
  {
    NOT_SET,
    LambdaArn,
    NumberOfRetries,
    RoleArn,
    BufferSizeInMBs,
    BufferIntervalInSeconds
  };

namespace ProcessorParameterNameMapper
{
AWS_FIREHOSE_API ProcessorParameterName GetProcessorParameterNameForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForProcessorParameterName(ProcessorParameterName value);
} // namespace ProcessorParameterNameMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
