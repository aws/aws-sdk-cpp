/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RAM
{
namespace Model
{
  class AWS_RAM_API GetResourcePoliciesResult
  {
  public:
    GetResourcePoliciesResult();
    GetResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A key policy document, in JSON format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicies() const{ return m_policies; }

    /**
     * <p>A key policy document, in JSON format.</p>
     */
    inline void SetPolicies(const Aws::Vector<Aws::String>& value) { m_policies = value; }

    /**
     * <p>A key policy document, in JSON format.</p>
     */
    inline void SetPolicies(Aws::Vector<Aws::String>&& value) { m_policies = std::move(value); }

    /**
     * <p>A key policy document, in JSON format.</p>
     */
    inline GetResourcePoliciesResult& WithPolicies(const Aws::Vector<Aws::String>& value) { SetPolicies(value); return *this;}

    /**
     * <p>A key policy document, in JSON format.</p>
     */
    inline GetResourcePoliciesResult& WithPolicies(Aws::Vector<Aws::String>&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>A key policy document, in JSON format.</p>
     */
    inline GetResourcePoliciesResult& AddPolicies(const Aws::String& value) { m_policies.push_back(value); return *this; }

    /**
     * <p>A key policy document, in JSON format.</p>
     */
    inline GetResourcePoliciesResult& AddPolicies(Aws::String&& value) { m_policies.push_back(std::move(value)); return *this; }

    /**
     * <p>A key policy document, in JSON format.</p>
     */
    inline GetResourcePoliciesResult& AddPolicies(const char* value) { m_policies.push_back(value); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetResourcePoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetResourcePoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetResourcePoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_policies;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
