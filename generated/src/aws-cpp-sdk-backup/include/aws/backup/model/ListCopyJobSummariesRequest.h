/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/CopyJobStatus.h>
#include <aws/backup/model/AggregationPeriod.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Backup
{
namespace Model
{

  /**
   */
  class ListCopyJobSummariesRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListCopyJobSummariesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCopyJobSummaries"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Returns the job count for the specified account.</p> <p>If the request is
     * sent from a member account or an account not part of Amazon Web Services
     * Organizations, jobs within requestor's account will be returned.</p> <p>Root,
     * admin, and delegated administrator accounts can use the value ANY to return job
     * counts from every account in the organization.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts from all accounts within the
     * authenticated organization, then returns the sum.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ListCopyJobSummariesRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter returns the job count for jobs with the specified state.</p>
     * <p>The the value ANY returns count of all states.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all states and returns the
     * sum.</p>
     */
    inline CopyJobStatus GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CopyJobStatus value) { m_stateHasBeenSet = true; m_state = value; }
    inline ListCopyJobSummariesRequest& WithState(CopyJobStatus value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the job count for the specified resource type. Use request
     * <code>GetSupportedResourceTypes</code> to obtain strings for supported resource
     * types.</p> <p>The the value ANY returns count of all resource types.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all resource types and
     * returns the sum.</p> <p>The type of Amazon Web Services resource to be backed
     * up; for example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ListCopyJobSummariesRequest& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter returns the job count for the specified message category.</p>
     * <p>Example accepted strings include <code>AccessDenied</code>,
     * <code>Success</code>, and <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of accepted MessageCategory strings.</p> <p>The the value ANY returns
     * count of all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates
     * job counts for all message categories and returns the sum.</p>
     */
    inline const Aws::String& GetMessageCategory() const { return m_messageCategory; }
    inline bool MessageCategoryHasBeenSet() const { return m_messageCategoryHasBeenSet; }
    template<typename MessageCategoryT = Aws::String>
    void SetMessageCategory(MessageCategoryT&& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = std::forward<MessageCategoryT>(value); }
    template<typename MessageCategoryT = Aws::String>
    ListCopyJobSummariesRequest& WithMessageCategory(MessageCategoryT&& value) { SetMessageCategory(std::forward<MessageCategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period for the returned results.</p> <ul> <li> <p> <code>ONE_DAY</code> -
     * The daily job count for the prior 14 days.</p> </li> <li> <p>
     * <code>SEVEN_DAYS</code> - The aggregated job count for the prior 7 days.</p>
     * </li> <li> <p> <code>FOURTEEN_DAYS</code> - The aggregated job count for prior
     * 14 days.</p> </li> </ul>
     */
    inline AggregationPeriod GetAggregationPeriod() const { return m_aggregationPeriod; }
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }
    inline void SetAggregationPeriod(AggregationPeriod value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }
    inline ListCopyJobSummariesRequest& WithAggregationPeriod(AggregationPeriod value) { SetAggregationPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter sets the maximum number of items to be returned.</p> <p>The
     * value is an integer. Range of accepted values is from 1 to 500.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCopyJobSummariesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCopyJobSummariesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    CopyJobStatus m_state{CopyJobStatus::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_messageCategory;
    bool m_messageCategoryHasBeenSet = false;

    AggregationPeriod m_aggregationPeriod{AggregationPeriod::NOT_SET};
    bool m_aggregationPeriodHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
