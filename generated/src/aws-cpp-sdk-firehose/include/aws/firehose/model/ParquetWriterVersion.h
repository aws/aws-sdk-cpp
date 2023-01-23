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
  enum class ParquetWriterVersion
  {
    NOT_SET,
    V1,
    V2
  };

namespace ParquetWriterVersionMapper
{
AWS_FIREHOSE_API ParquetWriterVersion GetParquetWriterVersionForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForParquetWriterVersion(ParquetWriterVersion value);
} // namespace ParquetWriterVersionMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
