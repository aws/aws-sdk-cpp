/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#if defined(_WIN32) && defined(IGNORE)
#undef IGNORE
#endif

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class FileHeaderInfo
  {
    NOT_SET,
    USE,
    IGNORE,
    NONE
  };

namespace FileHeaderInfoMapper
{
AWS_S3CRT_API FileHeaderInfo GetFileHeaderInfoForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForFileHeaderInfo(FileHeaderInfo value);
} // namespace FileHeaderInfoMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
