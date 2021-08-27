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
  enum class CEState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace CEStateMapper
{
AWS_BATCH_API CEState GetCEStateForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForCEState(CEState value);
} // namespace CEStateMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
