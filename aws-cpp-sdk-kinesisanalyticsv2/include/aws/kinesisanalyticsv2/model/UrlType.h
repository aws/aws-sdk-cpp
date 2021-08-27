/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{
  enum class UrlType
  {
    NOT_SET,
    FLINK_DASHBOARD_URL
  };

namespace UrlTypeMapper
{
AWS_KINESISANALYTICSV2_API UrlType GetUrlTypeForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForUrlType(UrlType value);
} // namespace UrlTypeMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
