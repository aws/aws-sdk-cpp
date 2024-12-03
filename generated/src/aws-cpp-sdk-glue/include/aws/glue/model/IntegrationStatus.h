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
  enum class IntegrationStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    MODIFYING,
    FAILED,
    DELETING,
    SYNCING,
    NEEDS_ATTENTION
  };

namespace IntegrationStatusMapper
{
AWS_GLUE_API IntegrationStatus GetIntegrationStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForIntegrationStatus(IntegrationStatus value);
} // namespace IntegrationStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
