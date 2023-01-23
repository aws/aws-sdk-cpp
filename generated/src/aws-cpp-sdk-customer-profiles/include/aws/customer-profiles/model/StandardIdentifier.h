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
  enum class StandardIdentifier
  {
    NOT_SET,
    PROFILE,
    ASSET,
    CASE,
    UNIQUE,
    SECONDARY,
    LOOKUP_ONLY,
    NEW_ONLY,
    ORDER
  };

namespace StandardIdentifierMapper
{
AWS_CUSTOMERPROFILES_API StandardIdentifier GetStandardIdentifierForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForStandardIdentifier(StandardIdentifier value);
} // namespace StandardIdentifierMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
