﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{
  class StartSuiteRunResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API StartSuiteRunResult();
    AWS_IOTDEVICEADVISOR_API StartSuiteRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API StartSuiteRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Suite Run ID of the started suite run.</p>
     */
    inline const Aws::String& GetSuiteRunId() const{ return m_suiteRunId; }
    inline void SetSuiteRunId(const Aws::String& value) { m_suiteRunId = value; }
    inline void SetSuiteRunId(Aws::String&& value) { m_suiteRunId = std::move(value); }
    inline void SetSuiteRunId(const char* value) { m_suiteRunId.assign(value); }
    inline StartSuiteRunResult& WithSuiteRunId(const Aws::String& value) { SetSuiteRunId(value); return *this;}
    inline StartSuiteRunResult& WithSuiteRunId(Aws::String&& value) { SetSuiteRunId(std::move(value)); return *this;}
    inline StartSuiteRunResult& WithSuiteRunId(const char* value) { SetSuiteRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the started suite run.</p>
     */
    inline const Aws::String& GetSuiteRunArn() const{ return m_suiteRunArn; }
    inline void SetSuiteRunArn(const Aws::String& value) { m_suiteRunArn = value; }
    inline void SetSuiteRunArn(Aws::String&& value) { m_suiteRunArn = std::move(value); }
    inline void SetSuiteRunArn(const char* value) { m_suiteRunArn.assign(value); }
    inline StartSuiteRunResult& WithSuiteRunArn(const Aws::String& value) { SetSuiteRunArn(value); return *this;}
    inline StartSuiteRunResult& WithSuiteRunArn(Aws::String&& value) { SetSuiteRunArn(std::move(value)); return *this;}
    inline StartSuiteRunResult& WithSuiteRunArn(const char* value) { SetSuiteRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Starts a Device Advisor test suite run based on suite create time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline StartSuiteRunResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline StartSuiteRunResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response of an Device Advisor test endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }
    inline StartSuiteRunResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline StartSuiteRunResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline StartSuiteRunResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSuiteRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSuiteRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSuiteRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_suiteRunId;

    Aws::String m_suiteRunArn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_endpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
