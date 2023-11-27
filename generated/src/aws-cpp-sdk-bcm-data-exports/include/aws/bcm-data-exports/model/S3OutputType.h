/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{
  enum class S3OutputType
  {
    NOT_SET,
    CUSTOM
  };

namespace S3OutputTypeMapper
{
AWS_BCMDATAEXPORTS_API S3OutputType GetS3OutputTypeForName(const Aws::String& name);

AWS_BCMDATAEXPORTS_API Aws::String GetNameForS3OutputType(S3OutputType value);
} // namespace S3OutputTypeMapper
} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
