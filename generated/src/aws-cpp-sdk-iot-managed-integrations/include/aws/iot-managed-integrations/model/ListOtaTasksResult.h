/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/OtaTaskSummary.h>
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
  class ListOtaTasksResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListOtaTasksResult();
    AWS_IOTMANAGEDINTEGRATIONS_API ListOtaTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListOtaTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all of the over-the-air (OTA) tasks.</p>
     */
    inline const Aws::Vector<OtaTaskSummary>& GetTasks() const{ return m_tasks; }
    inline void SetTasks(const Aws::Vector<OtaTaskSummary>& value) { m_tasks = value; }
    inline void SetTasks(Aws::Vector<OtaTaskSummary>&& value) { m_tasks = std::move(value); }
    inline ListOtaTasksResult& WithTasks(const Aws::Vector<OtaTaskSummary>& value) { SetTasks(value); return *this;}
    inline ListOtaTasksResult& WithTasks(Aws::Vector<OtaTaskSummary>&& value) { SetTasks(std::move(value)); return *this;}
    inline ListOtaTasksResult& AddTasks(const OtaTaskSummary& value) { m_tasks.push_back(value); return *this; }
    inline ListOtaTasksResult& AddTasks(OtaTaskSummary&& value) { m_tasks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOtaTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOtaTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOtaTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOtaTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOtaTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOtaTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<OtaTaskSummary> m_tasks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
