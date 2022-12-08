/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/BehaviorModelTrainingSummary.h>
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
  class GetBehaviorModelTrainingSummariesResult
  {
  public:
    AWS_IOT_API GetBehaviorModelTrainingSummariesResult();
    AWS_IOT_API GetBehaviorModelTrainingSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetBehaviorModelTrainingSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of all ML Detect behaviors and their model status for a given
     * Security Profile. </p>
     */
    inline const Aws::Vector<BehaviorModelTrainingSummary>& GetSummaries() const{ return m_summaries; }

    /**
     * <p> A list of all ML Detect behaviors and their model status for a given
     * Security Profile. </p>
     */
    inline void SetSummaries(const Aws::Vector<BehaviorModelTrainingSummary>& value) { m_summaries = value; }

    /**
     * <p> A list of all ML Detect behaviors and their model status for a given
     * Security Profile. </p>
     */
    inline void SetSummaries(Aws::Vector<BehaviorModelTrainingSummary>&& value) { m_summaries = std::move(value); }

    /**
     * <p> A list of all ML Detect behaviors and their model status for a given
     * Security Profile. </p>
     */
    inline GetBehaviorModelTrainingSummariesResult& WithSummaries(const Aws::Vector<BehaviorModelTrainingSummary>& value) { SetSummaries(value); return *this;}

    /**
     * <p> A list of all ML Detect behaviors and their model status for a given
     * Security Profile. </p>
     */
    inline GetBehaviorModelTrainingSummariesResult& WithSummaries(Aws::Vector<BehaviorModelTrainingSummary>&& value) { SetSummaries(std::move(value)); return *this;}

    /**
     * <p> A list of all ML Detect behaviors and their model status for a given
     * Security Profile. </p>
     */
    inline GetBehaviorModelTrainingSummariesResult& AddSummaries(const BehaviorModelTrainingSummary& value) { m_summaries.push_back(value); return *this; }

    /**
     * <p> A list of all ML Detect behaviors and their model status for a given
     * Security Profile. </p>
     */
    inline GetBehaviorModelTrainingSummariesResult& AddSummaries(BehaviorModelTrainingSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }


    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline GetBehaviorModelTrainingSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline GetBehaviorModelTrainingSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline GetBehaviorModelTrainingSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BehaviorModelTrainingSummary> m_summaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
