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
  enum class HsmStatus
  {
    NOT_SET,
    PENDING,
    RUNNING,
    UPDATING,
    SUSPENDED,
    TERMINATING,
    TERMINATED,
    DEGRADED
  };

namespace HsmStatusMapper
{
AWS_CLOUDHSM_API HsmStatus GetHsmStatusForName(const Aws::String& name);

AWS_CLOUDHSM_API Aws::String GetNameForHsmStatus(HsmStatus value);
} // namespace HsmStatusMapper
} // namespace Model
} // namespace CloudHSM
} // namespace Aws
