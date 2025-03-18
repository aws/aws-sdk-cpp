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
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUserEndpointsResult() = default;
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUserEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUserEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information for each requested <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::Vector<AppInstanceUserEndpointSummary>& GetAppInstanceUserEndpoints() const { return m_appInstanceUserEndpoints; }
    template<typename AppInstanceUserEndpointsT = Aws::Vector<AppInstanceUserEndpointSummary>>
    void SetAppInstanceUserEndpoints(AppInstanceUserEndpointsT&& value) { m_appInstanceUserEndpointsHasBeenSet = true; m_appInstanceUserEndpoints = std::forward<AppInstanceUserEndpointsT>(value); }
    template<typename AppInstanceUserEndpointsT = Aws::Vector<AppInstanceUserEndpointSummary>>
    ListAppInstanceUserEndpointsResult& WithAppInstanceUserEndpoints(AppInstanceUserEndpointsT&& value) { SetAppInstanceUserEndpoints(std::forward<AppInstanceUserEndpointsT>(value)); return *this;}
    template<typename AppInstanceUserEndpointsT = AppInstanceUserEndpointSummary>
    ListAppInstanceUserEndpointsResult& AddAppInstanceUserEndpoints(AppInstanceUserEndpointsT&& value) { m_appInstanceUserEndpointsHasBeenSet = true; m_appInstanceUserEndpoints.emplace_back(std::forward<AppInstanceUserEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppInstanceUserEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppInstanceUserEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppInstanceUserEndpointSummary> m_appInstanceUserEndpoints;
    bool m_appInstanceUserEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
