/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class KxNodeStatus
  {
    NOT_SET,
    RUNNING,
    PROVISIONING
  };

namespace KxNodeStatusMapper
{
AWS_FINSPACE_API KxNodeStatus GetKxNodeStatusForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxNodeStatus(KxNodeStatus value);
} // namespace KxNodeStatusMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
