/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/RestoreJobStatus.h>
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
  class ListRestoreJobsRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListRestoreJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRestoreJobs"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRestoreJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRestoreJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRestoreJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRestoreJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID to list the jobs from. Returns only restore jobs associated
     * with the specified account ID.</p>
     */
    inline const Aws::String& GetByAccountId() const{ return m_byAccountId; }
    inline bool ByAccountIdHasBeenSet() const { return m_byAccountIdHasBeenSet; }
    inline void SetByAccountId(const Aws::String& value) { m_byAccountIdHasBeenSet = true; m_byAccountId = value; }
    inline void SetByAccountId(Aws::String&& value) { m_byAccountIdHasBeenSet = true; m_byAccountId = std::move(value); }
    inline void SetByAccountId(const char* value) { m_byAccountIdHasBeenSet = true; m_byAccountId.assign(value); }
    inline ListRestoreJobsRequest& WithByAccountId(const Aws::String& value) { SetByAccountId(value); return *this;}
    inline ListRestoreJobsRequest& WithByAccountId(Aws::String&& value) { SetByAccountId(std::move(value)); return *this;}
    inline ListRestoreJobsRequest& WithByAccountId(const char* value) { SetByAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include this parameter to return only restore jobs for the specified
     * resources:</p> <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li>
     * <li> <p> <code>CloudFormation</code> for CloudFormation</p> </li> <li> <p>
     * <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p>
     * </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p>
     * <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li> <p>
     * <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Redshift</code> for Amazon
     * Redshift</p> </li> <li> <p> <code>S3</code> for Amazon Simple Storage Service
     * (Amazon S3)</p> </li> <li> <p> <code>SAP HANA on Amazon EC2</code> for SAP HANA
     * databases on Amazon Elastic Compute Cloud instances</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>Timestream</code> for Amazon Timestream</p> </li> <li> <p>
     * <code>VirtualMachine</code> for VMware virtual machines</p> </li> </ul>
     */
    inline const Aws::String& GetByResourceType() const{ return m_byResourceType; }
    inline bool ByResourceTypeHasBeenSet() const { return m_byResourceTypeHasBeenSet; }
    inline void SetByResourceType(const Aws::String& value) { m_byResourceTypeHasBeenSet = true; m_byResourceType = value; }
    inline void SetByResourceType(Aws::String&& value) { m_byResourceTypeHasBeenSet = true; m_byResourceType = std::move(value); }
    inline void SetByResourceType(const char* value) { m_byResourceTypeHasBeenSet = true; m_byResourceType.assign(value); }
    inline ListRestoreJobsRequest& WithByResourceType(const Aws::String& value) { SetByResourceType(value); return *this;}
    inline ListRestoreJobsRequest& WithByResourceType(Aws::String&& value) { SetByResourceType(std::move(value)); return *this;}
    inline ListRestoreJobsRequest& WithByResourceType(const char* value) { SetByResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only restore jobs that were created before the specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedBefore() const{ return m_byCreatedBefore; }
    inline bool ByCreatedBeforeHasBeenSet() const { return m_byCreatedBeforeHasBeenSet; }
    inline void SetByCreatedBefore(const Aws::Utils::DateTime& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = value; }
    inline void SetByCreatedBefore(Aws::Utils::DateTime&& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = std::move(value); }
    inline ListRestoreJobsRequest& WithByCreatedBefore(const Aws::Utils::DateTime& value) { SetByCreatedBefore(value); return *this;}
    inline ListRestoreJobsRequest& WithByCreatedBefore(Aws::Utils::DateTime&& value) { SetByCreatedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only restore jobs that were created after the specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedAfter() const{ return m_byCreatedAfter; }
    inline bool ByCreatedAfterHasBeenSet() const { return m_byCreatedAfterHasBeenSet; }
    inline void SetByCreatedAfter(const Aws::Utils::DateTime& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = value; }
    inline void SetByCreatedAfter(Aws::Utils::DateTime&& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = std::move(value); }
    inline ListRestoreJobsRequest& WithByCreatedAfter(const Aws::Utils::DateTime& value) { SetByCreatedAfter(value); return *this;}
    inline ListRestoreJobsRequest& WithByCreatedAfter(Aws::Utils::DateTime&& value) { SetByCreatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only restore jobs associated with the specified job status.</p>
     */
    inline const RestoreJobStatus& GetByStatus() const{ return m_byStatus; }
    inline bool ByStatusHasBeenSet() const { return m_byStatusHasBeenSet; }
    inline void SetByStatus(const RestoreJobStatus& value) { m_byStatusHasBeenSet = true; m_byStatus = value; }
    inline void SetByStatus(RestoreJobStatus&& value) { m_byStatusHasBeenSet = true; m_byStatus = std::move(value); }
    inline ListRestoreJobsRequest& WithByStatus(const RestoreJobStatus& value) { SetByStatus(value); return *this;}
    inline ListRestoreJobsRequest& WithByStatus(RestoreJobStatus&& value) { SetByStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only copy jobs completed before a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetByCompleteBefore() const{ return m_byCompleteBefore; }
    inline bool ByCompleteBeforeHasBeenSet() const { return m_byCompleteBeforeHasBeenSet; }
    inline void SetByCompleteBefore(const Aws::Utils::DateTime& value) { m_byCompleteBeforeHasBeenSet = true; m_byCompleteBefore = value; }
    inline void SetByCompleteBefore(Aws::Utils::DateTime&& value) { m_byCompleteBeforeHasBeenSet = true; m_byCompleteBefore = std::move(value); }
    inline ListRestoreJobsRequest& WithByCompleteBefore(const Aws::Utils::DateTime& value) { SetByCompleteBefore(value); return *this;}
    inline ListRestoreJobsRequest& WithByCompleteBefore(Aws::Utils::DateTime&& value) { SetByCompleteBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only copy jobs completed after a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetByCompleteAfter() const{ return m_byCompleteAfter; }
    inline bool ByCompleteAfterHasBeenSet() const { return m_byCompleteAfterHasBeenSet; }
    inline void SetByCompleteAfter(const Aws::Utils::DateTime& value) { m_byCompleteAfterHasBeenSet = true; m_byCompleteAfter = value; }
    inline void SetByCompleteAfter(Aws::Utils::DateTime&& value) { m_byCompleteAfterHasBeenSet = true; m_byCompleteAfter = std::move(value); }
    inline ListRestoreJobsRequest& WithByCompleteAfter(const Aws::Utils::DateTime& value) { SetByCompleteAfter(value); return *this;}
    inline ListRestoreJobsRequest& WithByCompleteAfter(Aws::Utils::DateTime&& value) { SetByCompleteAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This returns only restore testing jobs that match the specified resource
     * Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetByRestoreTestingPlanArn() const{ return m_byRestoreTestingPlanArn; }
    inline bool ByRestoreTestingPlanArnHasBeenSet() const { return m_byRestoreTestingPlanArnHasBeenSet; }
    inline void SetByRestoreTestingPlanArn(const Aws::String& value) { m_byRestoreTestingPlanArnHasBeenSet = true; m_byRestoreTestingPlanArn = value; }
    inline void SetByRestoreTestingPlanArn(Aws::String&& value) { m_byRestoreTestingPlanArnHasBeenSet = true; m_byRestoreTestingPlanArn = std::move(value); }
    inline void SetByRestoreTestingPlanArn(const char* value) { m_byRestoreTestingPlanArnHasBeenSet = true; m_byRestoreTestingPlanArn.assign(value); }
    inline ListRestoreJobsRequest& WithByRestoreTestingPlanArn(const Aws::String& value) { SetByRestoreTestingPlanArn(value); return *this;}
    inline ListRestoreJobsRequest& WithByRestoreTestingPlanArn(Aws::String&& value) { SetByRestoreTestingPlanArn(std::move(value)); return *this;}
    inline ListRestoreJobsRequest& WithByRestoreTestingPlanArn(const char* value) { SetByRestoreTestingPlanArn(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_byAccountId;
    bool m_byAccountIdHasBeenSet = false;

    Aws::String m_byResourceType;
    bool m_byResourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_byCreatedBefore;
    bool m_byCreatedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_byCreatedAfter;
    bool m_byCreatedAfterHasBeenSet = false;

    RestoreJobStatus m_byStatus;
    bool m_byStatusHasBeenSet = false;

    Aws::Utils::DateTime m_byCompleteBefore;
    bool m_byCompleteBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_byCompleteAfter;
    bool m_byCompleteAfterHasBeenSet = false;

    Aws::String m_byRestoreTestingPlanArn;
    bool m_byRestoreTestingPlanArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
