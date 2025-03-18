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
    AWS_IOTMANAGEDINTEGRATIONS_API ListOtaTaskExecutionsResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ListOtaTaskExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListOtaTaskExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all of the over-the-air (OTA) task executions.</p>
     */
    inline const Aws::Vector<OtaTaskExecutionSummaries>& GetExecutionSummaries() const { return m_executionSummaries; }
    template<typename ExecutionSummariesT = Aws::Vector<OtaTaskExecutionSummaries>>
    void SetExecutionSummaries(ExecutionSummariesT&& value) { m_executionSummariesHasBeenSet = true; m_executionSummaries = std::forward<ExecutionSummariesT>(value); }
    template<typename ExecutionSummariesT = Aws::Vector<OtaTaskExecutionSummaries>>
    ListOtaTaskExecutionsResult& WithExecutionSummaries(ExecutionSummariesT&& value) { SetExecutionSummaries(std::forward<ExecutionSummariesT>(value)); return *this;}
    template<typename ExecutionSummariesT = OtaTaskExecutionSummaries>
    ListOtaTaskExecutionsResult& AddExecutionSummaries(ExecutionSummariesT&& value) { m_executionSummariesHasBeenSet = true; m_executionSummaries.emplace_back(std::forward<ExecutionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOtaTaskExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOtaTaskExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OtaTaskExecutionSummaries> m_executionSummaries;
    bool m_executionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
