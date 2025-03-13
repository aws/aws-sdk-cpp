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
    AWS_AMPLIFYBACKEND_API GetBackendStorageResult() = default;
    AWS_AMPLIFYBACKEND_API GetBackendStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API GetBackendStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    GetBackendStorageResult& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backend environment.</p>
     */
    inline const Aws::String& GetBackendEnvironmentName() const { return m_backendEnvironmentName; }
    template<typename BackendEnvironmentNameT = Aws::String>
    void SetBackendEnvironmentName(BackendEnvironmentNameT&& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = std::forward<BackendEnvironmentNameT>(value); }
    template<typename BackendEnvironmentNameT = Aws::String>
    GetBackendStorageResult& WithBackendEnvironmentName(BackendEnvironmentNameT&& value) { SetBackendEnvironmentName(std::forward<BackendEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource configuration for the backend storage resource.</p>
     */
    inline const GetBackendStorageResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    template<typename ResourceConfigT = GetBackendStorageResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = GetBackendStorageResourceConfig>
    GetBackendStorageResult& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the storage resource.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    GetBackendStorageResult& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBackendStorageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_backendEnvironmentName;
    bool m_backendEnvironmentNameHasBeenSet = false;

    GetBackendStorageResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
