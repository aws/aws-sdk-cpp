/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{
  enum class ConnectionType
  {
    NOT_SET,
    WEBSOCKET,
    CONNECTION_CREDENTIALS
  };

namespace ConnectionTypeMapper
{
AWS_CONNECTPARTICIPANT_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_CONNECTPARTICIPANT_API Aws::String GetNameForConnectionType(ConnectionType value);
} // namespace ConnectionTypeMapper
} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
