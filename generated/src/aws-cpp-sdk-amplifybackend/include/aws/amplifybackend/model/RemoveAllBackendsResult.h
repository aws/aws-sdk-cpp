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
  class RemoveAllBackendsResult
  {
  public:
    AWS_AMPLIFYBACKEND_API RemoveAllBackendsResult();
    AWS_AMPLIFYBACKEND_API RemoveAllBackendsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API RemoveAllBackendsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline void SetAppId(const Aws::String& value) { m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appId.assign(value); }
    inline RemoveAllBackendsResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline RemoveAllBackendsResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline RemoveAllBackendsResult& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline void SetError(const Aws::String& value) { m_error = value; }
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }
    inline void SetError(const char* value) { m_error.assign(value); }
    inline RemoveAllBackendsResult& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline RemoveAllBackendsResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline RemoveAllBackendsResult& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline RemoveAllBackendsResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline RemoveAllBackendsResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline RemoveAllBackendsResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operation.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline void SetOperation(const Aws::String& value) { m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operation.assign(value); }
    inline RemoveAllBackendsResult& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline RemoveAllBackendsResult& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline RemoveAllBackendsResult& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline RemoveAllBackendsResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline RemoveAllBackendsResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline RemoveAllBackendsResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RemoveAllBackendsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RemoveAllBackendsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RemoveAllBackendsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;

    Aws::String m_error;

    Aws::String m_jobId;

    Aws::String m_operation;

    Aws::String m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
