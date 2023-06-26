/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class ConnectionStatus
  {
    NOT_SET,
    ONLINE,
    OFFLINE
  };

namespace ConnectionStatusMapper
{
AWS_ALEXAFORBUSINESS_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
} // namespace ConnectionStatusMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
