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
  enum class JdbcMetadataEntry
  {
    NOT_SET,
    COMMENTS,
    RAWTYPES
  };

namespace JdbcMetadataEntryMapper
{
AWS_GLUE_API JdbcMetadataEntry GetJdbcMetadataEntryForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForJdbcMetadataEntry(JdbcMetadataEntry value);
} // namespace JdbcMetadataEntryMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
