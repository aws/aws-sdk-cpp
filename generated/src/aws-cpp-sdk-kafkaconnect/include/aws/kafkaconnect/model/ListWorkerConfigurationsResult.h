/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/model/WorkerConfigurationSummary.h>
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
namespace KafkaConnect
{
namespace Model
{
  class ListWorkerConfigurationsResult
  {
  public:
    AWS_KAFKACONNECT_API ListWorkerConfigurationsResult() = default;
    AWS_KAFKACONNECT_API ListWorkerConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API ListWorkerConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkerConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of worker configuration descriptions.</p>
     */
    inline const Aws::Vector<WorkerConfigurationSummary>& GetWorkerConfigurations() const { return m_workerConfigurations; }
    template<typename WorkerConfigurationsT = Aws::Vector<WorkerConfigurationSummary>>
    void SetWorkerConfigurations(WorkerConfigurationsT&& value) { m_workerConfigurationsHasBeenSet = true; m_workerConfigurations = std::forward<WorkerConfigurationsT>(value); }
    template<typename WorkerConfigurationsT = Aws::Vector<WorkerConfigurationSummary>>
    ListWorkerConfigurationsResult& WithWorkerConfigurations(WorkerConfigurationsT&& value) { SetWorkerConfigurations(std::forward<WorkerConfigurationsT>(value)); return *this;}
    template<typename WorkerConfigurationsT = WorkerConfigurationSummary>
    ListWorkerConfigurationsResult& AddWorkerConfigurations(WorkerConfigurationsT&& value) { m_workerConfigurationsHasBeenSet = true; m_workerConfigurations.emplace_back(std::forward<WorkerConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkerConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<WorkerConfigurationSummary> m_workerConfigurations;
    bool m_workerConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
