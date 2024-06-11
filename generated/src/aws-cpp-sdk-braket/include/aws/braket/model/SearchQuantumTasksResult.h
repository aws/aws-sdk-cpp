/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BRAKET_API SearchQuantumTasksResult();
    AWS_BRAKET_API SearchQuantumTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API SearchQuantumTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token used for pagination of results, or null if there are no additional
     * results. Use the token value in a subsequent request to continue results where
     * the previous request ended.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchQuantumTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchQuantumTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchQuantumTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>QuantumTaskSummary</code> objects for tasks that match the
     * specified filters.</p>
     */
    inline const Aws::Vector<QuantumTaskSummary>& GetQuantumTasks() const{ return m_quantumTasks; }
    inline void SetQuantumTasks(const Aws::Vector<QuantumTaskSummary>& value) { m_quantumTasks = value; }
    inline void SetQuantumTasks(Aws::Vector<QuantumTaskSummary>&& value) { m_quantumTasks = std::move(value); }
    inline SearchQuantumTasksResult& WithQuantumTasks(const Aws::Vector<QuantumTaskSummary>& value) { SetQuantumTasks(value); return *this;}
    inline SearchQuantumTasksResult& WithQuantumTasks(Aws::Vector<QuantumTaskSummary>&& value) { SetQuantumTasks(std::move(value)); return *this;}
    inline SearchQuantumTasksResult& AddQuantumTasks(const QuantumTaskSummary& value) { m_quantumTasks.push_back(value); return *this; }
    inline SearchQuantumTasksResult& AddQuantumTasks(QuantumTaskSummary&& value) { m_quantumTasks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchQuantumTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchQuantumTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchQuantumTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<QuantumTaskSummary> m_quantumTasks;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
