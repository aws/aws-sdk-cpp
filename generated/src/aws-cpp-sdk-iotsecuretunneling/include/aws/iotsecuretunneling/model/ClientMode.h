/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{
  enum class ClientMode
  {
    NOT_SET,
    SOURCE,
    DESTINATION,
    ALL
  };

namespace ClientModeMapper
{
AWS_IOTSECURETUNNELING_API ClientMode GetClientModeForName(const Aws::String& name);

AWS_IOTSECURETUNNELING_API Aws::String GetNameForClientMode(ClientMode value);
} // namespace ClientModeMapper
} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
