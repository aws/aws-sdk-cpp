/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
{
namespace Model
{
  enum class Reason
  {
    NOT_SET,
    AWS_THREAT_INTELLIGENCE
  };

namespace ReasonMapper
{
AWS_DETECTIVE_API Reason GetReasonForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForReason(Reason value);
} // namespace ReasonMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
