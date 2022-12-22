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
  enum class Transferable
  {
    NOT_SET,
    TRANSFERABLE,
    UNTRANSFERABLE,
    DONT_KNOW,
    DOMAIN_IN_OWN_ACCOUNT,
    DOMAIN_IN_ANOTHER_ACCOUNT,
    PREMIUM_DOMAIN
  };

namespace TransferableMapper
{
AWS_ROUTE53DOMAINS_API Transferable GetTransferableForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForTransferable(Transferable value);
} // namespace TransferableMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
