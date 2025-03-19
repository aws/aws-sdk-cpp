/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apigatewaymanagementapi/model/Identity.h>
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
namespace ApiGatewayManagementApi
{
namespace Model
{
  class GetConnectionResult
  {
  public:
    AWS_APIGATEWAYMANAGEMENTAPI_API GetConnectionResult() = default;
    AWS_APIGATEWAYMANAGEMENTAPI_API GetConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYMANAGEMENTAPI_API GetConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time in ISO 8601 format for when the connection was established.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedAt() const { return m_connectedAt; }
    template<typename ConnectedAtT = Aws::Utils::DateTime>
    void SetConnectedAt(ConnectedAtT&& value) { m_connectedAtHasBeenSet = true; m_connectedAt = std::forward<ConnectedAtT>(value); }
    template<typename ConnectedAtT = Aws::Utils::DateTime>
    GetConnectionResult& WithConnectedAt(ConnectedAtT&& value) { SetConnectedAt(std::forward<ConnectedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Identity& GetIdentity() const { return m_identity; }
    template<typename IdentityT = Identity>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Identity>
    GetConnectionResult& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in ISO 8601 format for when the connection was last active.</p>
     */
    inline const Aws::Utils::DateTime& GetLastActiveAt() const { return m_lastActiveAt; }
    template<typename LastActiveAtT = Aws::Utils::DateTime>
    void SetLastActiveAt(LastActiveAtT&& value) { m_lastActiveAtHasBeenSet = true; m_lastActiveAt = std::forward<LastActiveAtT>(value); }
    template<typename LastActiveAtT = Aws::Utils::DateTime>
    GetConnectionResult& WithLastActiveAt(LastActiveAtT&& value) { SetLastActiveAt(std::forward<LastActiveAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_connectedAt{};
    bool m_connectedAtHasBeenSet = false;

    Identity m_identity;
    bool m_identityHasBeenSet = false;

    Aws::Utils::DateTime m_lastActiveAt{};
    bool m_lastActiveAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayManagementApi
} // namespace Aws
