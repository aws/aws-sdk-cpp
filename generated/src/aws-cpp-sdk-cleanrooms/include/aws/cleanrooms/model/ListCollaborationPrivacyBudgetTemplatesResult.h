/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/CollaborationPrivacyBudgetTemplateSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListCollaborationPrivacyBudgetTemplatesResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationPrivacyBudgetTemplatesResult() = default;
    AWS_CLEANROOMS_API ListCollaborationPrivacyBudgetTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationPrivacyBudgetTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollaborationPrivacyBudgetTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that summarizes the collaboration privacy budget templates. The
     * summary includes collaboration information, creation information, the privacy
     * budget type.</p>
     */
    inline const Aws::Vector<CollaborationPrivacyBudgetTemplateSummary>& GetCollaborationPrivacyBudgetTemplateSummaries() const { return m_collaborationPrivacyBudgetTemplateSummaries; }
    template<typename CollaborationPrivacyBudgetTemplateSummariesT = Aws::Vector<CollaborationPrivacyBudgetTemplateSummary>>
    void SetCollaborationPrivacyBudgetTemplateSummaries(CollaborationPrivacyBudgetTemplateSummariesT&& value) { m_collaborationPrivacyBudgetTemplateSummariesHasBeenSet = true; m_collaborationPrivacyBudgetTemplateSummaries = std::forward<CollaborationPrivacyBudgetTemplateSummariesT>(value); }
    template<typename CollaborationPrivacyBudgetTemplateSummariesT = Aws::Vector<CollaborationPrivacyBudgetTemplateSummary>>
    ListCollaborationPrivacyBudgetTemplatesResult& WithCollaborationPrivacyBudgetTemplateSummaries(CollaborationPrivacyBudgetTemplateSummariesT&& value) { SetCollaborationPrivacyBudgetTemplateSummaries(std::forward<CollaborationPrivacyBudgetTemplateSummariesT>(value)); return *this;}
    template<typename CollaborationPrivacyBudgetTemplateSummariesT = CollaborationPrivacyBudgetTemplateSummary>
    ListCollaborationPrivacyBudgetTemplatesResult& AddCollaborationPrivacyBudgetTemplateSummaries(CollaborationPrivacyBudgetTemplateSummariesT&& value) { m_collaborationPrivacyBudgetTemplateSummariesHasBeenSet = true; m_collaborationPrivacyBudgetTemplateSummaries.emplace_back(std::forward<CollaborationPrivacyBudgetTemplateSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollaborationPrivacyBudgetTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CollaborationPrivacyBudgetTemplateSummary> m_collaborationPrivacyBudgetTemplateSummaries;
    bool m_collaborationPrivacyBudgetTemplateSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
