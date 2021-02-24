/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{
  enum class AutoTuneState
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    ENABLE_IN_PROGRESS,
    DISABLE_IN_PROGRESS,
    DISABLED_AND_ROLLBACK_SCHEDULED,
    DISABLED_AND_ROLLBACK_IN_PROGRESS,
    DISABLED_AND_ROLLBACK_COMPLETE,
    DISABLED_AND_ROLLBACK_ERROR,
    ERROR_
  };

namespace AutoTuneStateMapper
{
AWS_ELASTICSEARCHSERVICE_API AutoTuneState GetAutoTuneStateForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForAutoTuneState(AutoTuneState value);
} // namespace AutoTuneStateMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
