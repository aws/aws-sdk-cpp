/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/AssessmentSummary.h>
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
namespace DirectoryService
{
namespace Model
{
  class ListADAssessmentsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API ListADAssessmentsResult() = default;
    AWS_DIRECTORYSERVICE_API ListADAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API ListADAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of assessment summaries containing basic information about each
     * directory assessment.</p>
     */
    inline const Aws::Vector<AssessmentSummary>& GetAssessments() const { return m_assessments; }
    template<typename AssessmentsT = Aws::Vector<AssessmentSummary>>
    void SetAssessments(AssessmentsT&& value) { m_assessmentsHasBeenSet = true; m_assessments = std::forward<AssessmentsT>(value); }
    template<typename AssessmentsT = Aws::Vector<AssessmentSummary>>
    ListADAssessmentsResult& WithAssessments(AssessmentsT&& value) { SetAssessments(std::forward<AssessmentsT>(value)); return *this;}
    template<typename AssessmentsT = AssessmentSummary>
    ListADAssessmentsResult& AddAssessments(AssessmentsT&& value) { m_assessmentsHasBeenSet = true; m_assessments.emplace_back(std::forward<AssessmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent request to retrieve the next
     * set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListADAssessmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListADAssessmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentSummary> m_assessments;
    bool m_assessmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
