/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{
  enum class CloudHsmObjectState
  {
    NOT_SET,
    READY,
    UPDATING,
    DEGRADED
  };

namespace CloudHsmObjectStateMapper
{
AWS_CLOUDHSM_API CloudHsmObjectState GetCloudHsmObjectStateForName(const Aws::String& name);

AWS_CLOUDHSM_API Aws::String GetNameForCloudHsmObjectState(CloudHsmObjectState value);
} // namespace CloudHsmObjectStateMapper
} // namespace Model
} // namespace CloudHSM
} // namespace Aws
