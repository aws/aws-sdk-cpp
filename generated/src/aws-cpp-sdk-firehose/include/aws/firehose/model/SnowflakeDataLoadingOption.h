/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class SnowflakeDataLoadingOption
  {
    NOT_SET,
    JSON_MAPPING,
    VARIANT_CONTENT_MAPPING,
    VARIANT_CONTENT_AND_METADATA_MAPPING
  };

namespace SnowflakeDataLoadingOptionMapper
{
AWS_FIREHOSE_API SnowflakeDataLoadingOption GetSnowflakeDataLoadingOptionForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForSnowflakeDataLoadingOption(SnowflakeDataLoadingOption value);
} // namespace SnowflakeDataLoadingOptionMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
