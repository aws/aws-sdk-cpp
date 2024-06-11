﻿/**
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
    AWS_IOTDATAPLANE_API ListRetainedMessagesResult();
    AWS_IOTDATAPLANE_API ListRetainedMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDATAPLANE_API ListRetainedMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary list the account's retained messages. The information returned
     * doesn't include the message payloads of the retained messages.</p>
     */
    inline const Aws::Vector<RetainedMessageSummary>& GetRetainedTopics() const{ return m_retainedTopics; }
    inline void SetRetainedTopics(const Aws::Vector<RetainedMessageSummary>& value) { m_retainedTopics = value; }
    inline void SetRetainedTopics(Aws::Vector<RetainedMessageSummary>&& value) { m_retainedTopics = std::move(value); }
    inline ListRetainedMessagesResult& WithRetainedTopics(const Aws::Vector<RetainedMessageSummary>& value) { SetRetainedTopics(value); return *this;}
    inline ListRetainedMessagesResult& WithRetainedTopics(Aws::Vector<RetainedMessageSummary>&& value) { SetRetainedTopics(std::move(value)); return *this;}
    inline ListRetainedMessagesResult& AddRetainedTopics(const RetainedMessageSummary& value) { m_retainedTopics.push_back(value); return *this; }
    inline ListRetainedMessagesResult& AddRetainedTopics(RetainedMessageSummary&& value) { m_retainedTopics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRetainedMessagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRetainedMessagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRetainedMessagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRetainedMessagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRetainedMessagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRetainedMessagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RetainedMessageSummary> m_retainedTopics;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
