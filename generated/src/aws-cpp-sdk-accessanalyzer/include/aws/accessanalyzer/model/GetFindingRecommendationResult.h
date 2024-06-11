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
    AWS_ACCESSANALYZER_API GetFindingRecommendationResult();
    AWS_ACCESSANALYZER_API GetFindingRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetFindingRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the retrieval of the finding recommendation was
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetFindingRecommendationResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetFindingRecommendationResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the retrieval of the finding recommendation was
     * completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAt = value; }
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAt = std::move(value); }
    inline GetFindingRecommendationResult& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}
    inline GetFindingRecommendationResult& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetFindingRecommendationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetFindingRecommendationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetFindingRecommendationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the reason that the retrieval of a recommendation
     * for the finding failed.</p>
     */
    inline const RecommendationError& GetError() const{ return m_error; }
    inline void SetError(const RecommendationError& value) { m_error = value; }
    inline void SetError(RecommendationError&& value) { m_error = std::move(value); }
    inline GetFindingRecommendationResult& WithError(const RecommendationError& value) { SetError(value); return *this;}
    inline GetFindingRecommendationResult& WithError(RecommendationError&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource of the finding.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline GetFindingRecommendationResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetFindingRecommendationResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetFindingRecommendationResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of recommended steps for the finding.</p>
     */
    inline const Aws::Vector<RecommendedStep>& GetRecommendedSteps() const{ return m_recommendedSteps; }
    inline void SetRecommendedSteps(const Aws::Vector<RecommendedStep>& value) { m_recommendedSteps = value; }
    inline void SetRecommendedSteps(Aws::Vector<RecommendedStep>&& value) { m_recommendedSteps = std::move(value); }
    inline GetFindingRecommendationResult& WithRecommendedSteps(const Aws::Vector<RecommendedStep>& value) { SetRecommendedSteps(value); return *this;}
    inline GetFindingRecommendationResult& WithRecommendedSteps(Aws::Vector<RecommendedStep>&& value) { SetRecommendedSteps(std::move(value)); return *this;}
    inline GetFindingRecommendationResult& AddRecommendedSteps(const RecommendedStep& value) { m_recommendedSteps.push_back(value); return *this; }
    inline GetFindingRecommendationResult& AddRecommendedSteps(RecommendedStep&& value) { m_recommendedSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of recommendation for the finding.</p>
     */
    inline const RecommendationType& GetRecommendationType() const{ return m_recommendationType; }
    inline void SetRecommendationType(const RecommendationType& value) { m_recommendationType = value; }
    inline void SetRecommendationType(RecommendationType&& value) { m_recommendationType = std::move(value); }
    inline GetFindingRecommendationResult& WithRecommendationType(const RecommendationType& value) { SetRecommendationType(value); return *this;}
    inline GetFindingRecommendationResult& WithRecommendationType(RecommendationType&& value) { SetRecommendationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the retrieval of the finding recommendation.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline GetFindingRecommendationResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline GetFindingRecommendationResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFindingRecommendationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFindingRecommendationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFindingRecommendationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startedAt;

    Aws::Utils::DateTime m_completedAt;

    Aws::String m_nextToken;

    RecommendationError m_error;

    Aws::String m_resourceArn;

    Aws::Vector<RecommendedStep> m_recommendedSteps;

    RecommendationType m_recommendationType;

    Status m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
