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
  enum class As2Transport
  {
    NOT_SET,
    HTTP
  };

namespace As2TransportMapper
{
AWS_TRANSFER_API As2Transport GetAs2TransportForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForAs2Transport(As2Transport value);
} // namespace As2TransportMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
