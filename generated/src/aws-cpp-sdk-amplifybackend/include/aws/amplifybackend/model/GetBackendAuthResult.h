/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/CreateBackendAuthResourceConfig.h>
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
  class GetBackendAuthResult
  {
  public:
    AWS_AMPLIFYBACKEND_API GetBackendAuthResult();
    AWS_AMPLIFYBACKEND_API GetBackendAuthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API GetBackendAuthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetBackendAuthResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline GetBackendAuthResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline GetBackendAuthResult& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The name of the backend environment.</p>
     */
    inline const Aws::String& GetBackendEnvironmentName() const{ return m_backendEnvironmentName; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(const Aws::String& value) { m_backendEnvironmentName = value; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(Aws::String&& value) { m_backendEnvironmentName = std::move(value); }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(const char* value) { m_backendEnvironmentName.assign(value); }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline GetBackendAuthResult& WithBackendEnvironmentName(const Aws::String& value) { SetBackendEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline GetBackendAuthResult& WithBackendEnvironmentName(Aws::String&& value) { SetBackendEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline GetBackendAuthResult& WithBackendEnvironmentName(const char* value) { SetBackendEnvironmentName(value); return *this;}


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
    inline GetBackendAuthResult& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline GetBackendAuthResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline GetBackendAuthResult& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>The resource configuration for authorization requests to the backend of your
     * Amplify project.</p>
     */
    inline const CreateBackendAuthResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }

    /**
     * <p>The resource configuration for authorization requests to the backend of your
     * Amplify project.</p>
     */
    inline void SetResourceConfig(const CreateBackendAuthResourceConfig& value) { m_resourceConfig = value; }

    /**
     * <p>The resource configuration for authorization requests to the backend of your
     * Amplify project.</p>
     */
    inline void SetResourceConfig(CreateBackendAuthResourceConfig&& value) { m_resourceConfig = std::move(value); }

    /**
     * <p>The resource configuration for authorization requests to the backend of your
     * Amplify project.</p>
     */
    inline GetBackendAuthResult& WithResourceConfig(const CreateBackendAuthResourceConfig& value) { SetResourceConfig(value); return *this;}

    /**
     * <p>The resource configuration for authorization requests to the backend of your
     * Amplify project.</p>
     */
    inline GetBackendAuthResult& WithResourceConfig(CreateBackendAuthResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}


    /**
     * <p>The name of this resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of this resource.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceName = value; }

    /**
     * <p>The name of this resource.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceName = std::move(value); }

    /**
     * <p>The name of this resource.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceName.assign(value); }

    /**
     * <p>The name of this resource.</p>
     */
    inline GetBackendAuthResult& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of this resource.</p>
     */
    inline GetBackendAuthResult& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of this resource.</p>
     */
    inline GetBackendAuthResult& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_appId;

    Aws::String m_backendEnvironmentName;

    Aws::String m_error;

    CreateBackendAuthResourceConfig m_resourceConfig;

    Aws::String m_resourceName;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
