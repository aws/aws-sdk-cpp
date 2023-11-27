/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{
  enum class ExportStatusCode
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY
  };

namespace ExportStatusCodeMapper
{
AWS_BCMDATAEXPORTS_API ExportStatusCode GetExportStatusCodeForName(const Aws::String& name);

AWS_BCMDATAEXPORTS_API Aws::String GetNameForExportStatusCode(ExportStatusCode value);
} // namespace ExportStatusCodeMapper
} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
