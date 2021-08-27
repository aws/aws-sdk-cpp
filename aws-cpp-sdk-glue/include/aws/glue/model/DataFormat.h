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
  enum class DataFormat
  {
    NOT_SET,
    AVRO
  };

namespace DataFormatMapper
{
AWS_GLUE_API DataFormat GetDataFormatForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDataFormat(DataFormat value);
} // namespace DataFormatMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
