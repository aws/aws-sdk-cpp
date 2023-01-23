/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/GetBackendStorageResourceConfig.h>
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
  class GetBackendStorageResult
  {
  public:
    AWS_AMPLIFYBACKEND_API GetBackendStorageResult();
    AWS_AMPLIFYBACKEND_API GetBackendStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API GetBackendStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetBackendStorageResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline GetBackendStorageResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline GetBackendStorageResult& WithAppId(const char* value) { SetAppId(value); return *this;}


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
    inline GetBackendStorageResult& WithBackendEnvironmentName(const Aws::String& value) { SetBackendEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline GetBackendStorageResult& WithBackendEnvironmentName(Aws::String&& value) { SetBackendEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline GetBackendStorageResult& WithBackendEnvironmentName(const char* value) { SetBackendEnvironmentName(value); return *this;}


    /**
     * <p>The resource configuration for the backend storage resource.</p>
     */
    inline const GetBackendStorageResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }

    /**
     * <p>The resource configuration for the backend storage resource.</p>
     */
    inline void SetResourceConfig(const GetBackendStorageResourceConfig& value) { m_resourceConfig = value; }

    /**
     * <p>The resource configuration for the backend storage resource.</p>
     */
    inline void SetResourceConfig(GetBackendStorageResourceConfig&& value) { m_resourceConfig = std::move(value); }

    /**
     * <p>The resource configuration for the backend storage resource.</p>
     */
    inline GetBackendStorageResult& WithResourceConfig(const GetBackendStorageResourceConfig& value) { SetResourceConfig(value); return *this;}

    /**
     * <p>The resource configuration for the backend storage resource.</p>
     */
    inline GetBackendStorageResult& WithResourceConfig(GetBackendStorageResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}


    /**
     * <p>The name of the storage resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the storage resource.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceName = value; }

    /**
     * <p>The name of the storage resource.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceName = std::move(value); }

    /**
     * <p>The name of the storage resource.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceName.assign(value); }

    /**
     * <p>The name of the storage resource.</p>
     */
    inline GetBackendStorageResult& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the storage resource.</p>
     */
    inline GetBackendStorageResult& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the storage resource.</p>
     */
    inline GetBackendStorageResult& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_appId;

    Aws::String m_backendEnvironmentName;

    GetBackendStorageResourceConfig m_resourceConfig;

    Aws::String m_resourceName;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
