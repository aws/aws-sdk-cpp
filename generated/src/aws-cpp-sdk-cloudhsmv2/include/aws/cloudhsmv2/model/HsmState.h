/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{
  enum class HsmState
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    ACTIVE,
    DEGRADED,
    DELETE_IN_PROGRESS,
    DELETED
  };

namespace HsmStateMapper
{
AWS_CLOUDHSMV2_API HsmState GetHsmStateForName(const Aws::String& name);

AWS_CLOUDHSMV2_API Aws::String GetNameForHsmState(HsmState value);
} // namespace HsmStateMapper
} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
