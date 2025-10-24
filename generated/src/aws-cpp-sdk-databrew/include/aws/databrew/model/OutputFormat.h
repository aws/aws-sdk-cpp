/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/GlueDataBrew_EXPORTS.h>

namespace Aws {
namespace GlueDataBrew {
namespace Model {
enum class OutputFormat { NOT_SET, CSV, JSON, PARQUET, GLUEPARQUET, AVRO, ORC, XML, TABLEAUHYPER };

namespace OutputFormatMapper {
AWS_GLUEDATABREW_API OutputFormat GetOutputFormatForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForOutputFormat(OutputFormat value);
}  // namespace OutputFormatMapper
}  // namespace Model
}  // namespace GlueDataBrew
}  // namespace Aws
