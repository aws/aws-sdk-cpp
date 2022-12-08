/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/EndpointAccess.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListEndpointAccessResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListEndpointAccessResult();
    AWS_REDSHIFTSERVERLESS_API ListEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned VPC endpoints.</p>
     */
    inline const Aws::Vector<EndpointAccess>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The returned VPC endpoints.</p>
     */
    inline void SetEndpoints(const Aws::Vector<EndpointAccess>& value) { m_endpoints = value; }

    /**
     * <p>The returned VPC endpoints.</p>
     */
    inline void SetEndpoints(Aws::Vector<EndpointAccess>&& value) { m_endpoints = std::move(value); }

    /**
     * <p>The returned VPC endpoints.</p>
     */
    inline ListEndpointAccessResult& WithEndpoints(const Aws::Vector<EndpointAccess>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The returned VPC endpoints.</p>
     */
    inline ListEndpointAccessResult& WithEndpoints(Aws::Vector<EndpointAccess>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The returned VPC endpoints.</p>
     */
    inline ListEndpointAccessResult& AddEndpoints(const EndpointAccess& value) { m_endpoints.push_back(value); return *this; }

    /**
     * <p>The returned VPC endpoints.</p>
     */
    inline ListEndpointAccessResult& AddEndpoints(EndpointAccess&& value) { m_endpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListEndpointAccessResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListEndpointAccessResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListEndpointAccessResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EndpointAccess> m_endpoints;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
