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
  enum class ProcessorType
  {
    NOT_SET,
    Lambda
  };

namespace ProcessorTypeMapper
{
AWS_FIREHOSE_API ProcessorType GetProcessorTypeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForProcessorType(ProcessorType value);
} // namespace ProcessorTypeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
