/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{
  enum class HasLogicalRedundancy
  {
    NOT_SET,
    unknown,
    yes,
    no
  };

namespace HasLogicalRedundancyMapper
{
AWS_DIRECTCONNECT_API HasLogicalRedundancy GetHasLogicalRedundancyForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForHasLogicalRedundancy(HasLogicalRedundancy value);
} // namespace HasLogicalRedundancyMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
