/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameSparks
{
namespace Model
{
  enum class ResultCode
  {
    NOT_SET,
    SUCCESS,
    INVALID_ROLE_FAILURE,
    UNSPECIFIED_FAILURE
  };

namespace ResultCodeMapper
{
AWS_GAMESPARKS_API ResultCode GetResultCodeForName(const Aws::String& name);

AWS_GAMESPARKS_API Aws::String GetNameForResultCode(ResultCode value);
} // namespace ResultCodeMapper
} // namespace Model
} // namespace GameSparks
} // namespace Aws
