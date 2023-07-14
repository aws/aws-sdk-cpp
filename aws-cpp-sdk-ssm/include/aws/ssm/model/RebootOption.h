/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class RebootOption
  {
    NOT_SET,
    RebootIfNeeded,
    NoReboot
  };

namespace RebootOptionMapper
{
AWS_SSM_API RebootOption GetRebootOptionForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForRebootOption(RebootOption value);
} // namespace RebootOptionMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
