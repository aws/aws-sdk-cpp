/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{
  enum class RRType
  {
    NOT_SET,
    SOA,
    A,
    TXT,
    NS,
    CNAME,
    MX,
    NAPTR,
    PTR,
    SRV,
    SPF,
    AAAA,
    CAA
  };

namespace RRTypeMapper
{
AWS_ROUTE53_API RRType GetRRTypeForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForRRType(RRType value);
} // namespace RRTypeMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
