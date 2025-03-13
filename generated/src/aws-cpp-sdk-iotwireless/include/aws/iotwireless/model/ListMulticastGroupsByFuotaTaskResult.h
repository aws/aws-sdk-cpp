/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/MulticastGroupByFuotaTask.h>
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
  class ListMulticastGroupsByFuotaTaskResult
  {
  public:
    AWS_IOTWIRELESS_API ListMulticastGroupsByFuotaTaskResult() = default;
    AWS_IOTWIRELESS_API ListMulticastGroupsByFuotaTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListMulticastGroupsByFuotaTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListMulticastGroupsByFuotaTaskResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<MulticastGroupByFuotaTask>& GetMulticastGroupList() const { return m_multicastGroupList; }
    template<typename MulticastGroupListT = Aws::Vector<MulticastGroupByFuotaTask>>
    void SetMulticastGroupList(MulticastGroupListT&& value) { m_multicastGroupListHasBeenSet = true; m_multicastGroupList = std::forward<MulticastGroupListT>(value); }
    template<typename MulticastGroupListT = Aws::Vector<MulticastGroupByFuotaTask>>
    ListMulticastGroupsByFuotaTaskResult& WithMulticastGroupList(MulticastGroupListT&& value) { SetMulticastGroupList(std::forward<MulticastGroupListT>(value)); return *this;}
    template<typename MulticastGroupListT = MulticastGroupByFuotaTask>
    ListMulticastGroupsByFuotaTaskResult& AddMulticastGroupList(MulticastGroupListT&& value) { m_multicastGroupListHasBeenSet = true; m_multicastGroupList.emplace_back(std::forward<MulticastGroupListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMulticastGroupsByFuotaTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MulticastGroupByFuotaTask> m_multicastGroupList;
    bool m_multicastGroupListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
