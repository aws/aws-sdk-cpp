/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/DownlinkQueueMessage.h>
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
  class ListQueuedMessagesResult
  {
  public:
    AWS_IOTWIRELESS_API ListQueuedMessagesResult() = default;
    AWS_IOTWIRELESS_API ListQueuedMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListQueuedMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListQueuedMessagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The messages in the downlink queue.</p>
     */
    inline const Aws::Vector<DownlinkQueueMessage>& GetDownlinkQueueMessagesList() const { return m_downlinkQueueMessagesList; }
    template<typename DownlinkQueueMessagesListT = Aws::Vector<DownlinkQueueMessage>>
    void SetDownlinkQueueMessagesList(DownlinkQueueMessagesListT&& value) { m_downlinkQueueMessagesListHasBeenSet = true; m_downlinkQueueMessagesList = std::forward<DownlinkQueueMessagesListT>(value); }
    template<typename DownlinkQueueMessagesListT = Aws::Vector<DownlinkQueueMessage>>
    ListQueuedMessagesResult& WithDownlinkQueueMessagesList(DownlinkQueueMessagesListT&& value) { SetDownlinkQueueMessagesList(std::forward<DownlinkQueueMessagesListT>(value)); return *this;}
    template<typename DownlinkQueueMessagesListT = DownlinkQueueMessage>
    ListQueuedMessagesResult& AddDownlinkQueueMessagesList(DownlinkQueueMessagesListT&& value) { m_downlinkQueueMessagesListHasBeenSet = true; m_downlinkQueueMessagesList.emplace_back(std::forward<DownlinkQueueMessagesListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQueuedMessagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DownlinkQueueMessage> m_downlinkQueueMessagesList;
    bool m_downlinkQueueMessagesListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
