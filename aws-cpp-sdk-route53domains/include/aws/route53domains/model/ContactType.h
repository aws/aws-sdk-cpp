/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{
  enum class ContactType
  {
    NOT_SET,
    PERSON,
    COMPANY,
    ASSOCIATION,
    PUBLIC_BODY,
    RESELLER
  };

namespace ContactTypeMapper
{
AWS_ROUTE53DOMAINS_API ContactType GetContactTypeForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForContactType(ContactType value);
} // namespace ContactTypeMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
