/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class JoinOperator
  {
    NOT_SET,
    OR,
    AND
  };

namespace JoinOperatorMapper
{
AWS_CLEANROOMS_API JoinOperator GetJoinOperatorForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForJoinOperator(JoinOperator value);
} // namespace JoinOperatorMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
