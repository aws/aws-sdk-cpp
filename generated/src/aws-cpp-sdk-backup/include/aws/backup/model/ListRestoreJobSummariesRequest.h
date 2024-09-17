/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreJobState.h>
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
  class ListRestoreJobSummariesRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListRestoreJobSummariesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRestoreJobSummaries"; }

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
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ListRestoreJobSummariesRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ListRestoreJobSummariesRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ListRestoreJobSummariesRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter returns the job count for jobs with the specified state.</p>
     * <p>The the value ANY returns count of all states.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all states and returns the
     * sum.</p>
     */
    inline const RestoreJobState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const RestoreJobState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(RestoreJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ListRestoreJobSummariesRequest& WithState(const RestoreJobState& value) { SetState(value); return *this;}
    inline ListRestoreJobSummariesRequest& WithState(RestoreJobState&& value) { SetState(std::move(value)); return *this;}
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
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ListRestoreJobSummariesRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ListRestoreJobSummariesRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ListRestoreJobSummariesRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period for the returned results.</p> <ul> <li> <p> <code>ONE_DAY</code> -
     * The daily job count for the prior 14 days.</p> </li> <li> <p>
     * <code>SEVEN_DAYS</code> - The aggregated job count for the prior 7 days.</p>
     * </li> <li> <p> <code>FOURTEEN_DAYS</code> - The aggregated job count for prior
     * 14 days.</p> </li> </ul>
     */
    inline const AggregationPeriod& GetAggregationPeriod() const{ return m_aggregationPeriod; }
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }
    inline void SetAggregationPeriod(const AggregationPeriod& value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }
    inline void SetAggregationPeriod(AggregationPeriod&& value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = std::move(value); }
    inline ListRestoreJobSummariesRequest& WithAggregationPeriod(const AggregationPeriod& value) { SetAggregationPeriod(value); return *this;}
    inline ListRestoreJobSummariesRequest& WithAggregationPeriod(AggregationPeriod&& value) { SetAggregationPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter sets the maximum number of items to be returned.</p> <p>The
     * value is an integer. Range of accepted values is from 1 to 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRestoreJobSummariesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRestoreJobSummariesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRestoreJobSummariesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRestoreJobSummariesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    RestoreJobState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    AggregationPeriod m_aggregationPeriod;
    bool m_aggregationPeriodHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
