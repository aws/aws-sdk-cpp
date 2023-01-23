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
  enum class AutoTuneType
  {
    NOT_SET,
    SCHEDULED_ACTION
  };

namespace AutoTuneTypeMapper
{
AWS_ELASTICSEARCHSERVICE_API AutoTuneType GetAutoTuneTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForAutoTuneType(AutoTuneType value);
} // namespace AutoTuneTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
