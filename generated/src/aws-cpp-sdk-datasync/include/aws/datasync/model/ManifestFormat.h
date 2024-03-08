/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class ManifestFormat
  {
    NOT_SET,
    CSV
  };

namespace ManifestFormatMapper
{
AWS_DATASYNC_API ManifestFormat GetManifestFormatForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForManifestFormat(ManifestFormat value);
} // namespace ManifestFormatMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
