/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class ConnectionStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    DELETING,
    DELETE_FAILED,
    READY,
    UPDATING,
    UPDATE_FAILED,
    DELETED
  };

namespace ConnectionStatusMapper
{
AWS_DATAZONE_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
} // namespace ConnectionStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
