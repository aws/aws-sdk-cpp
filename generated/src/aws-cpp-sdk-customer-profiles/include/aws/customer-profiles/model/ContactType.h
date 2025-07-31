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
  enum class ContactType
  {
    NOT_SET,
    PhoneNumber,
    MobilePhoneNumber,
    HomePhoneNumber,
    BusinessPhoneNumber,
    EmailAddress,
    PersonalEmailAddress,
    BusinessEmailAddress
  };

namespace ContactTypeMapper
{
AWS_CUSTOMERPROFILES_API ContactType GetContactTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForContactType(ContactType value);
} // namespace ContactTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
