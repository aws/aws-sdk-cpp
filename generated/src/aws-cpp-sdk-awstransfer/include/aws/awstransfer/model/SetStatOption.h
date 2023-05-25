/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class SetStatOption
  {
    NOT_SET,
    DEFAULT,
    ENABLE_NO_OP
  };

namespace SetStatOptionMapper
{
AWS_TRANSFER_API SetStatOption GetSetStatOptionForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForSetStatOption(SetStatOption value);
} // namespace SetStatOptionMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
