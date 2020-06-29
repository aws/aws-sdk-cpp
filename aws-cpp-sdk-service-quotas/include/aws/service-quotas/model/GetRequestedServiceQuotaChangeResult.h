/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/RequestedServiceQuotaChange.h>
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
  class AWS_SERVICEQUOTAS_API GetRequestedServiceQuotaChangeResult
  {
  public:
    GetRequestedServiceQuotaChangeResult();
    GetRequestedServiceQuotaChangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRequestedServiceQuotaChangeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the <code>RequestedServiceQuotaChange</code> object for the specific
     * increase request.</p>
     */
    inline const RequestedServiceQuotaChange& GetRequestedQuota() const{ return m_requestedQuota; }

    /**
     * <p>Returns the <code>RequestedServiceQuotaChange</code> object for the specific
     * increase request.</p>
     */
    inline void SetRequestedQuota(const RequestedServiceQuotaChange& value) { m_requestedQuota = value; }

    /**
     * <p>Returns the <code>RequestedServiceQuotaChange</code> object for the specific
     * increase request.</p>
     */
    inline void SetRequestedQuota(RequestedServiceQuotaChange&& value) { m_requestedQuota = std::move(value); }

    /**
     * <p>Returns the <code>RequestedServiceQuotaChange</code> object for the specific
     * increase request.</p>
     */
    inline GetRequestedServiceQuotaChangeResult& WithRequestedQuota(const RequestedServiceQuotaChange& value) { SetRequestedQuota(value); return *this;}

    /**
     * <p>Returns the <code>RequestedServiceQuotaChange</code> object for the specific
     * increase request.</p>
     */
    inline GetRequestedServiceQuotaChangeResult& WithRequestedQuota(RequestedServiceQuotaChange&& value) { SetRequestedQuota(std::move(value)); return *this;}

  private:

    RequestedServiceQuotaChange m_requestedQuota;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
