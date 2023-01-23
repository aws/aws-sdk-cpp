/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/InferenceEventSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListInferenceEventsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceEventsResult();
    AWS_LOOKOUTEQUIPMENT_API ListInferenceEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListInferenceEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline ListInferenceEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline ListInferenceEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline ListInferenceEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Provides an array of information about the individual inference events
     * returned from the <code>ListInferenceEvents</code> operation, including
     * scheduler used, event start time, event end time, diagnostics, and so on. </p>
     */
    inline const Aws::Vector<InferenceEventSummary>& GetInferenceEventSummaries() const{ return m_inferenceEventSummaries; }

    /**
     * <p>Provides an array of information about the individual inference events
     * returned from the <code>ListInferenceEvents</code> operation, including
     * scheduler used, event start time, event end time, diagnostics, and so on. </p>
     */
    inline void SetInferenceEventSummaries(const Aws::Vector<InferenceEventSummary>& value) { m_inferenceEventSummaries = value; }

    /**
     * <p>Provides an array of information about the individual inference events
     * returned from the <code>ListInferenceEvents</code> operation, including
     * scheduler used, event start time, event end time, diagnostics, and so on. </p>
     */
    inline void SetInferenceEventSummaries(Aws::Vector<InferenceEventSummary>&& value) { m_inferenceEventSummaries = std::move(value); }

    /**
     * <p>Provides an array of information about the individual inference events
     * returned from the <code>ListInferenceEvents</code> operation, including
     * scheduler used, event start time, event end time, diagnostics, and so on. </p>
     */
    inline ListInferenceEventsResult& WithInferenceEventSummaries(const Aws::Vector<InferenceEventSummary>& value) { SetInferenceEventSummaries(value); return *this;}

    /**
     * <p>Provides an array of information about the individual inference events
     * returned from the <code>ListInferenceEvents</code> operation, including
     * scheduler used, event start time, event end time, diagnostics, and so on. </p>
     */
    inline ListInferenceEventsResult& WithInferenceEventSummaries(Aws::Vector<InferenceEventSummary>&& value) { SetInferenceEventSummaries(std::move(value)); return *this;}

    /**
     * <p>Provides an array of information about the individual inference events
     * returned from the <code>ListInferenceEvents</code> operation, including
     * scheduler used, event start time, event end time, diagnostics, and so on. </p>
     */
    inline ListInferenceEventsResult& AddInferenceEventSummaries(const InferenceEventSummary& value) { m_inferenceEventSummaries.push_back(value); return *this; }

    /**
     * <p>Provides an array of information about the individual inference events
     * returned from the <code>ListInferenceEvents</code> operation, including
     * scheduler used, event start time, event end time, diagnostics, and so on. </p>
     */
    inline ListInferenceEventsResult& AddInferenceEventSummaries(InferenceEventSummary&& value) { m_inferenceEventSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<InferenceEventSummary> m_inferenceEventSummaries;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
