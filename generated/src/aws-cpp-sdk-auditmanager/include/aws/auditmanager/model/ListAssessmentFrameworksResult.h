/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentFrameworkMetadata.h>
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
  class ListAssessmentFrameworksResult
  {
  public:
    AWS_AUDITMANAGER_API ListAssessmentFrameworksResult() = default;
    AWS_AUDITMANAGER_API ListAssessmentFrameworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListAssessmentFrameworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of metadata that the <code>ListAssessmentFrameworks</code> API
     * returns for each framework.</p>
     */
    inline const Aws::Vector<AssessmentFrameworkMetadata>& GetFrameworkMetadataList() const { return m_frameworkMetadataList; }
    template<typename FrameworkMetadataListT = Aws::Vector<AssessmentFrameworkMetadata>>
    void SetFrameworkMetadataList(FrameworkMetadataListT&& value) { m_frameworkMetadataListHasBeenSet = true; m_frameworkMetadataList = std::forward<FrameworkMetadataListT>(value); }
    template<typename FrameworkMetadataListT = Aws::Vector<AssessmentFrameworkMetadata>>
    ListAssessmentFrameworksResult& WithFrameworkMetadataList(FrameworkMetadataListT&& value) { SetFrameworkMetadataList(std::forward<FrameworkMetadataListT>(value)); return *this;}
    template<typename FrameworkMetadataListT = AssessmentFrameworkMetadata>
    ListAssessmentFrameworksResult& AddFrameworkMetadataList(FrameworkMetadataListT&& value) { m_frameworkMetadataListHasBeenSet = true; m_frameworkMetadataList.emplace_back(std::forward<FrameworkMetadataListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssessmentFrameworksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssessmentFrameworksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentFrameworkMetadata> m_frameworkMetadataList;
    bool m_frameworkMetadataListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
