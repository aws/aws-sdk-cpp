/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{
  enum class TargetType
  {
    NOT_SET,
    RECOMMENDATION,
    RESULT
  };

namespace TargetTypeMapper
{
AWS_CONNECTWISDOMSERVICE_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForTargetType(TargetType value);
} // namespace TargetTypeMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
