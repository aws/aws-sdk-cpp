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
  enum class MergeType
  {
    NOT_SET,
    MANUAL_MERGE,
    AUTO_MERGE
  };

namespace MergeTypeMapper
{
AWS_APPSYNC_API MergeType GetMergeTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForMergeType(MergeType value);
} // namespace MergeTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
