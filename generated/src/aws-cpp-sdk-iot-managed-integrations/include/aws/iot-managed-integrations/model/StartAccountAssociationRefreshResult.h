/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class StartAccountAssociationRefreshResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API StartAccountAssociationRefreshResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API StartAccountAssociationRefreshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API StartAccountAssociationRefreshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Third-party IoT platform OAuth authorization server URL with all required
     * parameters to perform end-user authentication during the refresh process.</p>
     */
    inline const Aws::String& GetOAuthAuthorizationUrl() const { return m_oAuthAuthorizationUrl; }
    template<typename OAuthAuthorizationUrlT = Aws::String>
    void SetOAuthAuthorizationUrl(OAuthAuthorizationUrlT&& value) { m_oAuthAuthorizationUrlHasBeenSet = true; m_oAuthAuthorizationUrl = std::forward<OAuthAuthorizationUrlT>(value); }
    template<typename OAuthAuthorizationUrlT = Aws::String>
    StartAccountAssociationRefreshResult& WithOAuthAuthorizationUrl(OAuthAuthorizationUrlT&& value) { SetOAuthAuthorizationUrl(std::forward<OAuthAuthorizationUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartAccountAssociationRefreshResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_oAuthAuthorizationUrl;
    bool m_oAuthAuthorizationUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
