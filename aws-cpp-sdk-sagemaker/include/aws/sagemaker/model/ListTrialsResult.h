/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListTrialsResult
  {
  public:
    AWS_SAGEMAKER_API ListTrialsResult();
    AWS_SAGEMAKER_API ListTrialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListTrialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the summaries of your trials.</p>
     */
    inline const Aws::Vector<TrialSummary>& GetTrialSummaries() const{ return m_trialSummaries; }

    /**
     * <p>A list of the summaries of your trials.</p>
     */
    inline void SetTrialSummaries(const Aws::Vector<TrialSummary>& value) { m_trialSummaries = value; }

    /**
     * <p>A list of the summaries of your trials.</p>
     */
    inline void SetTrialSummaries(Aws::Vector<TrialSummary>&& value) { m_trialSummaries = std::move(value); }

    /**
     * <p>A list of the summaries of your trials.</p>
     */
    inline ListTrialsResult& WithTrialSummaries(const Aws::Vector<TrialSummary>& value) { SetTrialSummaries(value); return *this;}

    /**
     * <p>A list of the summaries of your trials.</p>
     */
    inline ListTrialsResult& WithTrialSummaries(Aws::Vector<TrialSummary>&& value) { SetTrialSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of the summaries of your trials.</p>
     */
    inline ListTrialsResult& AddTrialSummaries(const TrialSummary& value) { m_trialSummaries.push_back(value); return *this; }

    /**
     * <p>A list of the summaries of your trials.</p>
     */
    inline ListTrialsResult& AddTrialSummaries(TrialSummary&& value) { m_trialSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of trials, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of trials, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of trials, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of trials, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of trials, if there are any.</p>
     */
    inline ListTrialsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of trials, if there are any.</p>
     */
    inline ListTrialsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of trials, if there are any.</p>
     */
    inline ListTrialsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TrialSummary> m_trialSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
