/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class ForwardingConfigState
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace ForwardingConfigStateMapper
{
AWS_IOTSITEWISE_API ForwardingConfigState GetForwardingConfigStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForForwardingConfigState(ForwardingConfigState value);
} // namespace ForwardingConfigStateMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
