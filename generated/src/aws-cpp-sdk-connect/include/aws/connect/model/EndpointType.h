/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class EndpointType
  {
    NOT_SET,
    TELEPHONE_NUMBER,
    VOIP,
    CONTACT_FLOW
  };

namespace EndpointTypeMapper
{
AWS_CONNECT_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEndpointType(EndpointType value);
} // namespace EndpointTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
