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
  enum class Include
  {
    NOT_SET,
    ALL,
    ANY,
    NONE
  };

namespace IncludeMapper
{
AWS_CUSTOMERPROFILES_API Include GetIncludeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForInclude(Include value);
} // namespace IncludeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
