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
  enum class OperationType
  {
    NOT_SET,
    REGISTER_DOMAIN,
    DELETE_DOMAIN,
    TRANSFER_IN_DOMAIN,
    UPDATE_DOMAIN_CONTACT,
    UPDATE_NAMESERVER,
    CHANGE_PRIVACY_PROTECTION,
    DOMAIN_LOCK,
    ENABLE_AUTORENEW,
    DISABLE_AUTORENEW,
    ADD_DNSSEC,
    REMOVE_DNSSEC,
    EXPIRE_DOMAIN,
    TRANSFER_OUT_DOMAIN,
    CHANGE_DOMAIN_OWNER,
    RENEW_DOMAIN,
    PUSH_DOMAIN,
    INTERNAL_TRANSFER_OUT_DOMAIN,
    INTERNAL_TRANSFER_IN_DOMAIN
  };

namespace OperationTypeMapper
{
AWS_ROUTE53DOMAINS_API OperationType GetOperationTypeForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForOperationType(OperationType value);
} // namespace OperationTypeMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
