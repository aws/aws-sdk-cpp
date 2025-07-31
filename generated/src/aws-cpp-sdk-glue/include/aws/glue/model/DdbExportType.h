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
  enum class DdbExportType
  {
    NOT_SET,
    ddb,
    s3
  };

namespace DdbExportTypeMapper
{
AWS_GLUE_API DdbExportType GetDdbExportTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDdbExportType(DdbExportType value);
} // namespace DdbExportTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
