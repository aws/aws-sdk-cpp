/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IVS
{
namespace Model
{
  enum class MultitrackPolicy
  {
    NOT_SET,
    ALLOW,
    REQUIRE
  };

namespace MultitrackPolicyMapper
{
AWS_IVS_API MultitrackPolicy GetMultitrackPolicyForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForMultitrackPolicy(MultitrackPolicy value);
} // namespace MultitrackPolicyMapper
} // namespace Model
} // namespace IVS
} // namespace Aws
