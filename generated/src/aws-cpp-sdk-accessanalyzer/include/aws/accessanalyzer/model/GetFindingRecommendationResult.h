/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/RecommendationError.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/RecommendationType.h>
#include <aws/accessanalyzer/model/Status.h>
#include <aws/accessanalyzer/model/RecommendedStep.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class GetFindingRecommendationResult
  {
  public:
    AWS_ACCESSANALYZER_API GetFindingRecommendationResult() = default;
    AWS_ACCESSANALYZER_API GetFindingRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetFindingRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the retrieval of the finding recommendation was
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetFindingRecommendationResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the retrieval of the finding recommendation was
     * completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    GetFindingRecommendationResult& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetFindingRecommendationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the reason that the retrieval of a recommendation
     * for the finding failed.</p>
     */
    inline const RecommendationError& GetError() const { return m_error; }
    template<typename ErrorT = RecommendationError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = RecommendationError>
    GetFindingRecommendationResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource of the finding.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetFindingRecommendationResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of recommended steps for the finding.</p>
     */
    inline const Aws::Vector<RecommendedStep>& GetRecommendedSteps() const { return m_recommendedSteps; }
    template<typename RecommendedStepsT = Aws::Vector<RecommendedStep>>
    void SetRecommendedSteps(RecommendedStepsT&& value) { m_recommendedStepsHasBeenSet = true; m_recommendedSteps = std::forward<RecommendedStepsT>(value); }
    template<typename RecommendedStepsT = Aws::Vector<RecommendedStep>>
    GetFindingRecommendationResult& WithRecommendedSteps(RecommendedStepsT&& value) { SetRecommendedSteps(std::forward<RecommendedStepsT>(value)); return *this;}
    template<typename RecommendedStepsT = RecommendedStep>
    GetFindingRecommendationResult& AddRecommendedSteps(RecommendedStepsT&& value) { m_recommendedStepsHasBeenSet = true; m_recommendedSteps.emplace_back(std::forward<RecommendedStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of recommendation for the finding.</p>
     */
    inline RecommendationType GetRecommendationType() const { return m_recommendationType; }
    inline void SetRecommendationType(RecommendationType value) { m_recommendationTypeHasBeenSet = true; m_recommendationType = value; }
    inline GetFindingRecommendationResult& WithRecommendationType(RecommendationType value) { SetRecommendationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the retrieval of the finding recommendation.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetFindingRecommendationResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
    bool m_completedAtHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    RecommendationError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<RecommendedStep> m_recommendedSteps;
    bool m_recommendedStepsHasBeenSet = false;

    RecommendationType m_recommendationType{RecommendationType::NOT_SET};
    bool m_recommendationTypeHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
