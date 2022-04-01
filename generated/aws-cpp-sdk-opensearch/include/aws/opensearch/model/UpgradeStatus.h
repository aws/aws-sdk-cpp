/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{
  enum class UpgradeStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    SUCCEEDED_WITH_ISSUES,
    FAILED
  };

namespace UpgradeStatusMapper
{
AWS_OPENSEARCHSERVICE_API UpgradeStatus GetUpgradeStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForUpgradeStatus(UpgradeStatus value);
} // namespace UpgradeStatusMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
