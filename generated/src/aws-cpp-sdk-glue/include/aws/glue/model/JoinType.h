/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class JoinType
  {
    NOT_SET,
    equijoin,
    left,
    right,
    outer,
    leftsemi,
    leftanti
  };

namespace JoinTypeMapper
{
AWS_GLUE_API JoinType GetJoinTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForJoinType(JoinType value);
} // namespace JoinTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
