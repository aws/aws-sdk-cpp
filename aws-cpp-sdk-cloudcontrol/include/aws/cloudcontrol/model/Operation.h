/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{
  enum class Operation
  {
    NOT_SET,
    CREATE,
    DELETE_,
    UPDATE
  };

namespace OperationMapper
{
AWS_CLOUDCONTROLAPI_API Operation GetOperationForName(const Aws::String& name);

AWS_CLOUDCONTROLAPI_API Aws::String GetNameForOperation(Operation value);
} // namespace OperationMapper
} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
