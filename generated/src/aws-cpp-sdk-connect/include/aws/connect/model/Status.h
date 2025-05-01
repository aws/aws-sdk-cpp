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
  enum class Status
  {
    NOT_SET,
    COMPLETE,
    IN_PROGRESS,
    DELETED
  };

namespace StatusMapper
{
AWS_CONNECT_API Status GetStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
