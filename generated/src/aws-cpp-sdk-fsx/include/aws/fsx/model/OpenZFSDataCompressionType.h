/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class OpenZFSDataCompressionType
  {
    NOT_SET,
    NONE,
    ZSTD,
    LZ4
  };

namespace OpenZFSDataCompressionTypeMapper
{
AWS_FSX_API OpenZFSDataCompressionType GetOpenZFSDataCompressionTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForOpenZFSDataCompressionType(OpenZFSDataCompressionType value);
} // namespace OpenZFSDataCompressionTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
