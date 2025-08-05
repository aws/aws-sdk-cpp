/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/IntegrationStatus.h>
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
namespace Inspector2
{
namespace Model
{
  class CreateCodeSecurityIntegrationResult
  {
  public:
    AWS_INSPECTOR2_API CreateCodeSecurityIntegrationResult() = default;
    AWS_INSPECTOR2_API CreateCodeSecurityIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API CreateCodeSecurityIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created code security integration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
    template<typename IntegrationArnT = Aws::String>
    void SetIntegrationArn(IntegrationArnT&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::forward<IntegrationArnT>(value); }
    template<typename IntegrationArnT = Aws::String>
    CreateCodeSecurityIntegrationResult& WithIntegrationArn(IntegrationArnT&& value) { SetIntegrationArn(std::forward<IntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the code security integration.</p>
     */
    inline IntegrationStatus GetStatus() const { return m_status; }
    inline void SetStatus(IntegrationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateCodeSecurityIntegrationResult& WithStatus(IntegrationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL used to authorize the integration with the repository provider.</p>
     */
    inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
    template<typename AuthorizationUrlT = Aws::String>
    void SetAuthorizationUrl(AuthorizationUrlT&& value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl = std::forward<AuthorizationUrlT>(value); }
    template<typename AuthorizationUrlT = Aws::String>
    CreateCodeSecurityIntegrationResult& WithAuthorizationUrl(AuthorizationUrlT&& value) { SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCodeSecurityIntegrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_integrationArn;
    bool m_integrationArnHasBeenSet = false;

    IntegrationStatus m_status{IntegrationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_authorizationUrl;
    bool m_authorizationUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
