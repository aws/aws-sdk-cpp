/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/PrivacyBudgetTemplateSummary.h>
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
  class ListPrivacyBudgetTemplatesResult
  {
  public:
    AWS_CLEANROOMS_API ListPrivacyBudgetTemplatesResult() = default;
    AWS_CLEANROOMS_API ListPrivacyBudgetTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListPrivacyBudgetTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPrivacyBudgetTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that summarizes the privacy budget templates. The summary includes
     * collaboration information, creation information, and privacy budget type.</p>
     */
    inline const Aws::Vector<PrivacyBudgetTemplateSummary>& GetPrivacyBudgetTemplateSummaries() const { return m_privacyBudgetTemplateSummaries; }
    template<typename PrivacyBudgetTemplateSummariesT = Aws::Vector<PrivacyBudgetTemplateSummary>>
    void SetPrivacyBudgetTemplateSummaries(PrivacyBudgetTemplateSummariesT&& value) { m_privacyBudgetTemplateSummariesHasBeenSet = true; m_privacyBudgetTemplateSummaries = std::forward<PrivacyBudgetTemplateSummariesT>(value); }
    template<typename PrivacyBudgetTemplateSummariesT = Aws::Vector<PrivacyBudgetTemplateSummary>>
    ListPrivacyBudgetTemplatesResult& WithPrivacyBudgetTemplateSummaries(PrivacyBudgetTemplateSummariesT&& value) { SetPrivacyBudgetTemplateSummaries(std::forward<PrivacyBudgetTemplateSummariesT>(value)); return *this;}
    template<typename PrivacyBudgetTemplateSummariesT = PrivacyBudgetTemplateSummary>
    ListPrivacyBudgetTemplatesResult& AddPrivacyBudgetTemplateSummaries(PrivacyBudgetTemplateSummariesT&& value) { m_privacyBudgetTemplateSummariesHasBeenSet = true; m_privacyBudgetTemplateSummaries.emplace_back(std::forward<PrivacyBudgetTemplateSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPrivacyBudgetTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PrivacyBudgetTemplateSummary> m_privacyBudgetTemplateSummaries;
    bool m_privacyBudgetTemplateSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
