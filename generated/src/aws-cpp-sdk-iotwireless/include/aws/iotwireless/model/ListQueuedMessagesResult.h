﻿/**
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
    AWS_IOTWIRELESS_API ListQueuedMessagesResult();
    AWS_IOTWIRELESS_API ListQueuedMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListQueuedMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListQueuedMessagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListQueuedMessagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListQueuedMessagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The messages in the downlink queue.</p>
     */
    inline const Aws::Vector<DownlinkQueueMessage>& GetDownlinkQueueMessagesList() const{ return m_downlinkQueueMessagesList; }
    inline void SetDownlinkQueueMessagesList(const Aws::Vector<DownlinkQueueMessage>& value) { m_downlinkQueueMessagesList = value; }
    inline void SetDownlinkQueueMessagesList(Aws::Vector<DownlinkQueueMessage>&& value) { m_downlinkQueueMessagesList = std::move(value); }
    inline ListQueuedMessagesResult& WithDownlinkQueueMessagesList(const Aws::Vector<DownlinkQueueMessage>& value) { SetDownlinkQueueMessagesList(value); return *this;}
    inline ListQueuedMessagesResult& WithDownlinkQueueMessagesList(Aws::Vector<DownlinkQueueMessage>&& value) { SetDownlinkQueueMessagesList(std::move(value)); return *this;}
    inline ListQueuedMessagesResult& AddDownlinkQueueMessagesList(const DownlinkQueueMessage& value) { m_downlinkQueueMessagesList.push_back(value); return *this; }
    inline ListQueuedMessagesResult& AddDownlinkQueueMessagesList(DownlinkQueueMessage&& value) { m_downlinkQueueMessagesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListQueuedMessagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListQueuedMessagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListQueuedMessagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<DownlinkQueueMessage> m_downlinkQueueMessagesList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
