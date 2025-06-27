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
  enum class InitiateAs
  {
    NOT_SET,
    CONNECTED_TO_USER,
    COMPLETED
  };

namespace InitiateAsMapper
{
AWS_CONNECT_API InitiateAs GetInitiateAsForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForInitiateAs(InitiateAs value);
} // namespace InitiateAsMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
