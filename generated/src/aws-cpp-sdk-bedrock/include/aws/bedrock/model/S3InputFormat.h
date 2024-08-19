/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class S3InputFormat
  {
    NOT_SET,
    JSONL
  };

namespace S3InputFormatMapper
{
AWS_BEDROCK_API S3InputFormat GetS3InputFormatForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForS3InputFormat(S3InputFormat value);
} // namespace S3InputFormatMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
