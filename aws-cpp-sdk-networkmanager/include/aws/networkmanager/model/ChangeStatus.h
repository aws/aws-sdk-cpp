/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class ChangeStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETE,
    FAILED
  };

namespace ChangeStatusMapper
{
AWS_NETWORKMANAGER_API ChangeStatus GetChangeStatusForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForChangeStatus(ChangeStatus value);
} // namespace ChangeStatusMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
