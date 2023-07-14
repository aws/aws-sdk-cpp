/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class StandardsStatus
  {
    NOT_SET,
    PENDING,
    READY,
    FAILED,
    DELETING,
    INCOMPLETE
  };

namespace StandardsStatusMapper
{
AWS_SECURITYHUB_API StandardsStatus GetStandardsStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForStandardsStatus(StandardsStatus value);
} // namespace StandardsStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
