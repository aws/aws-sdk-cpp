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
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryByQuotaResult
  {
  public:
    ListRequestedServiceQuotaChangeHistoryByQuotaResult();
    ListRequestedServiceQuotaChangeHistoryByQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRequestedServiceQuotaChangeHistoryByQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If present in the response, this value indicates there's more output
     * available that what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present in the response, this value indicates there's more output
     * available that what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present in the response, this value indicates there's more output
     * available that what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present in the response, this value indicates there's more output
     * available that what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present in the response, this value indicates there's more output
     * available that what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present in the response, this value indicates there's more output
     * available that what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present in the response, this value indicates there's more output
     * available that what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns a list of service quota requests.</p>
     */
    inline const Aws::Vector<RequestedServiceQuotaChange>& GetRequestedQuotas() const{ return m_requestedQuotas; }

    /**
     * <p>Returns a list of service quota requests.</p>
     */
    inline void SetRequestedQuotas(const Aws::Vector<RequestedServiceQuotaChange>& value) { m_requestedQuotas = value; }

    /**
     * <p>Returns a list of service quota requests.</p>
     */
    inline void SetRequestedQuotas(Aws::Vector<RequestedServiceQuotaChange>&& value) { m_requestedQuotas = std::move(value); }

    /**
     * <p>Returns a list of service quota requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithRequestedQuotas(const Aws::Vector<RequestedServiceQuotaChange>& value) { SetRequestedQuotas(value); return *this;}

    /**
     * <p>Returns a list of service quota requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithRequestedQuotas(Aws::Vector<RequestedServiceQuotaChange>&& value) { SetRequestedQuotas(std::move(value)); return *this;}

    /**
     * <p>Returns a list of service quota requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& AddRequestedQuotas(const RequestedServiceQuotaChange& value) { m_requestedQuotas.push_back(value); return *this; }

    /**
     * <p>Returns a list of service quota requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& AddRequestedQuotas(RequestedServiceQuotaChange&& value) { m_requestedQuotas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RequestedServiceQuotaChange> m_requestedQuotas;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
