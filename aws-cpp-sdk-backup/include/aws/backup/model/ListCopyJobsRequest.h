/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/CopyJobState.h>
#include <aws/core/utils/DateTime.h>
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
  class ListCopyJobsRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListCopyJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCopyJobs"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline ListCopyJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline ListCopyJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline ListCopyJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline ListCopyJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Returns only copy jobs that match the specified resource Amazon Resource Name
     * (ARN). </p>
     */
    inline const Aws::String& GetByResourceArn() const{ return m_byResourceArn; }

    /**
     * <p>Returns only copy jobs that match the specified resource Amazon Resource Name
     * (ARN). </p>
     */
    inline bool ByResourceArnHasBeenSet() const { return m_byResourceArnHasBeenSet; }

    /**
     * <p>Returns only copy jobs that match the specified resource Amazon Resource Name
     * (ARN). </p>
     */
    inline void SetByResourceArn(const Aws::String& value) { m_byResourceArnHasBeenSet = true; m_byResourceArn = value; }

    /**
     * <p>Returns only copy jobs that match the specified resource Amazon Resource Name
     * (ARN). </p>
     */
    inline void SetByResourceArn(Aws::String&& value) { m_byResourceArnHasBeenSet = true; m_byResourceArn = std::move(value); }

    /**
     * <p>Returns only copy jobs that match the specified resource Amazon Resource Name
     * (ARN). </p>
     */
    inline void SetByResourceArn(const char* value) { m_byResourceArnHasBeenSet = true; m_byResourceArn.assign(value); }

    /**
     * <p>Returns only copy jobs that match the specified resource Amazon Resource Name
     * (ARN). </p>
     */
    inline ListCopyJobsRequest& WithByResourceArn(const Aws::String& value) { SetByResourceArn(value); return *this;}

    /**
     * <p>Returns only copy jobs that match the specified resource Amazon Resource Name
     * (ARN). </p>
     */
    inline ListCopyJobsRequest& WithByResourceArn(Aws::String&& value) { SetByResourceArn(std::move(value)); return *this;}

    /**
     * <p>Returns only copy jobs that match the specified resource Amazon Resource Name
     * (ARN). </p>
     */
    inline ListCopyJobsRequest& WithByResourceArn(const char* value) { SetByResourceArn(value); return *this;}


    /**
     * <p>Returns only copy jobs that are in the specified state.</p>
     */
    inline const CopyJobState& GetByState() const{ return m_byState; }

    /**
     * <p>Returns only copy jobs that are in the specified state.</p>
     */
    inline bool ByStateHasBeenSet() const { return m_byStateHasBeenSet; }

    /**
     * <p>Returns only copy jobs that are in the specified state.</p>
     */
    inline void SetByState(const CopyJobState& value) { m_byStateHasBeenSet = true; m_byState = value; }

    /**
     * <p>Returns only copy jobs that are in the specified state.</p>
     */
    inline void SetByState(CopyJobState&& value) { m_byStateHasBeenSet = true; m_byState = std::move(value); }

    /**
     * <p>Returns only copy jobs that are in the specified state.</p>
     */
    inline ListCopyJobsRequest& WithByState(const CopyJobState& value) { SetByState(value); return *this;}

    /**
     * <p>Returns only copy jobs that are in the specified state.</p>
     */
    inline ListCopyJobsRequest& WithByState(CopyJobState&& value) { SetByState(std::move(value)); return *this;}


    /**
     * <p>Returns only copy jobs that were created before the specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedBefore() const{ return m_byCreatedBefore; }

    /**
     * <p>Returns only copy jobs that were created before the specified date.</p>
     */
    inline bool ByCreatedBeforeHasBeenSet() const { return m_byCreatedBeforeHasBeenSet; }

    /**
     * <p>Returns only copy jobs that were created before the specified date.</p>
     */
    inline void SetByCreatedBefore(const Aws::Utils::DateTime& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = value; }

    /**
     * <p>Returns only copy jobs that were created before the specified date.</p>
     */
    inline void SetByCreatedBefore(Aws::Utils::DateTime&& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = std::move(value); }

    /**
     * <p>Returns only copy jobs that were created before the specified date.</p>
     */
    inline ListCopyJobsRequest& WithByCreatedBefore(const Aws::Utils::DateTime& value) { SetByCreatedBefore(value); return *this;}

    /**
     * <p>Returns only copy jobs that were created before the specified date.</p>
     */
    inline ListCopyJobsRequest& WithByCreatedBefore(Aws::Utils::DateTime&& value) { SetByCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>Returns only copy jobs that were created after the specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedAfter() const{ return m_byCreatedAfter; }

    /**
     * <p>Returns only copy jobs that were created after the specified date.</p>
     */
    inline bool ByCreatedAfterHasBeenSet() const { return m_byCreatedAfterHasBeenSet; }

    /**
     * <p>Returns only copy jobs that were created after the specified date.</p>
     */
    inline void SetByCreatedAfter(const Aws::Utils::DateTime& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = value; }

    /**
     * <p>Returns only copy jobs that were created after the specified date.</p>
     */
    inline void SetByCreatedAfter(Aws::Utils::DateTime&& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = std::move(value); }

    /**
     * <p>Returns only copy jobs that were created after the specified date.</p>
     */
    inline ListCopyJobsRequest& WithByCreatedAfter(const Aws::Utils::DateTime& value) { SetByCreatedAfter(value); return *this;}

    /**
     * <p>Returns only copy jobs that were created after the specified date.</p>
     */
    inline ListCopyJobsRequest& WithByCreatedAfter(Aws::Utils::DateTime&& value) { SetByCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>Returns only backup jobs for the specified resources:</p> <ul> <li> <p>
     * <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p> <code>DocumentDB</code>
     * for Amazon DocumentDB (with MongoDB compatibility)</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSx</code> for Amazon FSx</p> </li> <li>
     * <p> <code>Neptune</code> for Amazon Neptune</p> </li> <li> <p> <code>RDS</code>
     * for Amazon Relational Database Service</p> </li> <li> <p> <code>Storage
     * Gateway</code> for Storage Gateway</p> </li> <li> <p> <code>S3</code> for Amazon
     * S3</p> </li> <li> <p> <code>VirtualMachine</code> for virtual machines</p> </li>
     * </ul>
     */
    inline const Aws::String& GetByResourceType() const{ return m_byResourceType; }

    /**
     * <p>Returns only backup jobs for the specified resources:</p> <ul> <li> <p>
     * <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p> <code>DocumentDB</code>
     * for Amazon DocumentDB (with MongoDB compatibility)</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSx</code> for Amazon FSx</p> </li> <li>
     * <p> <code>Neptune</code> for Amazon Neptune</p> </li> <li> <p> <code>RDS</code>
     * for Amazon Relational Database Service</p> </li> <li> <p> <code>Storage
     * Gateway</code> for Storage Gateway</p> </li> <li> <p> <code>S3</code> for Amazon
     * S3</p> </li> <li> <p> <code>VirtualMachine</code> for virtual machines</p> </li>
     * </ul>
     */
    inline bool ByResourceTypeHasBeenSet() const { return m_byResourceTypeHasBeenSet; }

    /**
     * <p>Returns only backup jobs for the specified resources:</p> <ul> <li> <p>
     * <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p> <code>DocumentDB</code>
     * for Amazon DocumentDB (with MongoDB compatibility)</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSx</code> for Amazon FSx</p> </li> <li>
     * <p> <code>Neptune</code> for Amazon Neptune</p> </li> <li> <p> <code>RDS</code>
     * for Amazon Relational Database Service</p> </li> <li> <p> <code>Storage
     * Gateway</code> for Storage Gateway</p> </li> <li> <p> <code>S3</code> for Amazon
     * S3</p> </li> <li> <p> <code>VirtualMachine</code> for virtual machines</p> </li>
     * </ul>
     */
    inline void SetByResourceType(const Aws::String& value) { m_byResourceTypeHasBeenSet = true; m_byResourceType = value; }

    /**
     * <p>Returns only backup jobs for the specified resources:</p> <ul> <li> <p>
     * <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p> <code>DocumentDB</code>
     * for Amazon DocumentDB (with MongoDB compatibility)</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSx</code> for Amazon FSx</p> </li> <li>
     * <p> <code>Neptune</code> for Amazon Neptune</p> </li> <li> <p> <code>RDS</code>
     * for Amazon Relational Database Service</p> </li> <li> <p> <code>Storage
     * Gateway</code> for Storage Gateway</p> </li> <li> <p> <code>S3</code> for Amazon
     * S3</p> </li> <li> <p> <code>VirtualMachine</code> for virtual machines</p> </li>
     * </ul>
     */
    inline void SetByResourceType(Aws::String&& value) { m_byResourceTypeHasBeenSet = true; m_byResourceType = std::move(value); }

    /**
     * <p>Returns only backup jobs for the specified resources:</p> <ul> <li> <p>
     * <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p> <code>DocumentDB</code>
     * for Amazon DocumentDB (with MongoDB compatibility)</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSx</code> for Amazon FSx</p> </li> <li>
     * <p> <code>Neptune</code> for Amazon Neptune</p> </li> <li> <p> <code>RDS</code>
     * for Amazon Relational Database Service</p> </li> <li> <p> <code>Storage
     * Gateway</code> for Storage Gateway</p> </li> <li> <p> <code>S3</code> for Amazon
     * S3</p> </li> <li> <p> <code>VirtualMachine</code> for virtual machines</p> </li>
     * </ul>
     */
    inline void SetByResourceType(const char* value) { m_byResourceTypeHasBeenSet = true; m_byResourceType.assign(value); }

    /**
     * <p>Returns only backup jobs for the specified resources:</p> <ul> <li> <p>
     * <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p> <code>DocumentDB</code>
     * for Amazon DocumentDB (with MongoDB compatibility)</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSx</code> for Amazon FSx</p> </li> <li>
     * <p> <code>Neptune</code> for Amazon Neptune</p> </li> <li> <p> <code>RDS</code>
     * for Amazon Relational Database Service</p> </li> <li> <p> <code>Storage
     * Gateway</code> for Storage Gateway</p> </li> <li> <p> <code>S3</code> for Amazon
     * S3</p> </li> <li> <p> <code>VirtualMachine</code> for virtual machines</p> </li>
     * </ul>
     */
    inline ListCopyJobsRequest& WithByResourceType(const Aws::String& value) { SetByResourceType(value); return *this;}

    /**
     * <p>Returns only backup jobs for the specified resources:</p> <ul> <li> <p>
     * <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p> <code>DocumentDB</code>
     * for Amazon DocumentDB (with MongoDB compatibility)</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSx</code> for Amazon FSx</p> </li> <li>
     * <p> <code>Neptune</code> for Amazon Neptune</p> </li> <li> <p> <code>RDS</code>
     * for Amazon Relational Database Service</p> </li> <li> <p> <code>Storage
     * Gateway</code> for Storage Gateway</p> </li> <li> <p> <code>S3</code> for Amazon
     * S3</p> </li> <li> <p> <code>VirtualMachine</code> for virtual machines</p> </li>
     * </ul>
     */
    inline ListCopyJobsRequest& WithByResourceType(Aws::String&& value) { SetByResourceType(std::move(value)); return *this;}

    /**
     * <p>Returns only backup jobs for the specified resources:</p> <ul> <li> <p>
     * <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p> <code>DocumentDB</code>
     * for Amazon DocumentDB (with MongoDB compatibility)</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSx</code> for Amazon FSx</p> </li> <li>
     * <p> <code>Neptune</code> for Amazon Neptune</p> </li> <li> <p> <code>RDS</code>
     * for Amazon Relational Database Service</p> </li> <li> <p> <code>Storage
     * Gateway</code> for Storage Gateway</p> </li> <li> <p> <code>S3</code> for Amazon
     * S3</p> </li> <li> <p> <code>VirtualMachine</code> for virtual machines</p> </li>
     * </ul>
     */
    inline ListCopyJobsRequest& WithByResourceType(const char* value) { SetByResourceType(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source backup vault
     * to copy from; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline const Aws::String& GetByDestinationVaultArn() const{ return m_byDestinationVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source backup vault
     * to copy from; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline bool ByDestinationVaultArnHasBeenSet() const { return m_byDestinationVaultArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source backup vault
     * to copy from; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline void SetByDestinationVaultArn(const Aws::String& value) { m_byDestinationVaultArnHasBeenSet = true; m_byDestinationVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source backup vault
     * to copy from; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline void SetByDestinationVaultArn(Aws::String&& value) { m_byDestinationVaultArnHasBeenSet = true; m_byDestinationVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source backup vault
     * to copy from; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline void SetByDestinationVaultArn(const char* value) { m_byDestinationVaultArnHasBeenSet = true; m_byDestinationVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source backup vault
     * to copy from; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline ListCopyJobsRequest& WithByDestinationVaultArn(const Aws::String& value) { SetByDestinationVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source backup vault
     * to copy from; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline ListCopyJobsRequest& WithByDestinationVaultArn(Aws::String&& value) { SetByDestinationVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source backup vault
     * to copy from; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline ListCopyJobsRequest& WithByDestinationVaultArn(const char* value) { SetByDestinationVaultArn(value); return *this;}


    /**
     * <p>The account ID to list the jobs from. Returns only copy jobs associated with
     * the specified account ID.</p>
     */
    inline const Aws::String& GetByAccountId() const{ return m_byAccountId; }

    /**
     * <p>The account ID to list the jobs from. Returns only copy jobs associated with
     * the specified account ID.</p>
     */
    inline bool ByAccountIdHasBeenSet() const { return m_byAccountIdHasBeenSet; }

    /**
     * <p>The account ID to list the jobs from. Returns only copy jobs associated with
     * the specified account ID.</p>
     */
    inline void SetByAccountId(const Aws::String& value) { m_byAccountIdHasBeenSet = true; m_byAccountId = value; }

    /**
     * <p>The account ID to list the jobs from. Returns only copy jobs associated with
     * the specified account ID.</p>
     */
    inline void SetByAccountId(Aws::String&& value) { m_byAccountIdHasBeenSet = true; m_byAccountId = std::move(value); }

    /**
     * <p>The account ID to list the jobs from. Returns only copy jobs associated with
     * the specified account ID.</p>
     */
    inline void SetByAccountId(const char* value) { m_byAccountIdHasBeenSet = true; m_byAccountId.assign(value); }

    /**
     * <p>The account ID to list the jobs from. Returns only copy jobs associated with
     * the specified account ID.</p>
     */
    inline ListCopyJobsRequest& WithByAccountId(const Aws::String& value) { SetByAccountId(value); return *this;}

    /**
     * <p>The account ID to list the jobs from. Returns only copy jobs associated with
     * the specified account ID.</p>
     */
    inline ListCopyJobsRequest& WithByAccountId(Aws::String&& value) { SetByAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID to list the jobs from. Returns only copy jobs associated with
     * the specified account ID.</p>
     */
    inline ListCopyJobsRequest& WithByAccountId(const char* value) { SetByAccountId(value); return *this;}


    /**
     * <p>Returns only copy jobs completed before a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetByCompleteBefore() const{ return m_byCompleteBefore; }

    /**
     * <p>Returns only copy jobs completed before a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline bool ByCompleteBeforeHasBeenSet() const { return m_byCompleteBeforeHasBeenSet; }

    /**
     * <p>Returns only copy jobs completed before a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetByCompleteBefore(const Aws::Utils::DateTime& value) { m_byCompleteBeforeHasBeenSet = true; m_byCompleteBefore = value; }

    /**
     * <p>Returns only copy jobs completed before a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetByCompleteBefore(Aws::Utils::DateTime&& value) { m_byCompleteBeforeHasBeenSet = true; m_byCompleteBefore = std::move(value); }

    /**
     * <p>Returns only copy jobs completed before a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline ListCopyJobsRequest& WithByCompleteBefore(const Aws::Utils::DateTime& value) { SetByCompleteBefore(value); return *this;}

    /**
     * <p>Returns only copy jobs completed before a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline ListCopyJobsRequest& WithByCompleteBefore(Aws::Utils::DateTime&& value) { SetByCompleteBefore(std::move(value)); return *this;}


    /**
     * <p>Returns only copy jobs completed after a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetByCompleteAfter() const{ return m_byCompleteAfter; }

    /**
     * <p>Returns only copy jobs completed after a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline bool ByCompleteAfterHasBeenSet() const { return m_byCompleteAfterHasBeenSet; }

    /**
     * <p>Returns only copy jobs completed after a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetByCompleteAfter(const Aws::Utils::DateTime& value) { m_byCompleteAfterHasBeenSet = true; m_byCompleteAfter = value; }

    /**
     * <p>Returns only copy jobs completed after a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetByCompleteAfter(Aws::Utils::DateTime&& value) { m_byCompleteAfterHasBeenSet = true; m_byCompleteAfter = std::move(value); }

    /**
     * <p>Returns only copy jobs completed after a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline ListCopyJobsRequest& WithByCompleteAfter(const Aws::Utils::DateTime& value) { SetByCompleteAfter(value); return *this;}

    /**
     * <p>Returns only copy jobs completed after a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline ListCopyJobsRequest& WithByCompleteAfter(Aws::Utils::DateTime&& value) { SetByCompleteAfter(std::move(value)); return *this;}


    /**
     * <p>This is a filter to list child (nested) jobs based on parent job ID.</p>
     */
    inline const Aws::String& GetByParentJobId() const{ return m_byParentJobId; }

    /**
     * <p>This is a filter to list child (nested) jobs based on parent job ID.</p>
     */
    inline bool ByParentJobIdHasBeenSet() const { return m_byParentJobIdHasBeenSet; }

    /**
     * <p>This is a filter to list child (nested) jobs based on parent job ID.</p>
     */
    inline void SetByParentJobId(const Aws::String& value) { m_byParentJobIdHasBeenSet = true; m_byParentJobId = value; }

    /**
     * <p>This is a filter to list child (nested) jobs based on parent job ID.</p>
     */
    inline void SetByParentJobId(Aws::String&& value) { m_byParentJobIdHasBeenSet = true; m_byParentJobId = std::move(value); }

    /**
     * <p>This is a filter to list child (nested) jobs based on parent job ID.</p>
     */
    inline void SetByParentJobId(const char* value) { m_byParentJobIdHasBeenSet = true; m_byParentJobId.assign(value); }

    /**
     * <p>This is a filter to list child (nested) jobs based on parent job ID.</p>
     */
    inline ListCopyJobsRequest& WithByParentJobId(const Aws::String& value) { SetByParentJobId(value); return *this;}

    /**
     * <p>This is a filter to list child (nested) jobs based on parent job ID.</p>
     */
    inline ListCopyJobsRequest& WithByParentJobId(Aws::String&& value) { SetByParentJobId(std::move(value)); return *this;}

    /**
     * <p>This is a filter to list child (nested) jobs based on parent job ID.</p>
     */
    inline ListCopyJobsRequest& WithByParentJobId(const char* value) { SetByParentJobId(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_byResourceArn;
    bool m_byResourceArnHasBeenSet = false;

    CopyJobState m_byState;
    bool m_byStateHasBeenSet = false;

    Aws::Utils::DateTime m_byCreatedBefore;
    bool m_byCreatedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_byCreatedAfter;
    bool m_byCreatedAfterHasBeenSet = false;

    Aws::String m_byResourceType;
    bool m_byResourceTypeHasBeenSet = false;

    Aws::String m_byDestinationVaultArn;
    bool m_byDestinationVaultArnHasBeenSet = false;

    Aws::String m_byAccountId;
    bool m_byAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_byCompleteBefore;
    bool m_byCompleteBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_byCompleteAfter;
    bool m_byCompleteAfterHasBeenSet = false;

    Aws::String m_byParentJobId;
    bool m_byParentJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
