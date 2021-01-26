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
  enum class S3OneTimeClassificationType
  {
    NOT_SET,
    FULL,
    NONE
  };

namespace S3OneTimeClassificationTypeMapper
{
AWS_MACIE_API S3OneTimeClassificationType GetS3OneTimeClassificationTypeForName(const Aws::String& name);

AWS_MACIE_API Aws::String GetNameForS3OneTimeClassificationType(S3OneTimeClassificationType value);
} // namespace S3OneTimeClassificationTypeMapper
} // namespace Model
} // namespace Macie
} // namespace Aws
