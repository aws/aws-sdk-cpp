﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/StreamSummary.h>
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
  class ListStreamsResult
  {
  public:
    AWS_IOT_API ListStreamsResult();
    AWS_IOT_API ListStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of streams.</p>
     */
    inline const Aws::Vector<StreamSummary>& GetStreams() const{ return m_streams; }
    inline void SetStreams(const Aws::Vector<StreamSummary>& value) { m_streams = value; }
    inline void SetStreams(Aws::Vector<StreamSummary>&& value) { m_streams = std::move(value); }
    inline ListStreamsResult& WithStreams(const Aws::Vector<StreamSummary>& value) { SetStreams(value); return *this;}
    inline ListStreamsResult& WithStreams(Aws::Vector<StreamSummary>&& value) { SetStreams(std::move(value)); return *this;}
    inline ListStreamsResult& AddStreams(const StreamSummary& value) { m_streams.push_back(value); return *this; }
    inline ListStreamsResult& AddStreams(StreamSummary&& value) { m_streams.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStreamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStreamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStreamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStreamsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStreamsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStreamsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StreamSummary> m_streams;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
