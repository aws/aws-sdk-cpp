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
  class AWS_SERVICEQUOTAS_API ListAWSDefaultServiceQuotasResult
  {
  public:
    ListAWSDefaultServiceQuotasResult();
    ListAWSDefaultServiceQuotasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAWSDefaultServiceQuotasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline ListAWSDefaultServiceQuotasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline ListAWSDefaultServiceQuotasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline ListAWSDefaultServiceQuotasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of the quotas in the account with the AWS default values. </p>
     */
    inline const Aws::Vector<ServiceQuota>& GetQuotas() const{ return m_quotas; }

    /**
     * <p>A list of the quotas in the account with the AWS default values. </p>
     */
    inline void SetQuotas(const Aws::Vector<ServiceQuota>& value) { m_quotas = value; }

    /**
     * <p>A list of the quotas in the account with the AWS default values. </p>
     */
    inline void SetQuotas(Aws::Vector<ServiceQuota>&& value) { m_quotas = std::move(value); }

    /**
     * <p>A list of the quotas in the account with the AWS default values. </p>
     */
    inline ListAWSDefaultServiceQuotasResult& WithQuotas(const Aws::Vector<ServiceQuota>& value) { SetQuotas(value); return *this;}

    /**
     * <p>A list of the quotas in the account with the AWS default values. </p>
     */
    inline ListAWSDefaultServiceQuotasResult& WithQuotas(Aws::Vector<ServiceQuota>&& value) { SetQuotas(std::move(value)); return *this;}

    /**
     * <p>A list of the quotas in the account with the AWS default values. </p>
     */
    inline ListAWSDefaultServiceQuotasResult& AddQuotas(const ServiceQuota& value) { m_quotas.push_back(value); return *this; }

    /**
     * <p>A list of the quotas in the account with the AWS default values. </p>
     */
    inline ListAWSDefaultServiceQuotasResult& AddQuotas(ServiceQuota&& value) { m_quotas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceQuota> m_quotas;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
