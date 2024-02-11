/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/BackupJobStatus.h>
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
  class ListBackupJobSummariesRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListBackupJobSummariesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBackupJobSummaries"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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

    /**
     * <p>Returns the job count for the specified account.</p> <p>If the request is
     * sent from a member account or an account not part of Amazon Web Services
     * Organizations, jobs within requestor's account will be returned.</p> <p>Root,
     * admin, and delegated administrator accounts can use the value ANY to return job
     * counts from every account in the organization.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts from all accounts within the
     * authenticated organization, then returns the sum.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>Returns the job count for the specified account.</p> <p>If the request is
     * sent from a member account or an account not part of Amazon Web Services
     * Organizations, jobs within requestor's account will be returned.</p> <p>Root,
     * admin, and delegated administrator accounts can use the value ANY to return job
     * counts from every account in the organization.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts from all accounts within the
     * authenticated organization, then returns the sum.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Returns the job count for the specified account.</p> <p>If the request is
     * sent from a member account or an account not part of Amazon Web Services
     * Organizations, jobs within requestor's account will be returned.</p> <p>Root,
     * admin, and delegated administrator accounts can use the value ANY to return job
     * counts from every account in the organization.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts from all accounts within the
     * authenticated organization, then returns the sum.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>Returns the job count for the specified account.</p> <p>If the request is
     * sent from a member account or an account not part of Amazon Web Services
     * Organizations, jobs within requestor's account will be returned.</p> <p>Root,
     * admin, and delegated administrator accounts can use the value ANY to return job
     * counts from every account in the organization.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts from all accounts within the
     * authenticated organization, then returns the sum.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>Returns the job count for the specified account.</p> <p>If the request is
     * sent from a member account or an account not part of Amazon Web Services
     * Organizations, jobs within requestor's account will be returned.</p> <p>Root,
     * admin, and delegated administrator accounts can use the value ANY to return job
     * counts from every account in the organization.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts from all accounts within the
     * authenticated organization, then returns the sum.</p>
     */
    inline ListBackupJobSummariesRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>Returns the job count for the specified account.</p> <p>If the request is
     * sent from a member account or an account not part of Amazon Web Services
     * Organizations, jobs within requestor's account will be returned.</p> <p>Root,
     * admin, and delegated administrator accounts can use the value ANY to return job
     * counts from every account in the organization.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts from all accounts within the
     * authenticated organization, then returns the sum.</p>
     */
    inline ListBackupJobSummariesRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>Returns the job count for the specified account.</p> <p>If the request is
     * sent from a member account or an account not part of Amazon Web Services
     * Organizations, jobs within requestor's account will be returned.</p> <p>Root,
     * admin, and delegated administrator accounts can use the value ANY to return job
     * counts from every account in the organization.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts from all accounts within the
     * authenticated organization, then returns the sum.</p>
     */
    inline ListBackupJobSummariesRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>This parameter returns the job count for jobs with the specified state.</p>
     * <p>The the value ANY returns count of all states.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all states and returns the
     * sum.</p>
     */
    inline const BackupJobStatus& GetState() const{ return m_state; }

    /**
     * <p>This parameter returns the job count for jobs with the specified state.</p>
     * <p>The the value ANY returns count of all states.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all states and returns the
     * sum.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>This parameter returns the job count for jobs with the specified state.</p>
     * <p>The the value ANY returns count of all states.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all states and returns the
     * sum.</p>
     */
    inline void SetState(const BackupJobStatus& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>This parameter returns the job count for jobs with the specified state.</p>
     * <p>The the value ANY returns count of all states.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all states and returns the
     * sum.</p>
     */
    inline void SetState(BackupJobStatus&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>This parameter returns the job count for jobs with the specified state.</p>
     * <p>The the value ANY returns count of all states.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all states and returns the
     * sum.</p>
     */
    inline ListBackupJobSummariesRequest& WithState(const BackupJobStatus& value) { SetState(value); return *this;}

    /**
     * <p>This parameter returns the job count for jobs with the specified state.</p>
     * <p>The the value ANY returns count of all states.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all states and returns the
     * sum.</p>
     */
    inline ListBackupJobSummariesRequest& WithState(BackupJobStatus&& value) { SetState(std::move(value)); return *this;}


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

    /**
     * <p>Returns the job count for the specified resource type. Use request
     * <code>GetSupportedResourceTypes</code> to obtain strings for supported resource
     * types.</p> <p>The the value ANY returns count of all resource types.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all resource types and
     * returns the sum.</p> <p>The type of Amazon Web Services resource to be backed
     * up; for example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Returns the job count for the specified resource type. Use request
     * <code>GetSupportedResourceTypes</code> to obtain strings for supported resource
     * types.</p> <p>The the value ANY returns count of all resource types.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all resource types and
     * returns the sum.</p> <p>The type of Amazon Web Services resource to be backed
     * up; for example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Returns the job count for the specified resource type. Use request
     * <code>GetSupportedResourceTypes</code> to obtain strings for supported resource
     * types.</p> <p>The the value ANY returns count of all resource types.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all resource types and
     * returns the sum.</p> <p>The type of Amazon Web Services resource to be backed
     * up; for example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Returns the job count for the specified resource type. Use request
     * <code>GetSupportedResourceTypes</code> to obtain strings for supported resource
     * types.</p> <p>The the value ANY returns count of all resource types.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all resource types and
     * returns the sum.</p> <p>The type of Amazon Web Services resource to be backed
     * up; for example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Returns the job count for the specified resource type. Use request
     * <code>GetSupportedResourceTypes</code> to obtain strings for supported resource
     * types.</p> <p>The the value ANY returns count of all resource types.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all resource types and
     * returns the sum.</p> <p>The type of Amazon Web Services resource to be backed
     * up; for example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database.</p>
     */
    inline ListBackupJobSummariesRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Returns the job count for the specified resource type. Use request
     * <code>GetSupportedResourceTypes</code> to obtain strings for supported resource
     * types.</p> <p>The the value ANY returns count of all resource types.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all resource types and
     * returns the sum.</p> <p>The type of Amazon Web Services resource to be backed
     * up; for example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database.</p>
     */
    inline ListBackupJobSummariesRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Returns the job count for the specified resource type. Use request
     * <code>GetSupportedResourceTypes</code> to obtain strings for supported resource
     * types.</p> <p>The the value ANY returns count of all resource types.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all resource types and
     * returns the sum.</p> <p>The type of Amazon Web Services resource to be backed
     * up; for example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database.</p>
     */
    inline ListBackupJobSummariesRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>This parameter returns the job count for the specified message category.</p>
     * <p>Example accepted strings include <code>AccessDenied</code>,
     * <code>Success</code>, and <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of accepted MessageCategory strings.</p> <p>The the value ANY returns
     * count of all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates
     * job counts for all message categories and returns the sum.</p>
     */
    inline const Aws::String& GetMessageCategory() const{ return m_messageCategory; }

    /**
     * <p>This parameter returns the job count for the specified message category.</p>
     * <p>Example accepted strings include <code>AccessDenied</code>,
     * <code>Success</code>, and <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of accepted MessageCategory strings.</p> <p>The the value ANY returns
     * count of all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates
     * job counts for all message categories and returns the sum.</p>
     */
    inline bool MessageCategoryHasBeenSet() const { return m_messageCategoryHasBeenSet; }

    /**
     * <p>This parameter returns the job count for the specified message category.</p>
     * <p>Example accepted strings include <code>AccessDenied</code>,
     * <code>Success</code>, and <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of accepted MessageCategory strings.</p> <p>The the value ANY returns
     * count of all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates
     * job counts for all message categories and returns the sum.</p>
     */
    inline void SetMessageCategory(const Aws::String& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = value; }

    /**
     * <p>This parameter returns the job count for the specified message category.</p>
     * <p>Example accepted strings include <code>AccessDenied</code>,
     * <code>Success</code>, and <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of accepted MessageCategory strings.</p> <p>The the value ANY returns
     * count of all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates
     * job counts for all message categories and returns the sum.</p>
     */
    inline void SetMessageCategory(Aws::String&& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = std::move(value); }

    /**
     * <p>This parameter returns the job count for the specified message category.</p>
     * <p>Example accepted strings include <code>AccessDenied</code>,
     * <code>Success</code>, and <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of accepted MessageCategory strings.</p> <p>The the value ANY returns
     * count of all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates
     * job counts for all message categories and returns the sum.</p>
     */
    inline void SetMessageCategory(const char* value) { m_messageCategoryHasBeenSet = true; m_messageCategory.assign(value); }

    /**
     * <p>This parameter returns the job count for the specified message category.</p>
     * <p>Example accepted strings include <code>AccessDenied</code>,
     * <code>Success</code>, and <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of accepted MessageCategory strings.</p> <p>The the value ANY returns
     * count of all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates
     * job counts for all message categories and returns the sum.</p>
     */
    inline ListBackupJobSummariesRequest& WithMessageCategory(const Aws::String& value) { SetMessageCategory(value); return *this;}

    /**
     * <p>This parameter returns the job count for the specified message category.</p>
     * <p>Example accepted strings include <code>AccessDenied</code>,
     * <code>Success</code>, and <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of accepted MessageCategory strings.</p> <p>The the value ANY returns
     * count of all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates
     * job counts for all message categories and returns the sum.</p>
     */
    inline ListBackupJobSummariesRequest& WithMessageCategory(Aws::String&& value) { SetMessageCategory(std::move(value)); return *this;}

    /**
     * <p>This parameter returns the job count for the specified message category.</p>
     * <p>Example accepted strings include <code>AccessDenied</code>,
     * <code>Success</code>, and <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of accepted MessageCategory strings.</p> <p>The the value ANY returns
     * count of all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates
     * job counts for all message categories and returns the sum.</p>
     */
    inline ListBackupJobSummariesRequest& WithMessageCategory(const char* value) { SetMessageCategory(value); return *this;}


    /**
     * <p>This is the period that sets the boundaries for returned results.</p>
     * <p>Acceptable values include</p> <ul> <li> <p> <code>ONE_DAY</code> for daily
     * job count for the prior 14 days.</p> </li> <li> <p> <code>SEVEN_DAYS</code> for
     * the aggregated job count for the prior 7 days.</p> </li> <li> <p>
     * <code>FOURTEEN_DAYS</code> for aggregated job count for prior 14 days.</p> </li>
     * </ul>
     */
    inline const AggregationPeriod& GetAggregationPeriod() const{ return m_aggregationPeriod; }

    /**
     * <p>This is the period that sets the boundaries for returned results.</p>
     * <p>Acceptable values include</p> <ul> <li> <p> <code>ONE_DAY</code> for daily
     * job count for the prior 14 days.</p> </li> <li> <p> <code>SEVEN_DAYS</code> for
     * the aggregated job count for the prior 7 days.</p> </li> <li> <p>
     * <code>FOURTEEN_DAYS</code> for aggregated job count for prior 14 days.</p> </li>
     * </ul>
     */
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }

    /**
     * <p>This is the period that sets the boundaries for returned results.</p>
     * <p>Acceptable values include</p> <ul> <li> <p> <code>ONE_DAY</code> for daily
     * job count for the prior 14 days.</p> </li> <li> <p> <code>SEVEN_DAYS</code> for
     * the aggregated job count for the prior 7 days.</p> </li> <li> <p>
     * <code>FOURTEEN_DAYS</code> for aggregated job count for prior 14 days.</p> </li>
     * </ul>
     */
    inline void SetAggregationPeriod(const AggregationPeriod& value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }

    /**
     * <p>This is the period that sets the boundaries for returned results.</p>
     * <p>Acceptable values include</p> <ul> <li> <p> <code>ONE_DAY</code> for daily
     * job count for the prior 14 days.</p> </li> <li> <p> <code>SEVEN_DAYS</code> for
     * the aggregated job count for the prior 7 days.</p> </li> <li> <p>
     * <code>FOURTEEN_DAYS</code> for aggregated job count for prior 14 days.</p> </li>
     * </ul>
     */
    inline void SetAggregationPeriod(AggregationPeriod&& value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = std::move(value); }

    /**
     * <p>This is the period that sets the boundaries for returned results.</p>
     * <p>Acceptable values include</p> <ul> <li> <p> <code>ONE_DAY</code> for daily
     * job count for the prior 14 days.</p> </li> <li> <p> <code>SEVEN_DAYS</code> for
     * the aggregated job count for the prior 7 days.</p> </li> <li> <p>
     * <code>FOURTEEN_DAYS</code> for aggregated job count for prior 14 days.</p> </li>
     * </ul>
     */
    inline ListBackupJobSummariesRequest& WithAggregationPeriod(const AggregationPeriod& value) { SetAggregationPeriod(value); return *this;}

    /**
     * <p>This is the period that sets the boundaries for returned results.</p>
     * <p>Acceptable values include</p> <ul> <li> <p> <code>ONE_DAY</code> for daily
     * job count for the prior 14 days.</p> </li> <li> <p> <code>SEVEN_DAYS</code> for
     * the aggregated job count for the prior 7 days.</p> </li> <li> <p>
     * <code>FOURTEEN_DAYS</code> for aggregated job count for prior 14 days.</p> </li>
     * </ul>
     */
    inline ListBackupJobSummariesRequest& WithAggregationPeriod(AggregationPeriod&& value) { SetAggregationPeriod(std::move(value)); return *this;}


    /**
     * <p>This parameter sets the maximum number of items to be returned.</p> <p>The
     * value is an integer. Range of accepted values is from 1 to 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>This parameter sets the maximum number of items to be returned.</p> <p>The
     * value is an integer. Range of accepted values is from 1 to 500.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>This parameter sets the maximum number of items to be returned.</p> <p>The
     * value is an integer. Range of accepted values is from 1 to 500.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>This parameter sets the maximum number of items to be returned.</p> <p>The
     * value is an integer. Range of accepted values is from 1 to 500.</p>
     */
    inline ListBackupJobSummariesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListBackupJobSummariesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListBackupJobSummariesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListBackupJobSummariesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    BackupJobStatus m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_messageCategory;
    bool m_messageCategoryHasBeenSet = false;

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
