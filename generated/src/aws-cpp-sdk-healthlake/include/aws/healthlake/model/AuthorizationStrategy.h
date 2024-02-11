/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace HealthLake
{
namespace Model
{
  enum class AuthorizationStrategy
  {
    NOT_SET,
    SMART_ON_FHIR_V1,
    AWS_AUTH
  };

namespace AuthorizationStrategyMapper
{
AWS_HEALTHLAKE_API AuthorizationStrategy GetAuthorizationStrategyForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForAuthorizationStrategy(AuthorizationStrategy value);
} // namespace AuthorizationStrategyMapper
} // namespace Model
} // namespace HealthLake
} // namespace Aws
