/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/OtaTaskExecutionSummaries.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class ListOtaTaskExecutionsResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListOtaTaskExecutionsResult();
    AWS_IOTMANAGEDINTEGRATIONS_API ListOtaTaskExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListOtaTaskExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all of the over-the-air (OTA) task executions.</p>
     */
    inline const Aws::Vector<OtaTaskExecutionSummaries>& GetExecutionSummaries() const{ return m_executionSummaries; }
    inline void SetExecutionSummaries(const Aws::Vector<OtaTaskExecutionSummaries>& value) { m_executionSummaries = value; }
    inline void SetExecutionSummaries(Aws::Vector<OtaTaskExecutionSummaries>&& value) { m_executionSummaries = std::move(value); }
    inline ListOtaTaskExecutionsResult& WithExecutionSummaries(const Aws::Vector<OtaTaskExecutionSummaries>& value) { SetExecutionSummaries(value); return *this;}
    inline ListOtaTaskExecutionsResult& WithExecutionSummaries(Aws::Vector<OtaTaskExecutionSummaries>&& value) { SetExecutionSummaries(std::move(value)); return *this;}
    inline ListOtaTaskExecutionsResult& AddExecutionSummaries(const OtaTaskExecutionSummaries& value) { m_executionSummaries.push_back(value); return *this; }
    inline ListOtaTaskExecutionsResult& AddExecutionSummaries(OtaTaskExecutionSummaries&& value) { m_executionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOtaTaskExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOtaTaskExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOtaTaskExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOtaTaskExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOtaTaskExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOtaTaskExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<OtaTaskExecutionSummaries> m_executionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
