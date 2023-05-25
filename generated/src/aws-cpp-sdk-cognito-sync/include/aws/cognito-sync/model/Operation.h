/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{
  enum class Operation
  {
    NOT_SET,
    replace,
    remove
  };

namespace OperationMapper
{
AWS_COGNITOSYNC_API Operation GetOperationForName(const Aws::String& name);

AWS_COGNITOSYNC_API Aws::String GetNameForOperation(Operation value);
} // namespace OperationMapper
} // namespace Model
} // namespace CognitoSync
} // namespace Aws
