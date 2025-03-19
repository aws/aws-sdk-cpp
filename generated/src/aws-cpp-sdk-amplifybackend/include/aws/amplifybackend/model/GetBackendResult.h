/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetBackendResult
  {
  public:
    AWS_AMPLIFYBACKEND_API GetBackendResult() = default;
    AWS_AMPLIFYBACKEND_API GetBackendResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API GetBackendResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A stringified version of the cli.json file for your Amplify project.</p>
     */
    inline const Aws::String& GetAmplifyFeatureFlags() const { return m_amplifyFeatureFlags; }
    template<typename AmplifyFeatureFlagsT = Aws::String>
    void SetAmplifyFeatureFlags(AmplifyFeatureFlagsT&& value) { m_amplifyFeatureFlagsHasBeenSet = true; m_amplifyFeatureFlags = std::forward<AmplifyFeatureFlagsT>(value); }
    template<typename AmplifyFeatureFlagsT = Aws::String>
    GetBackendResult& WithAmplifyFeatureFlags(AmplifyFeatureFlagsT&& value) { SetAmplifyFeatureFlags(std::forward<AmplifyFeatureFlagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stringified version of the current configs for your Amplify project.</p>
     */
    inline const Aws::String& GetAmplifyMetaConfig() const { return m_amplifyMetaConfig; }
    template<typename AmplifyMetaConfigT = Aws::String>
    void SetAmplifyMetaConfig(AmplifyMetaConfigT&& value) { m_amplifyMetaConfigHasBeenSet = true; m_amplifyMetaConfig = std::forward<AmplifyMetaConfigT>(value); }
    template<typename AmplifyMetaConfigT = Aws::String>
    GetBackendResult& WithAmplifyMetaConfig(AmplifyMetaConfigT&& value) { SetAmplifyMetaConfig(std::forward<AmplifyMetaConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    GetBackendResult& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetAppName() const { return m_appName; }
    template<typename AppNameT = Aws::String>
    void SetAppName(AppNameT&& value) { m_appNameHasBeenSet = true; m_appName = std::forward<AppNameT>(value); }
    template<typename AppNameT = Aws::String>
    GetBackendResult& WithAppName(AppNameT&& value) { SetAppName(std::forward<AppNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of backend environments in an array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBackendEnvironmentList() const { return m_backendEnvironmentList; }
    template<typename BackendEnvironmentListT = Aws::Vector<Aws::String>>
    void SetBackendEnvironmentList(BackendEnvironmentListT&& value) { m_backendEnvironmentListHasBeenSet = true; m_backendEnvironmentList = std::forward<BackendEnvironmentListT>(value); }
    template<typename BackendEnvironmentListT = Aws::Vector<Aws::String>>
    GetBackendResult& WithBackendEnvironmentList(BackendEnvironmentListT&& value) { SetBackendEnvironmentList(std::forward<BackendEnvironmentListT>(value)); return *this;}
    template<typename BackendEnvironmentListT = Aws::String>
    GetBackendResult& AddBackendEnvironmentList(BackendEnvironmentListT&& value) { m_backendEnvironmentListHasBeenSet = true; m_backendEnvironmentList.emplace_back(std::forward<BackendEnvironmentListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the backend environment.</p>
     */
    inline const Aws::String& GetBackendEnvironmentName() const { return m_backendEnvironmentName; }
    template<typename BackendEnvironmentNameT = Aws::String>
    void SetBackendEnvironmentName(BackendEnvironmentNameT&& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = std::forward<BackendEnvironmentNameT>(value); }
    template<typename BackendEnvironmentNameT = Aws::String>
    GetBackendResult& WithBackendEnvironmentName(BackendEnvironmentNameT&& value) { SetBackendEnvironmentName(std::forward<BackendEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    GetBackendResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBackendResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amplifyFeatureFlags;
    bool m_amplifyFeatureFlagsHasBeenSet = false;

    Aws::String m_amplifyMetaConfig;
    bool m_amplifyMetaConfigHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_appName;
    bool m_appNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_backendEnvironmentList;
    bool m_backendEnvironmentListHasBeenSet = false;

    Aws::String m_backendEnvironmentName;
    bool m_backendEnvironmentNameHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
