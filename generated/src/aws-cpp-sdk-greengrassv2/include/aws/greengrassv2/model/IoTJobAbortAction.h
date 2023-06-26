/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{
  enum class IoTJobAbortAction
  {
    NOT_SET,
    CANCEL
  };

namespace IoTJobAbortActionMapper
{
AWS_GREENGRASSV2_API IoTJobAbortAction GetIoTJobAbortActionForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForIoTJobAbortAction(IoTJobAbortAction value);
} // namespace IoTJobAbortActionMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
