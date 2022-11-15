/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class CompressionEnum
  {
    NOT_SET,
    ZLIB,
    DISABLED
  };

namespace CompressionEnumMapper
{
AWS_TRANSFER_API CompressionEnum GetCompressionEnumForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForCompressionEnum(CompressionEnum value);
} // namespace CompressionEnumMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
