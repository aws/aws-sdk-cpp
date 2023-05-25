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
  enum class Operation
  {
    NOT_SET,
    ADD,
    REMOVE,
    REPLACE
  };

namespace OperationMapper
{
AWS_GAMESPARKS_API Operation GetOperationForName(const Aws::String& name);

AWS_GAMESPARKS_API Aws::String GetNameForOperation(Operation value);
} // namespace OperationMapper
} // namespace Model
} // namespace GameSparks
} // namespace Aws
