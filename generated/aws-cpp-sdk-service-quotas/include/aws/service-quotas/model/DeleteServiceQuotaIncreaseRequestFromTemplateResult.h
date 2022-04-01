﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>

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
namespace ServiceQuotas
{
namespace Model
{
  class AWS_SERVICEQUOTAS_API DeleteServiceQuotaIncreaseRequestFromTemplateResult
  {
  public:
    DeleteServiceQuotaIncreaseRequestFromTemplateResult();
    DeleteServiceQuotaIncreaseRequestFromTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteServiceQuotaIncreaseRequestFromTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
