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
  enum class JoinRequiredOption
  {
    NOT_SET,
    QUERY_RUNNER
  };

namespace JoinRequiredOptionMapper
{
AWS_CLEANROOMS_API JoinRequiredOption GetJoinRequiredOptionForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForJoinRequiredOption(JoinRequiredOption value);
} // namespace JoinRequiredOptionMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
