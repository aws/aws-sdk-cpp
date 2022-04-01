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
  enum class ChangeAction
  {
    NOT_SET,
    ADD,
    MODIFY,
    REMOVE
  };

namespace ChangeActionMapper
{
AWS_NETWORKMANAGER_API ChangeAction GetChangeActionForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForChangeAction(ChangeAction value);
} // namespace ChangeActionMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
