/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TaskTemplateMetadata.h>
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
namespace Connect
{
namespace Model
{
  class ListTaskTemplatesResult
  {
  public:
    AWS_CONNECT_API ListTaskTemplatesResult() = default;
    AWS_CONNECT_API ListTaskTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListTaskTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides details about a list of task templates belonging to an instance.</p>
     */
    inline const Aws::Vector<TaskTemplateMetadata>& GetTaskTemplates() const { return m_taskTemplates; }
    template<typename TaskTemplatesT = Aws::Vector<TaskTemplateMetadata>>
    void SetTaskTemplates(TaskTemplatesT&& value) { m_taskTemplatesHasBeenSet = true; m_taskTemplates = std::forward<TaskTemplatesT>(value); }
    template<typename TaskTemplatesT = Aws::Vector<TaskTemplateMetadata>>
    ListTaskTemplatesResult& WithTaskTemplates(TaskTemplatesT&& value) { SetTaskTemplates(std::forward<TaskTemplatesT>(value)); return *this;}
    template<typename TaskTemplatesT = TaskTemplateMetadata>
    ListTaskTemplatesResult& AddTaskTemplates(TaskTemplatesT&& value) { m_taskTemplatesHasBeenSet = true; m_taskTemplates.emplace_back(std::forward<TaskTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as a null in the
     * response.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTaskTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTaskTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TaskTemplateMetadata> m_taskTemplates;
    bool m_taskTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
