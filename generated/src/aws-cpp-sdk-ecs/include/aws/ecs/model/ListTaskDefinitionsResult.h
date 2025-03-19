/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ECS
{
namespace Model
{
  class ListTaskDefinitionsResult
  {
  public:
    AWS_ECS_API ListTaskDefinitionsResult() = default;
    AWS_ECS_API ListTaskDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListTaskDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of task definition Amazon Resource Name (ARN) entries for the
     * <code>ListTaskDefinitions</code> request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskDefinitionArns() const { return m_taskDefinitionArns; }
    template<typename TaskDefinitionArnsT = Aws::Vector<Aws::String>>
    void SetTaskDefinitionArns(TaskDefinitionArnsT&& value) { m_taskDefinitionArnsHasBeenSet = true; m_taskDefinitionArns = std::forward<TaskDefinitionArnsT>(value); }
    template<typename TaskDefinitionArnsT = Aws::Vector<Aws::String>>
    ListTaskDefinitionsResult& WithTaskDefinitionArns(TaskDefinitionArnsT&& value) { SetTaskDefinitionArns(std::forward<TaskDefinitionArnsT>(value)); return *this;}
    template<typename TaskDefinitionArnsT = Aws::String>
    ListTaskDefinitionsResult& AddTaskDefinitionArns(TaskDefinitionArnsT&& value) { m_taskDefinitionArnsHasBeenSet = true; m_taskDefinitionArns.emplace_back(std::forward<TaskDefinitionArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitions</code> request. When the results of a
     * <code>ListTaskDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTaskDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTaskDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_taskDefinitionArns;
    bool m_taskDefinitionArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
