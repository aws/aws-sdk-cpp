/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class EgressType
  {
    NOT_SET,
    DEFAULT,
    VPC
  };

namespace EgressTypeMapper
{
AWS_APPRUNNER_API EgressType GetEgressTypeForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForEgressType(EgressType value);
} // namespace EgressTypeMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
