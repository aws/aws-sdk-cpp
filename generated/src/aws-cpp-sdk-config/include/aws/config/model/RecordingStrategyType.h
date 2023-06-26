/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class RecordingStrategyType
  {
    NOT_SET,
    ALL_SUPPORTED_RESOURCE_TYPES,
    INCLUSION_BY_RESOURCE_TYPES,
    EXCLUSION_BY_RESOURCE_TYPES
  };

namespace RecordingStrategyTypeMapper
{
AWS_CONFIGSERVICE_API RecordingStrategyType GetRecordingStrategyTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForRecordingStrategyType(RecordingStrategyType value);
} // namespace RecordingStrategyTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
