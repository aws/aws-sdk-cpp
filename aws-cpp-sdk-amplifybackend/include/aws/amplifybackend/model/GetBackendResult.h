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
    AWS_AMPLIFYBACKEND_API GetBackendResult();
    AWS_AMPLIFYBACKEND_API GetBackendResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API GetBackendResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A stringified version of the cli.json file for your Amplify project.</p>
     */
    inline const Aws::String& GetAmplifyFeatureFlags() const{ return m_amplifyFeatureFlags; }

    /**
     * <p>A stringified version of the cli.json file for your Amplify project.</p>
     */
    inline void SetAmplifyFeatureFlags(const Aws::String& value) { m_amplifyFeatureFlags = value; }

    /**
     * <p>A stringified version of the cli.json file for your Amplify project.</p>
     */
    inline void SetAmplifyFeatureFlags(Aws::String&& value) { m_amplifyFeatureFlags = std::move(value); }

    /**
     * <p>A stringified version of the cli.json file for your Amplify project.</p>
     */
    inline void SetAmplifyFeatureFlags(const char* value) { m_amplifyFeatureFlags.assign(value); }

    /**
     * <p>A stringified version of the cli.json file for your Amplify project.</p>
     */
    inline GetBackendResult& WithAmplifyFeatureFlags(const Aws::String& value) { SetAmplifyFeatureFlags(value); return *this;}

    /**
     * <p>A stringified version of the cli.json file for your Amplify project.</p>
     */
    inline GetBackendResult& WithAmplifyFeatureFlags(Aws::String&& value) { SetAmplifyFeatureFlags(std::move(value)); return *this;}

    /**
     * <p>A stringified version of the cli.json file for your Amplify project.</p>
     */
    inline GetBackendResult& WithAmplifyFeatureFlags(const char* value) { SetAmplifyFeatureFlags(value); return *this;}


    /**
     * <p>A stringified version of the current configs for your Amplify project.</p>
     */
    inline const Aws::String& GetAmplifyMetaConfig() const{ return m_amplifyMetaConfig; }

    /**
     * <p>A stringified version of the current configs for your Amplify project.</p>
     */
    inline void SetAmplifyMetaConfig(const Aws::String& value) { m_amplifyMetaConfig = value; }

    /**
     * <p>A stringified version of the current configs for your Amplify project.</p>
     */
    inline void SetAmplifyMetaConfig(Aws::String&& value) { m_amplifyMetaConfig = std::move(value); }

    /**
     * <p>A stringified version of the current configs for your Amplify project.</p>
     */
    inline void SetAmplifyMetaConfig(const char* value) { m_amplifyMetaConfig.assign(value); }

    /**
     * <p>A stringified version of the current configs for your Amplify project.</p>
     */
    inline GetBackendResult& WithAmplifyMetaConfig(const Aws::String& value) { SetAmplifyMetaConfig(value); return *this;}

    /**
     * <p>A stringified version of the current configs for your Amplify project.</p>
     */
    inline GetBackendResult& WithAmplifyMetaConfig(Aws::String&& value) { SetAmplifyMetaConfig(std::move(value)); return *this;}

    /**
     * <p>A stringified version of the current configs for your Amplify project.</p>
     */
    inline GetBackendResult& WithAmplifyMetaConfig(const char* value) { SetAmplifyMetaConfig(value); return *this;}


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
    inline GetBackendResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline GetBackendResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline GetBackendResult& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetAppName() const{ return m_appName; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetAppName(const Aws::String& value) { m_appName = value; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetAppName(Aws::String&& value) { m_appName = std::move(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetAppName(const char* value) { m_appName.assign(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline GetBackendResult& WithAppName(const Aws::String& value) { SetAppName(value); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline GetBackendResult& WithAppName(Aws::String&& value) { SetAppName(std::move(value)); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline GetBackendResult& WithAppName(const char* value) { SetAppName(value); return *this;}


    /**
     * <p>A list of backend environments in an array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBackendEnvironmentList() const{ return m_backendEnvironmentList; }

    /**
     * <p>A list of backend environments in an array.</p>
     */
    inline void SetBackendEnvironmentList(const Aws::Vector<Aws::String>& value) { m_backendEnvironmentList = value; }

    /**
     * <p>A list of backend environments in an array.</p>
     */
    inline void SetBackendEnvironmentList(Aws::Vector<Aws::String>&& value) { m_backendEnvironmentList = std::move(value); }

    /**
     * <p>A list of backend environments in an array.</p>
     */
    inline GetBackendResult& WithBackendEnvironmentList(const Aws::Vector<Aws::String>& value) { SetBackendEnvironmentList(value); return *this;}

    /**
     * <p>A list of backend environments in an array.</p>
     */
    inline GetBackendResult& WithBackendEnvironmentList(Aws::Vector<Aws::String>&& value) { SetBackendEnvironmentList(std::move(value)); return *this;}

    /**
     * <p>A list of backend environments in an array.</p>
     */
    inline GetBackendResult& AddBackendEnvironmentList(const Aws::String& value) { m_backendEnvironmentList.push_back(value); return *this; }

    /**
     * <p>A list of backend environments in an array.</p>
     */
    inline GetBackendResult& AddBackendEnvironmentList(Aws::String&& value) { m_backendEnvironmentList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of backend environments in an array.</p>
     */
    inline GetBackendResult& AddBackendEnvironmentList(const char* value) { m_backendEnvironmentList.push_back(value); return *this; }


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
    inline GetBackendResult& WithBackendEnvironmentName(const Aws::String& value) { SetBackendEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline GetBackendResult& WithBackendEnvironmentName(Aws::String&& value) { SetBackendEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline GetBackendResult& WithBackendEnvironmentName(const char* value) { SetBackendEnvironmentName(value); return *this;}


    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline void SetError(const Aws::String& value) { m_error = value; }

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline void SetError(const char* value) { m_error.assign(value); }

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline GetBackendResult& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline GetBackendResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline GetBackendResult& WithError(const char* value) { SetError(value); return *this;}

  private:

    Aws::String m_amplifyFeatureFlags;

    Aws::String m_amplifyMetaConfig;

    Aws::String m_appId;

    Aws::String m_appName;

    Aws::Vector<Aws::String> m_backendEnvironmentList;

    Aws::String m_backendEnvironmentName;

    Aws::String m_error;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
