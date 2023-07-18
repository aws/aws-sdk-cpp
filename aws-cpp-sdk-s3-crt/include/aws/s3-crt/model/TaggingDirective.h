/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class TaggingDirective
  {
    NOT_SET,
    COPY,
    REPLACE
  };

namespace TaggingDirectiveMapper
{
AWS_S3CRT_API TaggingDirective GetTaggingDirectiveForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForTaggingDirective(TaggingDirective value);
} // namespace TaggingDirectiveMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
