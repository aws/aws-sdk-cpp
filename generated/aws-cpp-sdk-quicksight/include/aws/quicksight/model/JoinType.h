/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class JoinType
  {
    NOT_SET,
    INNER,
    OUTER,
    LEFT,
    RIGHT
  };

namespace JoinTypeMapper
{
AWS_QUICKSIGHT_API JoinType GetJoinTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForJoinType(JoinType value);
} // namespace JoinTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
