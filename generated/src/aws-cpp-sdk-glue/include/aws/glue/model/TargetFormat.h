﻿/**
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
  enum class TargetFormat
  {
    NOT_SET,
    json,
    csv,
    avro,
    orc,
    parquet,
    hudi,
    delta,
    iceberg,
    hyper,
    xml
  };

namespace TargetFormatMapper
{
AWS_GLUE_API TargetFormat GetTargetFormatForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTargetFormat(TargetFormat value);
} // namespace TargetFormatMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
