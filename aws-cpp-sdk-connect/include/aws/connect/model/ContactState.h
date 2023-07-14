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
  enum class ContactState
  {
    NOT_SET,
    INCOMING,
    PENDING,
    CONNECTING,
    CONNECTED,
    CONNECTED_ONHOLD,
    MISSED,
    ERROR_,
    ENDED,
    REJECTED
  };

namespace ContactStateMapper
{
AWS_CONNECT_API ContactState GetContactStateForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactState(ContactState value);
} // namespace ContactStateMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
