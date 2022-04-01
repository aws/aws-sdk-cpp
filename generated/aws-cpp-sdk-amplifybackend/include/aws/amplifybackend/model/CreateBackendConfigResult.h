﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
namespace AmplifyBackend
{
namespace Model
{
  class AWS_AMPLIFYBACKEND_API CreateBackendConfigResult
  {
  public:
    CreateBackendConfigResult();
    CreateBackendConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBackendConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateBackendConfigResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline CreateBackendConfigResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline CreateBackendConfigResult& WithAppId(const char* value) { SetAppId(value); return *this;}


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
    inline CreateBackendConfigResult& WithBackendEnvironmentName(const Aws::String& value) { SetBackendEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline CreateBackendConfigResult& WithBackendEnvironmentName(Aws::String&& value) { SetBackendEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline CreateBackendConfigResult& WithBackendEnvironmentName(const char* value) { SetBackendEnvironmentName(value); return *this;}


    /**
     * <p>The ID for the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The ID for the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The ID for the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The ID for the job.</p>
     */
    inline CreateBackendConfigResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for the job.</p>
     */
    inline CreateBackendConfigResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for the job.</p>
     */
    inline CreateBackendConfigResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The current status of the request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The current status of the request.</p>
     */
    inline CreateBackendConfigResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the request.</p>
     */
    inline CreateBackendConfigResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the request.</p>
     */
    inline CreateBackendConfigResult& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_appId;

    Aws::String m_backendEnvironmentName;

    Aws::String m_jobId;

    Aws::String m_status;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
