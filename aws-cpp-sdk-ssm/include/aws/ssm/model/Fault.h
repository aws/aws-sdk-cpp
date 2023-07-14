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
  enum class Fault
  {
    NOT_SET,
    Client,
    Server,
    Unknown
  };

namespace FaultMapper
{
AWS_SSM_API Fault GetFaultForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForFault(Fault value);
} // namespace FaultMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
