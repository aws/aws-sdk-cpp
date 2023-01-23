/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/Endpoint.h>
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
namespace EMRContainers
{
namespace Model
{
  class ListManagedEndpointsResult
  {
  public:
    AWS_EMRCONTAINERS_API ListManagedEndpointsResult();
    AWS_EMRCONTAINERS_API ListManagedEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API ListManagedEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The managed endpoints to be listed.</p>
     */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The managed endpoints to be listed.</p>
     */
    inline void SetEndpoints(const Aws::Vector<Endpoint>& value) { m_endpoints = value; }

    /**
     * <p>The managed endpoints to be listed.</p>
     */
    inline void SetEndpoints(Aws::Vector<Endpoint>&& value) { m_endpoints = std::move(value); }

    /**
     * <p>The managed endpoints to be listed.</p>
     */
    inline ListManagedEndpointsResult& WithEndpoints(const Aws::Vector<Endpoint>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The managed endpoints to be listed.</p>
     */
    inline ListManagedEndpointsResult& WithEndpoints(Aws::Vector<Endpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The managed endpoints to be listed.</p>
     */
    inline ListManagedEndpointsResult& AddEndpoints(const Endpoint& value) { m_endpoints.push_back(value); return *this; }

    /**
     * <p>The managed endpoints to be listed.</p>
     */
    inline ListManagedEndpointsResult& AddEndpoints(Endpoint&& value) { m_endpoints.push_back(std::move(value)); return *this; }


    /**
     * <p> The token for the next set of endpoints to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token for the next set of endpoints to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token for the next set of endpoints to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token for the next set of endpoints to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token for the next set of endpoints to return. </p>
     */
    inline ListManagedEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of endpoints to return. </p>
     */
    inline ListManagedEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token for the next set of endpoints to return. </p>
     */
    inline ListManagedEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Endpoint> m_endpoints;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
