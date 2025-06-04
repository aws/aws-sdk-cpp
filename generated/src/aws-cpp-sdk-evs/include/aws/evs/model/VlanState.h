/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EVS
{
namespace Model
{
  enum class VlanState
  {
    NOT_SET,
    CREATING,
    CREATED,
    DELETING,
    DELETED,
    CREATE_FAILED
  };

namespace VlanStateMapper
{
AWS_EVS_API VlanState GetVlanStateForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForVlanState(VlanState value);
} // namespace VlanStateMapper
} // namespace Model
} // namespace EVS
} // namespace Aws
