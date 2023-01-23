/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class EFSAuthorizationConfigIAM
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace EFSAuthorizationConfigIAMMapper
{
AWS_ECS_API EFSAuthorizationConfigIAM GetEFSAuthorizationConfigIAMForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForEFSAuthorizationConfigIAM(EFSAuthorizationConfigIAM value);
} // namespace EFSAuthorizationConfigIAMMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
