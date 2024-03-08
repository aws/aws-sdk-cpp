/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{
  enum class ImportSourceType
  {
    NOT_SET,
    S3
  };

namespace ImportSourceTypeMapper
{
AWS_CLOUDFRONT_API ImportSourceType GetImportSourceTypeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForImportSourceType(ImportSourceType value);
} // namespace ImportSourceTypeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
