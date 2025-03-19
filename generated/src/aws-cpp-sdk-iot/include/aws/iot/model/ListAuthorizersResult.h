/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuthorizerSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListAuthorizersResult
  {
  public:
    AWS_IOT_API ListAuthorizersResult() = default;
    AWS_IOT_API ListAuthorizersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAuthorizersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The authorizers.</p>
     */
    inline const Aws::Vector<AuthorizerSummary>& GetAuthorizers() const { return m_authorizers; }
    template<typename AuthorizersT = Aws::Vector<AuthorizerSummary>>
    void SetAuthorizers(AuthorizersT&& value) { m_authorizersHasBeenSet = true; m_authorizers = std::forward<AuthorizersT>(value); }
    template<typename AuthorizersT = Aws::Vector<AuthorizerSummary>>
    ListAuthorizersResult& WithAuthorizers(AuthorizersT&& value) { SetAuthorizers(std::forward<AuthorizersT>(value)); return *this;}
    template<typename AuthorizersT = AuthorizerSummary>
    ListAuthorizersResult& AddAuthorizers(AuthorizersT&& value) { m_authorizersHasBeenSet = true; m_authorizers.emplace_back(std::forward<AuthorizersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListAuthorizersResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAuthorizersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthorizerSummary> m_authorizers;
    bool m_authorizersHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
