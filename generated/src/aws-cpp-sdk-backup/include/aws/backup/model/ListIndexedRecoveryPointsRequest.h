/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/IndexStatus.h>
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
  class ListIndexedRecoveryPointsRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListIndexedRecoveryPointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIndexedRecoveryPoints"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The next item following a partial list of returned recovery points.</p>
     * <p>For example, if a request is made to return <code>MaxResults</code> number of
     * indexed recovery points, <code>NextToken</code> allows you to return more items
     * in your list starting at the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIndexedRecoveryPointsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of resource list items to be returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListIndexedRecoveryPointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of the Amazon Resource Name (ARN) that uniquely identifies the
     * source resource.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const { return m_sourceResourceArn; }
    inline bool SourceResourceArnHasBeenSet() const { return m_sourceResourceArnHasBeenSet; }
    template<typename SourceResourceArnT = Aws::String>
    void SetSourceResourceArn(SourceResourceArnT&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::forward<SourceResourceArnT>(value); }
    template<typename SourceResourceArnT = Aws::String>
    ListIndexedRecoveryPointsRequest& WithSourceResourceArn(SourceResourceArnT&& value) { SetSourceResourceArn(std::forward<SourceResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only indexed recovery points that were created before the specified
     * date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    void SetCreatedBefore(CreatedBeforeT&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::forward<CreatedBeforeT>(value); }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    ListIndexedRecoveryPointsRequest& WithCreatedBefore(CreatedBeforeT&& value) { SetCreatedBefore(std::forward<CreatedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only indexed recovery points that were created after the specified
     * date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    void SetCreatedAfter(CreatedAfterT&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::forward<CreatedAfterT>(value); }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    ListIndexedRecoveryPointsRequest& WithCreatedAfter(CreatedAfterT&& value) { SetCreatedAfter(std::forward<CreatedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of indexed recovery points for the specified resource
     * type(s).</p> <p>Accepted values include:</p> <ul> <li> <p> <code>EBS</code> for
     * Amazon Elastic Block Store</p> </li> <li> <p> <code>S3</code> for Amazon Simple
     * Storage Service (Amazon S3)</p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ListIndexedRecoveryPointsRequest& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include this parameter to filter the returned list by the indicated
     * statuses.</p> <p>Accepted values: <code>PENDING</code> | <code>ACTIVE</code> |
     * <code>FAILED</code> | <code>DELETING</code> </p> <p>A recovery point with an
     * index that has the status of <code>ACTIVE</code> can be included in a
     * search.</p>
     */
    inline IndexStatus GetIndexStatus() const { return m_indexStatus; }
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    inline void SetIndexStatus(IndexStatus value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline ListIndexedRecoveryPointsRequest& WithIndexStatus(IndexStatus value) { SetIndexStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_sourceResourceArn;
    bool m_sourceResourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore{};
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter{};
    bool m_createdAfterHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    IndexStatus m_indexStatus{IndexStatus::NOT_SET};
    bool m_indexStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
