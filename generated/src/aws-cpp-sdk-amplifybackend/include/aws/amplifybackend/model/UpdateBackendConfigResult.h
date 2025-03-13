/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/LoginAuthConfigReqObj.h>
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
namespace AmplifyBackend
{
namespace Model
{
  class UpdateBackendConfigResult
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendConfigResult() = default;
    AWS_AMPLIFYBACKEND_API UpdateBackendConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API UpdateBackendConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    UpdateBackendConfigResult& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app ID for the backend manager.</p>
     */
    inline const Aws::String& GetBackendManagerAppId() const { return m_backendManagerAppId; }
    template<typename BackendManagerAppIdT = Aws::String>
    void SetBackendManagerAppId(BackendManagerAppIdT&& value) { m_backendManagerAppIdHasBeenSet = true; m_backendManagerAppId = std::forward<BackendManagerAppIdT>(value); }
    template<typename BackendManagerAppIdT = Aws::String>
    UpdateBackendConfigResult& WithBackendManagerAppId(BackendManagerAppIdT&& value) { SetBackendManagerAppId(std::forward<BackendManagerAppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    UpdateBackendConfigResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon Cognito configurations for the Admin UI auth resource to
     * log in with.</p>
     */
    inline const LoginAuthConfigReqObj& GetLoginAuthConfig() const { return m_loginAuthConfig; }
    template<typename LoginAuthConfigT = LoginAuthConfigReqObj>
    void SetLoginAuthConfig(LoginAuthConfigT&& value) { m_loginAuthConfigHasBeenSet = true; m_loginAuthConfig = std::forward<LoginAuthConfigT>(value); }
    template<typename LoginAuthConfigT = LoginAuthConfigReqObj>
    UpdateBackendConfigResult& WithLoginAuthConfig(LoginAuthConfigT&& value) { SetLoginAuthConfig(std::forward<LoginAuthConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBackendConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_backendManagerAppId;
    bool m_backendManagerAppIdHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    LoginAuthConfigReqObj m_loginAuthConfig;
    bool m_loginAuthConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
