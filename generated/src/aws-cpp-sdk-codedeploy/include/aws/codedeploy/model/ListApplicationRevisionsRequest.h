/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/ApplicationRevisionSortBy.h>
#include <aws/codedeploy/model/SortOrder.h>
#include <aws/codedeploy/model/ListStateFilterAction.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p> Represents the input of a <code>ListApplicationRevisions</code> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplicationRevisionsInput">AWS
   * API Reference</a></p>
   */
  class ListApplicationRevisionsRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API ListApplicationRevisionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplicationRevisions"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account. </p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p> The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account. </p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p> The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account. </p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p> The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account. </p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p> The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account. </p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p> The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account. </p>
     */
    inline ListApplicationRevisionsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p> The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account. </p>
     */
    inline ListApplicationRevisionsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p> The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account. </p>
     */
    inline ListApplicationRevisionsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li> <p>
     * <code>registerTime</code>: Sort by the time the revisions were registered with
     * CodeDeploy.</p> </li> <li> <p> <code>firstUsedTime</code>: Sort by the time the
     * revisions were first used in a deployment.</p> </li> <li> <p>
     * <code>lastUsedTime</code>: Sort by the time the revisions were last used in a
     * deployment.</p> </li> </ul> <p> If not specified or set to null, the results are
     * returned in an arbitrary order. </p>
     */
    inline const ApplicationRevisionSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li> <p>
     * <code>registerTime</code>: Sort by the time the revisions were registered with
     * CodeDeploy.</p> </li> <li> <p> <code>firstUsedTime</code>: Sort by the time the
     * revisions were first used in a deployment.</p> </li> <li> <p>
     * <code>lastUsedTime</code>: Sort by the time the revisions were last used in a
     * deployment.</p> </li> </ul> <p> If not specified or set to null, the results are
     * returned in an arbitrary order. </p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li> <p>
     * <code>registerTime</code>: Sort by the time the revisions were registered with
     * CodeDeploy.</p> </li> <li> <p> <code>firstUsedTime</code>: Sort by the time the
     * revisions were first used in a deployment.</p> </li> <li> <p>
     * <code>lastUsedTime</code>: Sort by the time the revisions were last used in a
     * deployment.</p> </li> </ul> <p> If not specified or set to null, the results are
     * returned in an arbitrary order. </p>
     */
    inline void SetSortBy(const ApplicationRevisionSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li> <p>
     * <code>registerTime</code>: Sort by the time the revisions were registered with
     * CodeDeploy.</p> </li> <li> <p> <code>firstUsedTime</code>: Sort by the time the
     * revisions were first used in a deployment.</p> </li> <li> <p>
     * <code>lastUsedTime</code>: Sort by the time the revisions were last used in a
     * deployment.</p> </li> </ul> <p> If not specified or set to null, the results are
     * returned in an arbitrary order. </p>
     */
    inline void SetSortBy(ApplicationRevisionSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li> <p>
     * <code>registerTime</code>: Sort by the time the revisions were registered with
     * CodeDeploy.</p> </li> <li> <p> <code>firstUsedTime</code>: Sort by the time the
     * revisions were first used in a deployment.</p> </li> <li> <p>
     * <code>lastUsedTime</code>: Sort by the time the revisions were last used in a
     * deployment.</p> </li> </ul> <p> If not specified or set to null, the results are
     * returned in an arbitrary order. </p>
     */
    inline ListApplicationRevisionsRequest& WithSortBy(const ApplicationRevisionSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li> <p>
     * <code>registerTime</code>: Sort by the time the revisions were registered with
     * CodeDeploy.</p> </li> <li> <p> <code>firstUsedTime</code>: Sort by the time the
     * revisions were first used in a deployment.</p> </li> <li> <p>
     * <code>lastUsedTime</code>: Sort by the time the revisions were last used in a
     * deployment.</p> </li> </ul> <p> If not specified or set to null, the results are
     * returned in an arbitrary order. </p>
     */
    inline ListApplicationRevisionsRequest& WithSortBy(ApplicationRevisionSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p> The order in which to sort the list results: </p> <ul> <li> <p>
     * <code>ascending</code>: ascending order.</p> </li> <li> <p>
     * <code>descending</code>: descending order.</p> </li> </ul> <p>If not specified,
     * the results are sorted in ascending order.</p> <p>If set to null, the results
     * are sorted in an arbitrary order.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p> The order in which to sort the list results: </p> <ul> <li> <p>
     * <code>ascending</code>: ascending order.</p> </li> <li> <p>
     * <code>descending</code>: descending order.</p> </li> </ul> <p>If not specified,
     * the results are sorted in ascending order.</p> <p>If set to null, the results
     * are sorted in an arbitrary order.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p> The order in which to sort the list results: </p> <ul> <li> <p>
     * <code>ascending</code>: ascending order.</p> </li> <li> <p>
     * <code>descending</code>: descending order.</p> </li> </ul> <p>If not specified,
     * the results are sorted in ascending order.</p> <p>If set to null, the results
     * are sorted in an arbitrary order.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p> The order in which to sort the list results: </p> <ul> <li> <p>
     * <code>ascending</code>: ascending order.</p> </li> <li> <p>
     * <code>descending</code>: descending order.</p> </li> </ul> <p>If not specified,
     * the results are sorted in ascending order.</p> <p>If set to null, the results
     * are sorted in an arbitrary order.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p> The order in which to sort the list results: </p> <ul> <li> <p>
     * <code>ascending</code>: ascending order.</p> </li> <li> <p>
     * <code>descending</code>: descending order.</p> </li> </ul> <p>If not specified,
     * the results are sorted in ascending order.</p> <p>If set to null, the results
     * are sorted in an arbitrary order.</p>
     */
    inline ListApplicationRevisionsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p> The order in which to sort the list results: </p> <ul> <li> <p>
     * <code>ascending</code>: ascending order.</p> </li> <li> <p>
     * <code>descending</code>: descending order.</p> </li> </ul> <p>If not specified,
     * the results are sorted in ascending order.</p> <p>If set to null, the results
     * are sorted in an arbitrary order.</p>
     */
    inline ListApplicationRevisionsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p> An Amazon S3 bucket name to limit the search for revisions. </p> <p> If set
     * to null, all of the user's buckets are searched. </p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p> An Amazon S3 bucket name to limit the search for revisions. </p> <p> If set
     * to null, all of the user's buckets are searched. </p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p> An Amazon S3 bucket name to limit the search for revisions. </p> <p> If set
     * to null, all of the user's buckets are searched. </p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p> An Amazon S3 bucket name to limit the search for revisions. </p> <p> If set
     * to null, all of the user's buckets are searched. </p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p> An Amazon S3 bucket name to limit the search for revisions. </p> <p> If set
     * to null, all of the user's buckets are searched. </p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p> An Amazon S3 bucket name to limit the search for revisions. </p> <p> If set
     * to null, all of the user's buckets are searched. </p>
     */
    inline ListApplicationRevisionsRequest& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p> An Amazon S3 bucket name to limit the search for revisions. </p> <p> If set
     * to null, all of the user's buckets are searched. </p>
     */
    inline ListApplicationRevisionsRequest& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p> An Amazon S3 bucket name to limit the search for revisions. </p> <p> If set
     * to null, all of the user's buckets are searched. </p>
     */
    inline ListApplicationRevisionsRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p> A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions. </p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p> A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions. </p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p> A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions. </p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p> A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions. </p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p> A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions. </p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p> A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions. </p>
     */
    inline ListApplicationRevisionsRequest& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p> A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions. </p>
     */
    inline ListApplicationRevisionsRequest& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p> A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions. </p>
     */
    inline ListApplicationRevisionsRequest& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}


    /**
     * <p> Whether to list revisions based on whether the revision is the target
     * revision of a deployment group: </p> <ul> <li> <p> <code>include</code>: List
     * revisions that are target revisions of a deployment group.</p> </li> <li> <p>
     * <code>exclude</code>: Do not list revisions that are target revisions of a
     * deployment group.</p> </li> <li> <p> <code>ignore</code>: List all
     * revisions.</p> </li> </ul>
     */
    inline const ListStateFilterAction& GetDeployed() const{ return m_deployed; }

    /**
     * <p> Whether to list revisions based on whether the revision is the target
     * revision of a deployment group: </p> <ul> <li> <p> <code>include</code>: List
     * revisions that are target revisions of a deployment group.</p> </li> <li> <p>
     * <code>exclude</code>: Do not list revisions that are target revisions of a
     * deployment group.</p> </li> <li> <p> <code>ignore</code>: List all
     * revisions.</p> </li> </ul>
     */
    inline bool DeployedHasBeenSet() const { return m_deployedHasBeenSet; }

    /**
     * <p> Whether to list revisions based on whether the revision is the target
     * revision of a deployment group: </p> <ul> <li> <p> <code>include</code>: List
     * revisions that are target revisions of a deployment group.</p> </li> <li> <p>
     * <code>exclude</code>: Do not list revisions that are target revisions of a
     * deployment group.</p> </li> <li> <p> <code>ignore</code>: List all
     * revisions.</p> </li> </ul>
     */
    inline void SetDeployed(const ListStateFilterAction& value) { m_deployedHasBeenSet = true; m_deployed = value; }

    /**
     * <p> Whether to list revisions based on whether the revision is the target
     * revision of a deployment group: </p> <ul> <li> <p> <code>include</code>: List
     * revisions that are target revisions of a deployment group.</p> </li> <li> <p>
     * <code>exclude</code>: Do not list revisions that are target revisions of a
     * deployment group.</p> </li> <li> <p> <code>ignore</code>: List all
     * revisions.</p> </li> </ul>
     */
    inline void SetDeployed(ListStateFilterAction&& value) { m_deployedHasBeenSet = true; m_deployed = std::move(value); }

    /**
     * <p> Whether to list revisions based on whether the revision is the target
     * revision of a deployment group: </p> <ul> <li> <p> <code>include</code>: List
     * revisions that are target revisions of a deployment group.</p> </li> <li> <p>
     * <code>exclude</code>: Do not list revisions that are target revisions of a
     * deployment group.</p> </li> <li> <p> <code>ignore</code>: List all
     * revisions.</p> </li> </ul>
     */
    inline ListApplicationRevisionsRequest& WithDeployed(const ListStateFilterAction& value) { SetDeployed(value); return *this;}

    /**
     * <p> Whether to list revisions based on whether the revision is the target
     * revision of a deployment group: </p> <ul> <li> <p> <code>include</code>: List
     * revisions that are target revisions of a deployment group.</p> </li> <li> <p>
     * <code>exclude</code>: Do not list revisions that are target revisions of a
     * deployment group.</p> </li> <li> <p> <code>ignore</code>: List all
     * revisions.</p> </li> </ul>
     */
    inline ListApplicationRevisionsRequest& WithDeployed(ListStateFilterAction&& value) { SetDeployed(std::move(value)); return *this;}


    /**
     * <p>An identifier returned from the previous
     * <code>ListApplicationRevisions</code> call. It can be used to return the next
     * set of applications in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier returned from the previous
     * <code>ListApplicationRevisions</code> call. It can be used to return the next
     * set of applications in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier returned from the previous
     * <code>ListApplicationRevisions</code> call. It can be used to return the next
     * set of applications in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier returned from the previous
     * <code>ListApplicationRevisions</code> call. It can be used to return the next
     * set of applications in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier returned from the previous
     * <code>ListApplicationRevisions</code> call. It can be used to return the next
     * set of applications in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier returned from the previous
     * <code>ListApplicationRevisions</code> call. It can be used to return the next
     * set of applications in the list.</p>
     */
    inline ListApplicationRevisionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier returned from the previous
     * <code>ListApplicationRevisions</code> call. It can be used to return the next
     * set of applications in the list.</p>
     */
    inline ListApplicationRevisionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier returned from the previous
     * <code>ListApplicationRevisions</code> call. It can be used to return the next
     * set of applications in the list.</p>
     */
    inline ListApplicationRevisionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    ApplicationRevisionSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    ListStateFilterAction m_deployed;
    bool m_deployedHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
