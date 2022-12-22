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
  enum class RuntimeEnvironment
  {
    NOT_SET,
    SQL_1_0,
    FLINK_1_6,
    FLINK_1_8,
    ZEPPELIN_FLINK_1_0,
    FLINK_1_11,
    FLINK_1_13,
    ZEPPELIN_FLINK_2_0,
    FLINK_1_15
  };

namespace RuntimeEnvironmentMapper
{
AWS_KINESISANALYTICSV2_API RuntimeEnvironment GetRuntimeEnvironmentForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForRuntimeEnvironment(RuntimeEnvironment value);
} // namespace RuntimeEnvironmentMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
