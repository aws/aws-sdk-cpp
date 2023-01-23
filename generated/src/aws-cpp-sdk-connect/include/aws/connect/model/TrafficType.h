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
  enum class TrafficType
  {
    NOT_SET,
    GENERAL,
    CAMPAIGN
  };

namespace TrafficTypeMapper
{
AWS_CONNECT_API TrafficType GetTrafficTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForTrafficType(TrafficType value);
} // namespace TrafficTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
