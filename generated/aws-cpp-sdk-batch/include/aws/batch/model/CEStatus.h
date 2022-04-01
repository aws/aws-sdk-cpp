/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class CEStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    DELETING,
    DELETED,
    VALID,
    INVALID
  };

namespace CEStatusMapper
{
AWS_BATCH_API CEStatus GetCEStatusForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForCEStatus(CEStatus value);
} // namespace CEStatusMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
