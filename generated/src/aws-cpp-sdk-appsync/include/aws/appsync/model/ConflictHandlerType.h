/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class ConflictHandlerType
  {
    NOT_SET,
    OPTIMISTIC_CONCURRENCY,
    LAMBDA,
    AUTOMERGE,
    NONE
  };

namespace ConflictHandlerTypeMapper
{
AWS_APPSYNC_API ConflictHandlerType GetConflictHandlerTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForConflictHandlerType(ConflictHandlerType value);
} // namespace ConflictHandlerTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
