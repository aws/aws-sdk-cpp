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
  enum class ParticipantType
  {
    NOT_SET,
    ALL,
    MANAGER,
    AGENT,
    CUSTOMER,
    THIRDPARTY
  };

namespace ParticipantTypeMapper
{
AWS_CONNECT_API ParticipantType GetParticipantTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForParticipantType(ParticipantType value);
} // namespace ParticipantTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
