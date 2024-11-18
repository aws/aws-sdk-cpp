/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class IncludeOptions
  {
    NOT_SET,
    ALL,
    ANY,
    NONE
  };

namespace IncludeOptionsMapper
{
AWS_CUSTOMERPROFILES_API IncludeOptions GetIncludeOptionsForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForIncludeOptions(IncludeOptions value);
} // namespace IncludeOptionsMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
