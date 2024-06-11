/**
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
  class GetBackendJobResult
  {
  public:
    AWS_AMPLIFYBACKEND_API GetBackendJobResult();
    AWS_AMPLIFYBACKEND_API GetBackendJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API GetBackendJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline void SetAppId(const Aws::String& value) { m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appId.assign(value); }
    inline GetBackendJobResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline GetBackendJobResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline GetBackendJobResult& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backend environment.</p>
     */
    inline const Aws::String& GetBackendEnvironmentName() const{ return m_backendEnvironmentName; }
    inline void SetBackendEnvironmentName(const Aws::String& value) { m_backendEnvironmentName = value; }
    inline void SetBackendEnvironmentName(Aws::String&& value) { m_backendEnvironmentName = std::move(value); }
    inline void SetBackendEnvironmentName(const char* value) { m_backendEnvironmentName.assign(value); }
    inline GetBackendJobResult& WithBackendEnvironmentName(const Aws::String& value) { SetBackendEnvironmentName(value); return *this;}
    inline GetBackendJobResult& WithBackendEnvironmentName(Aws::String&& value) { SetBackendEnvironmentName(std::move(value)); return *this;}
    inline GetBackendJobResult& WithBackendEnvironmentName(const char* value) { SetBackendEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the job was created.</p>
     */
    inline const Aws::String& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::String& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::String&& value) { m_createTime = std::move(value); }
    inline void SetCreateTime(const char* value) { m_createTime.assign(value); }
    inline GetBackendJobResult& WithCreateTime(const Aws::String& value) { SetCreateTime(value); return *this;}
    inline GetBackendJobResult& WithCreateTime(Aws::String&& value) { SetCreateTime(std::move(value)); return *this;}
    inline GetBackendJobResult& WithCreateTime(const char* value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline void SetError(const Aws::String& value) { m_error = value; }
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }
    inline void SetError(const char* value) { m_error.assign(value); }
    inline GetBackendJobResult& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline GetBackendJobResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline GetBackendJobResult& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline GetBackendJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetBackendJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetBackendJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operation.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline void SetOperation(const Aws::String& value) { m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operation.assign(value); }
    inline GetBackendJobResult& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline GetBackendJobResult& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline GetBackendJobResult& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline GetBackendJobResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GetBackendJobResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GetBackendJobResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the job was last updated.</p>
     */
    inline const Aws::String& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::String& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::String&& value) { m_updateTime = std::move(value); }
    inline void SetUpdateTime(const char* value) { m_updateTime.assign(value); }
    inline GetBackendJobResult& WithUpdateTime(const Aws::String& value) { SetUpdateTime(value); return *this;}
    inline GetBackendJobResult& WithUpdateTime(Aws::String&& value) { SetUpdateTime(std::move(value)); return *this;}
    inline GetBackendJobResult& WithUpdateTime(const char* value) { SetUpdateTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBackendJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBackendJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBackendJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;

    Aws::String m_backendEnvironmentName;

    Aws::String m_createTime;

    Aws::String m_error;

    Aws::String m_jobId;

    Aws::String m_operation;

    Aws::String m_status;

    Aws::String m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
