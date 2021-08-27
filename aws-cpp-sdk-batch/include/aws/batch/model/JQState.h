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
  enum class JQState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace JQStateMapper
{
AWS_BATCH_API JQState GetJQStateForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForJQState(JQState value);
} // namespace JQStateMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
