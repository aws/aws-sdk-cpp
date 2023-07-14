/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QLDB
{
namespace Model
{
  enum class OutputFormat
  {
    NOT_SET,
    ION_BINARY,
    ION_TEXT,
    JSON
  };

namespace OutputFormatMapper
{
AWS_QLDB_API OutputFormat GetOutputFormatForName(const Aws::String& name);

AWS_QLDB_API Aws::String GetNameForOutputFormat(OutputFormat value);
} // namespace OutputFormatMapper
} // namespace Model
} // namespace QLDB
} // namespace Aws
