/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class HandshakeState
  {
    NOT_SET,
    REQUESTED,
    OPEN,
    CANCELED,
    ACCEPTED,
    DECLINED,
    EXPIRED
  };

namespace HandshakeStateMapper
{
AWS_ORGANIZATIONS_API HandshakeState GetHandshakeStateForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForHandshakeState(HandshakeState value);
} // namespace HandshakeStateMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
