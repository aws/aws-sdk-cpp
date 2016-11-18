/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/ApplicationRevisionSortBy.h>
#include <aws/codedeploy/model/SortOrder.h>
#include <aws/codedeploy/model/ListStateFilterAction.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a list application revisions operation.</p>
   */
  class AWS_CODEDEPLOY_API ListApplicationRevisionsRequest : public CodeDeployRequest
  {
  public:
    ListApplicationRevisionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline ListApplicationRevisionsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline ListApplicationRevisionsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline ListApplicationRevisionsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li>
     * <p>registerTime: Sort by the time the revisions were registered with AWS
     * CodeDeploy.</p> </li> <li> <p>firstUsedTime: Sort by the time the revisions were
     * first used in a deployment.</p> </li> <li> <p>lastUsedTime: Sort by the time the
     * revisions were last used in a deployment.</p> </li> </ul> <p>If not specified or
     * set to null, the results will be returned in an arbitrary order.</p>
     */
    inline const ApplicationRevisionSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li>
     * <p>registerTime: Sort by the time the revisions were registered with AWS
     * CodeDeploy.</p> </li> <li> <p>firstUsedTime: Sort by the time the revisions were
     * first used in a deployment.</p> </li> <li> <p>lastUsedTime: Sort by the time the
     * revisions were last used in a deployment.</p> </li> </ul> <p>If not specified or
     * set to null, the results will be returned in an arbitrary order.</p>
     */
    inline void SetSortBy(const ApplicationRevisionSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li>
     * <p>registerTime: Sort by the time the revisions were registered with AWS
     * CodeDeploy.</p> </li> <li> <p>firstUsedTime: Sort by the time the revisions were
     * first used in a deployment.</p> </li> <li> <p>lastUsedTime: Sort by the time the
     * revisions were last used in a deployment.</p> </li> </ul> <p>If not specified or
     * set to null, the results will be returned in an arbitrary order.</p>
     */
    inline void SetSortBy(ApplicationRevisionSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li>
     * <p>registerTime: Sort by the time the revisions were registered with AWS
     * CodeDeploy.</p> </li> <li> <p>firstUsedTime: Sort by the time the revisions were
     * first used in a deployment.</p> </li> <li> <p>lastUsedTime: Sort by the time the
     * revisions were last used in a deployment.</p> </li> </ul> <p>If not specified or
     * set to null, the results will be returned in an arbitrary order.</p>
     */
    inline ListApplicationRevisionsRequest& WithSortBy(const ApplicationRevisionSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li>
     * <p>registerTime: Sort by the time the revisions were registered with AWS
     * CodeDeploy.</p> </li> <li> <p>firstUsedTime: Sort by the time the revisions were
     * first used in a deployment.</p> </li> <li> <p>lastUsedTime: Sort by the time the
     * revisions were last used in a deployment.</p> </li> </ul> <p>If not specified or
     * set to null, the results will be returned in an arbitrary order.</p>
     */
    inline ListApplicationRevisionsRequest& WithSortBy(ApplicationRevisionSortBy&& value) { SetSortBy(value); return *this;}

    /**
     * <p>The order in which to sort the list results:</p> <ul> <li> <p>ascending:
     * ascending order.</p> </li> <li> <p>descending: descending order.</p> </li> </ul>
     * <p>If not specified, the results will be sorted in ascending order.</p> <p>If
     * set to null, the results will be sorted in an arbitrary order.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order in which to sort the list results:</p> <ul> <li> <p>ascending:
     * ascending order.</p> </li> <li> <p>descending: descending order.</p> </li> </ul>
     * <p>If not specified, the results will be sorted in ascending order.</p> <p>If
     * set to null, the results will be sorted in an arbitrary order.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order in which to sort the list results:</p> <ul> <li> <p>ascending:
     * ascending order.</p> </li> <li> <p>descending: descending order.</p> </li> </ul>
     * <p>If not specified, the results will be sorted in ascending order.</p> <p>If
     * set to null, the results will be sorted in an arbitrary order.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order in which to sort the list results:</p> <ul> <li> <p>ascending:
     * ascending order.</p> </li> <li> <p>descending: descending order.</p> </li> </ul>
     * <p>If not specified, the results will be sorted in ascending order.</p> <p>If
     * set to null, the results will be sorted in an arbitrary order.</p>
     */
    inline ListApplicationRevisionsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order in which to sort the list results:</p> <ul> <li> <p>ascending:
     * ascending order.</p> </li> <li> <p>descending: descending order.</p> </li> </ul>
     * <p>If not specified, the results will be sorted in ascending order.</p> <p>If
     * set to null, the results will be sorted in an arbitrary order.</p>
     */
    inline ListApplicationRevisionsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(value); return *this;}

    /**
     * <p>An Amazon S3 bucket name to limit the search for revisions.</p> <p>If set to
     * null, all of the user's buckets will be searched.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>An Amazon S3 bucket name to limit the search for revisions.</p> <p>If set to
     * null, all of the user's buckets will be searched.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>An Amazon S3 bucket name to limit the search for revisions.</p> <p>If set to
     * null, all of the user's buckets will be searched.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>An Amazon S3 bucket name to limit the search for revisions.</p> <p>If set to
     * null, all of the user's buckets will be searched.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>An Amazon S3 bucket name to limit the search for revisions.</p> <p>If set to
     * null, all of the user's buckets will be searched.</p>
     */
    inline ListApplicationRevisionsRequest& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>An Amazon S3 bucket name to limit the search for revisions.</p> <p>If set to
     * null, all of the user's buckets will be searched.</p>
     */
    inline ListApplicationRevisionsRequest& WithS3Bucket(Aws::String&& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>An Amazon S3 bucket name to limit the search for revisions.</p> <p>If set to
     * null, all of the user's buckets will be searched.</p>
     */
    inline ListApplicationRevisionsRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

    /**
     * <p>A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions.</p>
     */
    inline ListApplicationRevisionsRequest& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions.</p>
     */
    inline ListApplicationRevisionsRequest& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions.</p>
     */
    inline ListApplicationRevisionsRequest& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>Whether to list revisions based on whether the revision is the target
     * revision of an deployment group:</p> <ul> <li> <p>include: List revisions that
     * are target revisions of a deployment group.</p> </li> <li> <p>exclude: Do not
     * list revisions that are target revisions of a deployment group.</p> </li> <li>
     * <p>ignore: List all revisions.</p> </li> </ul>
     */
    inline const ListStateFilterAction& GetDeployed() const{ return m_deployed; }

    /**
     * <p>Whether to list revisions based on whether the revision is the target
     * revision of an deployment group:</p> <ul> <li> <p>include: List revisions that
     * are target revisions of a deployment group.</p> </li> <li> <p>exclude: Do not
     * list revisions that are target revisions of a deployment group.</p> </li> <li>
     * <p>ignore: List all revisions.</p> </li> </ul>
     */
    inline void SetDeployed(const ListStateFilterAction& value) { m_deployedHasBeenSet = true; m_deployed = value; }

    /**
     * <p>Whether to list revisions based on whether the revision is the target
     * revision of an deployment group:</p> <ul> <li> <p>include: List revisions that
     * are target revisions of a deployment group.</p> </li> <li> <p>exclude: Do not
     * list revisions that are target revisions of a deployment group.</p> </li> <li>
     * <p>ignore: List all revisions.</p> </li> </ul>
     */
    inline void SetDeployed(ListStateFilterAction&& value) { m_deployedHasBeenSet = true; m_deployed = value; }

    /**
     * <p>Whether to list revisions based on whether the revision is the target
     * revision of an deployment group:</p> <ul> <li> <p>include: List revisions that
     * are target revisions of a deployment group.</p> </li> <li> <p>exclude: Do not
     * list revisions that are target revisions of a deployment group.</p> </li> <li>
     * <p>ignore: List all revisions.</p> </li> </ul>
     */
    inline ListApplicationRevisionsRequest& WithDeployed(const ListStateFilterAction& value) { SetDeployed(value); return *this;}

    /**
     * <p>Whether to list revisions based on whether the revision is the target
     * revision of an deployment group:</p> <ul> <li> <p>include: List revisions that
     * are target revisions of a deployment group.</p> </li> <li> <p>exclude: Do not
     * list revisions that are target revisions of a deployment group.</p> </li> <li>
     * <p>ignore: List all revisions.</p> </li> </ul>
     */
    inline ListApplicationRevisionsRequest& WithDeployed(ListStateFilterAction&& value) { SetDeployed(value); return *this;}

    /**
     * <p>An identifier returned from the previous list application revisions call. It
     * can be used to return the next set of applications in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier returned from the previous list application revisions call. It
     * can be used to return the next set of applications in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier returned from the previous list application revisions call. It
     * can be used to return the next set of applications in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier returned from the previous list application revisions call. It
     * can be used to return the next set of applications in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier returned from the previous list application revisions call. It
     * can be used to return the next set of applications in the list.</p>
     */
    inline ListApplicationRevisionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier returned from the previous list application revisions call. It
     * can be used to return the next set of applications in the list.</p>
     */
    inline ListApplicationRevisionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier returned from the previous list application revisions call. It
     * can be used to return the next set of applications in the list.</p>
     */
    inline ListApplicationRevisionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    ApplicationRevisionSortBy m_sortBy;
    bool m_sortByHasBeenSet;
    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;
    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;
    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet;
    ListStateFilterAction m_deployed;
    bool m_deployedHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
