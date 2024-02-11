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
  enum class CompressionOption
  {
    NOT_SET,
    GZIP,
    PARQUET
  };

namespace CompressionOptionMapper
{
AWS_BCMDATAEXPORTS_API CompressionOption GetCompressionOptionForName(const Aws::String& name);

AWS_BCMDATAEXPORTS_API Aws::String GetNameForCompressionOption(CompressionOption value);
} // namespace CompressionOptionMapper
} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
