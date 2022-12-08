/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserEndpointSummary.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class ListAppInstanceUserEndpointsResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUserEndpointsResult();
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUserEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUserEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information for each requested <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::Vector<AppInstanceUserEndpointSummary>& GetAppInstanceUserEndpoints() const{ return m_appInstanceUserEndpoints; }

    /**
     * <p>The information for each requested <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetAppInstanceUserEndpoints(const Aws::Vector<AppInstanceUserEndpointSummary>& value) { m_appInstanceUserEndpoints = value; }

    /**
     * <p>The information for each requested <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetAppInstanceUserEndpoints(Aws::Vector<AppInstanceUserEndpointSummary>&& value) { m_appInstanceUserEndpoints = std::move(value); }

    /**
     * <p>The information for each requested <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline ListAppInstanceUserEndpointsResult& WithAppInstanceUserEndpoints(const Aws::Vector<AppInstanceUserEndpointSummary>& value) { SetAppInstanceUserEndpoints(value); return *this;}

    /**
     * <p>The information for each requested <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline ListAppInstanceUserEndpointsResult& WithAppInstanceUserEndpoints(Aws::Vector<AppInstanceUserEndpointSummary>&& value) { SetAppInstanceUserEndpoints(std::move(value)); return *this;}

    /**
     * <p>The information for each requested <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline ListAppInstanceUserEndpointsResult& AddAppInstanceUserEndpoints(const AppInstanceUserEndpointSummary& value) { m_appInstanceUserEndpoints.push_back(value); return *this; }

    /**
     * <p>The information for each requested <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline ListAppInstanceUserEndpointsResult& AddAppInstanceUserEndpoints(AppInstanceUserEndpointSummary&& value) { m_appInstanceUserEndpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline ListAppInstanceUserEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline ListAppInstanceUserEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline ListAppInstanceUserEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AppInstanceUserEndpointSummary> m_appInstanceUserEndpoints;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
