/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Braket
{
namespace Model
{
  enum class CompressionType
  {
    NOT_SET,
    NONE,
    GZIP
  };

namespace CompressionTypeMapper
{
AWS_BRAKET_API CompressionType GetCompressionTypeForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForCompressionType(CompressionType value);
} // namespace CompressionTypeMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
