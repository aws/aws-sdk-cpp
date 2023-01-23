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
  enum class UpgradeStep
  {
    NOT_SET,
    PRE_UPGRADE_CHECK,
    SNAPSHOT,
    UPGRADE
  };

namespace UpgradeStepMapper
{
AWS_ELASTICSEARCHSERVICE_API UpgradeStep GetUpgradeStepForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForUpgradeStep(UpgradeStep value);
} // namespace UpgradeStepMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
