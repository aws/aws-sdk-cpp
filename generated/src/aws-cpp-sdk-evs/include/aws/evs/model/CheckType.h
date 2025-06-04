/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EVS
{
namespace Model
{
  enum class CheckType
  {
    NOT_SET,
    KEY_REUSE,
    KEY_COVERAGE,
    REACHABILITY,
    HOST_COUNT
  };

namespace CheckTypeMapper
{
AWS_EVS_API CheckType GetCheckTypeForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForCheckType(CheckType value);
} // namespace CheckTypeMapper
} // namespace Model
} // namespace EVS
} // namespace Aws
