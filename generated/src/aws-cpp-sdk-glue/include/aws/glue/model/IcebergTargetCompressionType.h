/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class IcebergTargetCompressionType
  {
    NOT_SET,
    gzip,
    lzo,
    uncompressed,
    snappy
  };

namespace IcebergTargetCompressionTypeMapper
{
AWS_GLUE_API IcebergTargetCompressionType GetIcebergTargetCompressionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForIcebergTargetCompressionType(IcebergTargetCompressionType value);
} // namespace IcebergTargetCompressionTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
