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
  enum class CompressionFormat
  {
    NOT_SET,
    UNCOMPRESSED,
    GZIP,
    ZIP,
    Snappy,
    HADOOP_SNAPPY
  };

namespace CompressionFormatMapper
{
AWS_FIREHOSE_API CompressionFormat GetCompressionFormatForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForCompressionFormat(CompressionFormat value);
} // namespace CompressionFormatMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
