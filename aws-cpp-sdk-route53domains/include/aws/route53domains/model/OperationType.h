/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    PUSH_DOMAIN
  };

namespace OperationTypeMapper
{
AWS_ROUTE53DOMAINS_API OperationType GetOperationTypeForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForOperationType(OperationType value);
} // namespace OperationTypeMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
