/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
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
AWS_GLACIER_API FileHeaderInfo GetFileHeaderInfoForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForFileHeaderInfo(FileHeaderInfo value);
} // namespace FileHeaderInfoMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
