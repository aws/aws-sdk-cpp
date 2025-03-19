/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentMetadataItem.h>
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
namespace AuditManager
{
namespace Model
{
  class ListAssessmentsResult
  {
  public:
    AWS_AUDITMANAGER_API ListAssessmentsResult() = default;
    AWS_AUDITMANAGER_API ListAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metadata that the <code>ListAssessments</code> API returns for each
     * assessment.</p>
     */
    inline const Aws::Vector<AssessmentMetadataItem>& GetAssessmentMetadata() const { return m_assessmentMetadata; }
    template<typename AssessmentMetadataT = Aws::Vector<AssessmentMetadataItem>>
    void SetAssessmentMetadata(AssessmentMetadataT&& value) { m_assessmentMetadataHasBeenSet = true; m_assessmentMetadata = std::forward<AssessmentMetadataT>(value); }
    template<typename AssessmentMetadataT = Aws::Vector<AssessmentMetadataItem>>
    ListAssessmentsResult& WithAssessmentMetadata(AssessmentMetadataT&& value) { SetAssessmentMetadata(std::forward<AssessmentMetadataT>(value)); return *this;}
    template<typename AssessmentMetadataT = AssessmentMetadataItem>
    ListAssessmentsResult& AddAssessmentMetadata(AssessmentMetadataT&& value) { m_assessmentMetadataHasBeenSet = true; m_assessmentMetadata.emplace_back(std::forward<AssessmentMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssessmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssessmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentMetadataItem> m_assessmentMetadata;
    bool m_assessmentMetadataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
