/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class FileType
  {
    NOT_SET,
    CSV,
    JSON,
    PARQUET
  };

namespace FileTypeMapper
{
AWS_APPFLOW_API FileType GetFileTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForFileType(FileType value);
} // namespace FileTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
