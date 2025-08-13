/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/QuantumTaskSummary.h>
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
namespace Braket
{
namespace Model
{
  class SearchQuantumTasksResult
  {
  public:
    AWS_BRAKET_API SearchQuantumTasksResult() = default;
    AWS_BRAKET_API SearchQuantumTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API SearchQuantumTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>QuantumTaskSummary</code> objects for quantum tasks that
     * match the specified filters.</p>
     */
    inline const Aws::Vector<QuantumTaskSummary>& GetQuantumTasks() const { return m_quantumTasks; }
    template<typename QuantumTasksT = Aws::Vector<QuantumTaskSummary>>
    void SetQuantumTasks(QuantumTasksT&& value) { m_quantumTasksHasBeenSet = true; m_quantumTasks = std::forward<QuantumTasksT>(value); }
    template<typename QuantumTasksT = Aws::Vector<QuantumTaskSummary>>
    SearchQuantumTasksResult& WithQuantumTasks(QuantumTasksT&& value) { SetQuantumTasks(std::forward<QuantumTasksT>(value)); return *this;}
    template<typename QuantumTasksT = QuantumTaskSummary>
    SearchQuantumTasksResult& AddQuantumTasks(QuantumTasksT&& value) { m_quantumTasksHasBeenSet = true; m_quantumTasks.emplace_back(std::forward<QuantumTasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results, or null if there are no additional
     * results. Use the token value in a subsequent request to continue search where
     * the previous request ended.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchQuantumTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchQuantumTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QuantumTaskSummary> m_quantumTasks;
    bool m_quantumTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
