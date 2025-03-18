/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/FuotaTask.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListFuotaTasksResult
  {
  public:
    AWS_IOTWIRELESS_API ListFuotaTasksResult() = default;
    AWS_IOTWIRELESS_API ListFuotaTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListFuotaTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFuotaTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<FuotaTask>& GetFuotaTaskList() const { return m_fuotaTaskList; }
    template<typename FuotaTaskListT = Aws::Vector<FuotaTask>>
    void SetFuotaTaskList(FuotaTaskListT&& value) { m_fuotaTaskListHasBeenSet = true; m_fuotaTaskList = std::forward<FuotaTaskListT>(value); }
    template<typename FuotaTaskListT = Aws::Vector<FuotaTask>>
    ListFuotaTasksResult& WithFuotaTaskList(FuotaTaskListT&& value) { SetFuotaTaskList(std::forward<FuotaTaskListT>(value)); return *this;}
    template<typename FuotaTaskListT = FuotaTask>
    ListFuotaTasksResult& AddFuotaTaskList(FuotaTaskListT&& value) { m_fuotaTaskListHasBeenSet = true; m_fuotaTaskList.emplace_back(std::forward<FuotaTaskListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFuotaTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<FuotaTask> m_fuotaTaskList;
    bool m_fuotaTaskListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
