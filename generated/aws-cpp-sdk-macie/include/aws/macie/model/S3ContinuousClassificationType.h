/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie
{
namespace Model
{
  enum class S3ContinuousClassificationType
  {
    NOT_SET,
    FULL
  };

namespace S3ContinuousClassificationTypeMapper
{
AWS_MACIE_API S3ContinuousClassificationType GetS3ContinuousClassificationTypeForName(const Aws::String& name);

AWS_MACIE_API Aws::String GetNameForS3ContinuousClassificationType(S3ContinuousClassificationType value);
} // namespace S3ContinuousClassificationTypeMapper
} // namespace Model
} // namespace Macie
} // namespace Aws
