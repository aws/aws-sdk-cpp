/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{
  enum class ClientSideTimestampsStatus
  {
    NOT_SET,
    ENABLED
  };

namespace ClientSideTimestampsStatusMapper
{
AWS_KEYSPACES_API ClientSideTimestampsStatus GetClientSideTimestampsStatusForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForClientSideTimestampsStatus(ClientSideTimestampsStatus value);
} // namespace ClientSideTimestampsStatusMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
