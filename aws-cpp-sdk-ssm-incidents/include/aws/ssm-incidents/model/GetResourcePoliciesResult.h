/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/ResourcePolicy.h>
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
namespace SSMIncidents
{
namespace Model
{
  class GetResourcePoliciesResult
  {
  public:
    AWS_SSMINCIDENTS_API GetResourcePoliciesResult();
    AWS_SSMINCIDENTS_API GetResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API GetResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline GetResourcePoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline GetResourcePoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline GetResourcePoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Details about the resource policy attached to the response plan.</p>
     */
    inline const Aws::Vector<ResourcePolicy>& GetResourcePolicies() const{ return m_resourcePolicies; }

    /**
     * <p>Details about the resource policy attached to the response plan.</p>
     */
    inline void SetResourcePolicies(const Aws::Vector<ResourcePolicy>& value) { m_resourcePolicies = value; }

    /**
     * <p>Details about the resource policy attached to the response plan.</p>
     */
    inline void SetResourcePolicies(Aws::Vector<ResourcePolicy>&& value) { m_resourcePolicies = std::move(value); }

    /**
     * <p>Details about the resource policy attached to the response plan.</p>
     */
    inline GetResourcePoliciesResult& WithResourcePolicies(const Aws::Vector<ResourcePolicy>& value) { SetResourcePolicies(value); return *this;}

    /**
     * <p>Details about the resource policy attached to the response plan.</p>
     */
    inline GetResourcePoliciesResult& WithResourcePolicies(Aws::Vector<ResourcePolicy>&& value) { SetResourcePolicies(std::move(value)); return *this;}

    /**
     * <p>Details about the resource policy attached to the response plan.</p>
     */
    inline GetResourcePoliciesResult& AddResourcePolicies(const ResourcePolicy& value) { m_resourcePolicies.push_back(value); return *this; }

    /**
     * <p>Details about the resource policy attached to the response plan.</p>
     */
    inline GetResourcePoliciesResult& AddResourcePolicies(ResourcePolicy&& value) { m_resourcePolicies.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ResourcePolicy> m_resourcePolicies;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
