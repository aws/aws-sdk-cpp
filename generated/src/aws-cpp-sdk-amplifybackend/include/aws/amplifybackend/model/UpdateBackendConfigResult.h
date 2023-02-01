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
    AWS_AMPLIFYBACKEND_API UpdateBackendConfigResult();
    AWS_AMPLIFYBACKEND_API UpdateBackendConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API UpdateBackendConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appId = value; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const char* value) { m_appId.assign(value); }

    /**
     * <p>The app ID.</p>
     */
    inline UpdateBackendConfigResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline UpdateBackendConfigResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline UpdateBackendConfigResult& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The app ID for the backend manager.</p>
     */
    inline const Aws::String& GetBackendManagerAppId() const{ return m_backendManagerAppId; }

    /**
     * <p>The app ID for the backend manager.</p>
     */
    inline void SetBackendManagerAppId(const Aws::String& value) { m_backendManagerAppId = value; }

    /**
     * <p>The app ID for the backend manager.</p>
     */
    inline void SetBackendManagerAppId(Aws::String&& value) { m_backendManagerAppId = std::move(value); }

    /**
     * <p>The app ID for the backend manager.</p>
     */
    inline void SetBackendManagerAppId(const char* value) { m_backendManagerAppId.assign(value); }

    /**
     * <p>The app ID for the backend manager.</p>
     */
    inline UpdateBackendConfigResult& WithBackendManagerAppId(const Aws::String& value) { SetBackendManagerAppId(value); return *this;}

    /**
     * <p>The app ID for the backend manager.</p>
     */
    inline UpdateBackendConfigResult& WithBackendManagerAppId(Aws::String&& value) { SetBackendManagerAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID for the backend manager.</p>
     */
    inline UpdateBackendConfigResult& WithBackendManagerAppId(const char* value) { SetBackendManagerAppId(value); return *this;}


    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline void SetError(const Aws::String& value) { m_error = value; }

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline void SetError(const char* value) { m_error.assign(value); }

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline UpdateBackendConfigResult& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline UpdateBackendConfigResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline UpdateBackendConfigResult& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>Describes the Amazon Cognito configurations for the Admin UI auth resource to
     * log in with.</p>
     */
    inline const LoginAuthConfigReqObj& GetLoginAuthConfig() const{ return m_loginAuthConfig; }

    /**
     * <p>Describes the Amazon Cognito configurations for the Admin UI auth resource to
     * log in with.</p>
     */
    inline void SetLoginAuthConfig(const LoginAuthConfigReqObj& value) { m_loginAuthConfig = value; }

    /**
     * <p>Describes the Amazon Cognito configurations for the Admin UI auth resource to
     * log in with.</p>
     */
    inline void SetLoginAuthConfig(LoginAuthConfigReqObj&& value) { m_loginAuthConfig = std::move(value); }

    /**
     * <p>Describes the Amazon Cognito configurations for the Admin UI auth resource to
     * log in with.</p>
     */
    inline UpdateBackendConfigResult& WithLoginAuthConfig(const LoginAuthConfigReqObj& value) { SetLoginAuthConfig(value); return *this;}

    /**
     * <p>Describes the Amazon Cognito configurations for the Admin UI auth resource to
     * log in with.</p>
     */
    inline UpdateBackendConfigResult& WithLoginAuthConfig(LoginAuthConfigReqObj&& value) { SetLoginAuthConfig(std::move(value)); return *this;}

  private:

    Aws::String m_appId;

    Aws::String m_backendManagerAppId;

    Aws::String m_error;

    LoginAuthConfigReqObj m_loginAuthConfig;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
