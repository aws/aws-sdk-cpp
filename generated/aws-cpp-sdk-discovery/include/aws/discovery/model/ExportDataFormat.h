/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class ExportDataFormat
  {
    NOT_SET,
    CSV,
    GRAPHML
  };

namespace ExportDataFormatMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API ExportDataFormat GetExportDataFormatForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForExportDataFormat(ExportDataFormat value);
} // namespace ExportDataFormatMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
