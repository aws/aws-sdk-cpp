﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{
  class AWS_ROUTE53DOMAINS_API EnableDomainAutoRenewResult
  {
  public:
    EnableDomainAutoRenewResult();
    EnableDomainAutoRenewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    EnableDomainAutoRenewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
