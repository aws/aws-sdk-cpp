/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class ConnectionMode
  {
    NOT_SET,
    Public,
    Private
  };

namespace ConnectionModeMapper
{
AWS_APPFLOW_API ConnectionMode GetConnectionModeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForConnectionMode(ConnectionMode value);
} // namespace ConnectionModeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
