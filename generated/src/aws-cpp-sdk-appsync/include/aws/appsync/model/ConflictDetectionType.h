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
  enum class ConflictDetectionType
  {
    NOT_SET,
    VERSION,
    NONE
  };

namespace ConflictDetectionTypeMapper
{
AWS_APPSYNC_API ConflictDetectionType GetConflictDetectionTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForConflictDetectionType(ConflictDetectionType value);
} // namespace ConflictDetectionTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
