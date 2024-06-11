﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/EventPredictionSummary.h>
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
namespace FraudDetector
{
namespace Model
{
  class ListEventPredictionsResult
  {
  public:
    AWS_FRAUDDETECTOR_API ListEventPredictionsResult();
    AWS_FRAUDDETECTOR_API ListEventPredictionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API ListEventPredictionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The summary of the past predictions. </p>
     */
    inline const Aws::Vector<EventPredictionSummary>& GetEventPredictionSummaries() const{ return m_eventPredictionSummaries; }
    inline void SetEventPredictionSummaries(const Aws::Vector<EventPredictionSummary>& value) { m_eventPredictionSummaries = value; }
    inline void SetEventPredictionSummaries(Aws::Vector<EventPredictionSummary>&& value) { m_eventPredictionSummaries = std::move(value); }
    inline ListEventPredictionsResult& WithEventPredictionSummaries(const Aws::Vector<EventPredictionSummary>& value) { SetEventPredictionSummaries(value); return *this;}
    inline ListEventPredictionsResult& WithEventPredictionSummaries(Aws::Vector<EventPredictionSummary>&& value) { SetEventPredictionSummaries(std::move(value)); return *this;}
    inline ListEventPredictionsResult& AddEventPredictionSummaries(const EventPredictionSummary& value) { m_eventPredictionSummaries.push_back(value); return *this; }
    inline ListEventPredictionsResult& AddEventPredictionSummaries(EventPredictionSummary&& value) { m_eventPredictionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Identifies the next page of results to return. Use the token to make the
     * call again to retrieve the next page. Keep all other arguments unchanged. Each
     * pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventPredictionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventPredictionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventPredictionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventPredictionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventPredictionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventPredictionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventPredictionSummary> m_eventPredictionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
