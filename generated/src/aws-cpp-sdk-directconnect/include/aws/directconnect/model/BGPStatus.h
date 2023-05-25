/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{
  enum class BGPStatus
  {
    NOT_SET,
    up,
    down,
    unknown
  };

namespace BGPStatusMapper
{
AWS_DIRECTCONNECT_API BGPStatus GetBGPStatusForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForBGPStatus(BGPStatus value);
} // namespace BGPStatusMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
