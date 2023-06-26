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
  enum class S3InputFileType
  {
    NOT_SET,
    CSV,
    JSON
  };

namespace S3InputFileTypeMapper
{
AWS_APPFLOW_API S3InputFileType GetS3InputFileTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForS3InputFileType(S3InputFileType value);
} // namespace S3InputFileTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
