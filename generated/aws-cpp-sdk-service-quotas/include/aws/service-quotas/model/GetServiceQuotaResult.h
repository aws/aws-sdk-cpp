﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/ServiceQuota.h>
#include <utility>

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
  class AWS_SERVICEQUOTAS_API GetServiceQuotaResult
  {
  public:
    GetServiceQuotaResult();
    GetServiceQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetServiceQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the quota.</p>
     */
    inline const ServiceQuota& GetQuota() const{ return m_quota; }

    /**
     * <p>Information about the quota.</p>
     */
    inline void SetQuota(const ServiceQuota& value) { m_quota = value; }

    /**
     * <p>Information about the quota.</p>
     */
    inline void SetQuota(ServiceQuota&& value) { m_quota = std::move(value); }

    /**
     * <p>Information about the quota.</p>
     */
    inline GetServiceQuotaResult& WithQuota(const ServiceQuota& value) { SetQuota(value); return *this;}

    /**
     * <p>Information about the quota.</p>
     */
    inline GetServiceQuotaResult& WithQuota(ServiceQuota&& value) { SetQuota(std::move(value)); return *this;}

  private:

    ServiceQuota m_quota;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
