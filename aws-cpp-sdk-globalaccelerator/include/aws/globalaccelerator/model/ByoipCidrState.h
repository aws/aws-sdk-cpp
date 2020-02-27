/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{
  enum class ByoipCidrState
  {
    NOT_SET,
    PENDING_PROVISIONING,
    READY,
    PENDING_ADVERTISING,
    ADVERTISING,
    PENDING_WITHDRAWING,
    PENDING_DEPROVISIONING,
    DEPROVISIONED,
    FAILED_PROVISION,
    FAILED_ADVERTISING,
    FAILED_WITHDRAW,
    FAILED_DEPROVISION
  };

namespace ByoipCidrStateMapper
{
AWS_GLOBALACCELERATOR_API ByoipCidrState GetByoipCidrStateForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForByoipCidrState(ByoipCidrState value);
} // namespace ByoipCidrStateMapper
} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
