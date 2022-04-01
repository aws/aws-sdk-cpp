/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class GeneratedManifestFormat
  {
    NOT_SET,
    S3InventoryReport_CSV_20211130
  };

namespace GeneratedManifestFormatMapper
{
AWS_S3CONTROL_API GeneratedManifestFormat GetGeneratedManifestFormatForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForGeneratedManifestFormat(GeneratedManifestFormat value);
} // namespace GeneratedManifestFormatMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
