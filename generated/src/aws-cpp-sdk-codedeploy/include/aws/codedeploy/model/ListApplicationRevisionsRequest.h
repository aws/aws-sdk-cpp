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
    AWS_CODEDEPLOY_API ListApplicationRevisionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplicationRevisions"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of an CodeDeploy application associated with the user or Amazon Web
     * Services account. </p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ListApplicationRevisionsRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column name to use to sort the list results:</p> <ul> <li> <p>
     * <code>registerTime</code>: Sort by the time the revisions were registered with
     * CodeDeploy.</p> </li> <li> <p> <code>firstUsedTime</code>: Sort by the time the
     * revisions were first used in a deployment.</p> </li> <li> <p>
     * <code>lastUsedTime</code>: Sort by the time the revisions were last used in a
     * deployment.</p> </li> </ul> <p> If not specified or set to null, the results are
     * returned in an arbitrary order. </p>
     */
    inline ApplicationRevisionSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ApplicationRevisionSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListApplicationRevisionsRequest& WithSortBy(ApplicationRevisionSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The order in which to sort the list results: </p> <ul> <li> <p>
     * <code>ascending</code>: ascending order.</p> </li> <li> <p>
     * <code>descending</code>: descending order.</p> </li> </ul> <p>If not specified,
     * the results are sorted in ascending order.</p> <p>If set to null, the results
     * are sorted in an arbitrary order.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListApplicationRevisionsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An Amazon S3 bucket name to limit the search for revisions. </p> <p> If set
     * to null, all of the user's buckets are searched. </p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    ListApplicationRevisionsRequest& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A key prefix for the set of Amazon S3 objects to limit the search for
     * revisions. </p>
     */
    inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
    template<typename S3KeyPrefixT = Aws::String>
    void SetS3KeyPrefix(S3KeyPrefixT&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value); }
    template<typename S3KeyPrefixT = Aws::String>
    ListApplicationRevisionsRequest& WithS3KeyPrefix(S3KeyPrefixT&& value) { SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether to list revisions based on whether the revision is the target
     * revision of a deployment group: </p> <ul> <li> <p> <code>include</code>: List
     * revisions that are target revisions of a deployment group.</p> </li> <li> <p>
     * <code>exclude</code>: Do not list revisions that are target revisions of a
     * deployment group.</p> </li> <li> <p> <code>ignore</code>: List all
     * revisions.</p> </li> </ul>
     */
    inline ListStateFilterAction GetDeployed() const { return m_deployed; }
    inline bool DeployedHasBeenSet() const { return m_deployedHasBeenSet; }
    inline void SetDeployed(ListStateFilterAction value) { m_deployedHasBeenSet = true; m_deployed = value; }
    inline ListApplicationRevisionsRequest& WithDeployed(ListStateFilterAction value) { SetDeployed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier returned from the previous
     * <code>ListApplicationRevisions</code> call. It can be used to return the next
     * set of applications in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationRevisionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    ApplicationRevisionSortBy m_sortBy{ApplicationRevisionSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    ListStateFilterAction m_deployed{ListStateFilterAction::NOT_SET};
    bool m_deployedHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
