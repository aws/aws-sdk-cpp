/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class InputFormat
  {
    NOT_SET,
    CSV,
    JSON,
    PARQUET,
    EXCEL,
    ORC
  };

namespace InputFormatMapper
{
AWS_GLUEDATABREW_API InputFormat GetInputFormatForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForInputFormat(InputFormat value);
} // namespace InputFormatMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
