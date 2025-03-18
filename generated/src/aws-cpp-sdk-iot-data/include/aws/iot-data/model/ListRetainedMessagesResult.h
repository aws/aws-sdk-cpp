/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-data/model/RetainedMessageSummary.h>
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
namespace IoTDataPlane
{
namespace Model
{
  class ListRetainedMessagesResult
  {
  public:
    AWS_IOTDATAPLANE_API ListRetainedMessagesResult() = default;
    AWS_IOTDATAPLANE_API ListRetainedMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDATAPLANE_API ListRetainedMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary list the account's retained messages. The information returned
     * doesn't include the message payloads of the retained messages.</p>
     */
    inline const Aws::Vector<RetainedMessageSummary>& GetRetainedTopics() const { return m_retainedTopics; }
    template<typename RetainedTopicsT = Aws::Vector<RetainedMessageSummary>>
    void SetRetainedTopics(RetainedTopicsT&& value) { m_retainedTopicsHasBeenSet = true; m_retainedTopics = std::forward<RetainedTopicsT>(value); }
    template<typename RetainedTopicsT = Aws::Vector<RetainedMessageSummary>>
    ListRetainedMessagesResult& WithRetainedTopics(RetainedTopicsT&& value) { SetRetainedTopics(std::forward<RetainedTopicsT>(value)); return *this;}
    template<typename RetainedTopicsT = RetainedMessageSummary>
    ListRetainedMessagesResult& AddRetainedTopics(RetainedTopicsT&& value) { m_retainedTopicsHasBeenSet = true; m_retainedTopics.emplace_back(std::forward<RetainedTopicsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRetainedMessagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRetainedMessagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RetainedMessageSummary> m_retainedTopics;
    bool m_retainedTopicsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
