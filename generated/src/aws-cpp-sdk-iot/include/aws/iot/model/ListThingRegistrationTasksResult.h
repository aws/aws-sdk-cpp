/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class ListThingRegistrationTasksResult
  {
  public:
    AWS_IOT_API ListThingRegistrationTasksResult() = default;
    AWS_IOT_API ListThingRegistrationTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingRegistrationTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of bulk thing provisioning task IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskIds() const { return m_taskIds; }
    template<typename TaskIdsT = Aws::Vector<Aws::String>>
    void SetTaskIds(TaskIdsT&& value) { m_taskIdsHasBeenSet = true; m_taskIds = std::forward<TaskIdsT>(value); }
    template<typename TaskIdsT = Aws::Vector<Aws::String>>
    ListThingRegistrationTasksResult& WithTaskIds(TaskIdsT&& value) { SetTaskIds(std::forward<TaskIdsT>(value)); return *this;}
    template<typename TaskIdsT = Aws::String>
    ListThingRegistrationTasksResult& AddTaskIds(TaskIdsT&& value) { m_taskIdsHasBeenSet = true; m_taskIds.emplace_back(std::forward<TaskIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThingRegistrationTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListThingRegistrationTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_taskIds;
    bool m_taskIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
