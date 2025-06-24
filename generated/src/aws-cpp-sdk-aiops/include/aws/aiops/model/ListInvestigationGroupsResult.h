/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/aiops/model/ListInvestigationGroupsModel.h>
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
namespace AIOps
{
namespace Model
{
  class ListInvestigationGroupsResult
  {
  public:
    AWS_AIOPS_API ListInvestigationGroupsResult() = default;
    AWS_AIOPS_API ListInvestigationGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AIOPS_API ListInvestigationGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Include this value in your next use of this operation to get the next set of
     * service operations.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInvestigationGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure contains the information about
     * one investigation group in the account.</p>
     */
    inline const Aws::Vector<ListInvestigationGroupsModel>& GetInvestigationGroups() const { return m_investigationGroups; }
    template<typename InvestigationGroupsT = Aws::Vector<ListInvestigationGroupsModel>>
    void SetInvestigationGroups(InvestigationGroupsT&& value) { m_investigationGroupsHasBeenSet = true; m_investigationGroups = std::forward<InvestigationGroupsT>(value); }
    template<typename InvestigationGroupsT = Aws::Vector<ListInvestigationGroupsModel>>
    ListInvestigationGroupsResult& WithInvestigationGroups(InvestigationGroupsT&& value) { SetInvestigationGroups(std::forward<InvestigationGroupsT>(value)); return *this;}
    template<typename InvestigationGroupsT = ListInvestigationGroupsModel>
    ListInvestigationGroupsResult& AddInvestigationGroups(InvestigationGroupsT&& value) { m_investigationGroupsHasBeenSet = true; m_investigationGroups.emplace_back(std::forward<InvestigationGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInvestigationGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListInvestigationGroupsModel> m_investigationGroups;
    bool m_investigationGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AIOps
} // namespace Aws
