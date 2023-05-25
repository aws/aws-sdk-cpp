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
  enum class PartyType
  {
    NOT_SET,
    INDIVIDUAL,
    BUSINESS,
    OTHER
  };

namespace PartyTypeMapper
{
AWS_CUSTOMERPROFILES_API PartyType GetPartyTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForPartyType(PartyType value);
} // namespace PartyTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
