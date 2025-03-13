/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/WorkflowType.h>
#include <aws/customer-profiles/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class ListWorkflowsRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API ListWorkflowsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkflows"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

    AWS_CUSTOMERPROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    ListWorkflowsRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of workflow. The only supported value is APPFLOW_INTEGRATION.</p>
     */
    inline WorkflowType GetWorkflowType() const { return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    inline void SetWorkflowType(WorkflowType value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }
    inline ListWorkflowsRequest& WithWorkflowType(WorkflowType value) { SetWorkflowType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of workflow execution.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListWorkflowsRequest& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieve workflows started after timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryStartDate() const { return m_queryStartDate; }
    inline bool QueryStartDateHasBeenSet() const { return m_queryStartDateHasBeenSet; }
    template<typename QueryStartDateT = Aws::Utils::DateTime>
    void SetQueryStartDate(QueryStartDateT&& value) { m_queryStartDateHasBeenSet = true; m_queryStartDate = std::forward<QueryStartDateT>(value); }
    template<typename QueryStartDateT = Aws::Utils::DateTime>
    ListWorkflowsRequest& WithQueryStartDate(QueryStartDateT&& value) { SetQueryStartDate(std::forward<QueryStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieve workflows ended after timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryEndDate() const { return m_queryEndDate; }
    inline bool QueryEndDateHasBeenSet() const { return m_queryEndDateHasBeenSet; }
    template<typename QueryEndDateT = Aws::Utils::DateTime>
    void SetQueryEndDate(QueryEndDateT&& value) { m_queryEndDateHasBeenSet = true; m_queryEndDate = std::forward<QueryEndDateT>(value); }
    template<typename QueryEndDateT = Aws::Utils::DateTime>
    ListWorkflowsRequest& WithQueryEndDate(QueryEndDateT&& value) { SetQueryEndDate(std::forward<QueryEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkflowsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWorkflowsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    WorkflowType m_workflowType{WorkflowType::NOT_SET};
    bool m_workflowTypeHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_queryStartDate{};
    bool m_queryStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_queryEndDate{};
    bool m_queryEndDateHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
