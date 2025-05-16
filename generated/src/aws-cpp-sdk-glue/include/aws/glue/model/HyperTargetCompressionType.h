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
  enum class HyperTargetCompressionType
  {
    NOT_SET,
    uncompressed
  };

namespace HyperTargetCompressionTypeMapper
{
AWS_GLUE_API HyperTargetCompressionType GetHyperTargetCompressionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForHyperTargetCompressionType(HyperTargetCompressionType value);
} // namespace HyperTargetCompressionTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
