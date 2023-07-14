/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class OriginationRouteProtocol
  {
    NOT_SET,
    TCP,
    UDP
  };

namespace OriginationRouteProtocolMapper
{
AWS_CHIME_API OriginationRouteProtocol GetOriginationRouteProtocolForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForOriginationRouteProtocol(OriginationRouteProtocol value);
} // namespace OriginationRouteProtocolMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
