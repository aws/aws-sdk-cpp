/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EFS
{
namespace Model
{

  /**
   */
  class DescribeReplicationConfigurationsRequest : public EFSRequest
  {
  public:
    AWS_EFS_API DescribeReplicationConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReplicationConfigurations"; }

    AWS_EFS_API Aws::String SerializePayload() const override;

    AWS_EFS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>You can retrieve the replication configuration for a specific file system by
     * providing its file system ID.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>You can retrieve the replication configuration for a specific file system by
     * providing its file system ID.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>You can retrieve the replication configuration for a specific file system by
     * providing its file system ID.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>You can retrieve the replication configuration for a specific file system by
     * providing its file system ID.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>You can retrieve the replication configuration for a specific file system by
     * providing its file system ID.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>You can retrieve the replication configuration for a specific file system by
     * providing its file system ID.</p>
     */
    inline DescribeReplicationConfigurationsRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>You can retrieve the replication configuration for a specific file system by
     * providing its file system ID.</p>
     */
    inline DescribeReplicationConfigurationsRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>You can retrieve the replication configuration for a specific file system by
     * providing its file system ID.</p>
     */
    inline DescribeReplicationConfigurationsRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextToken</code> in a subsequent request to fetch the next page of
     * output.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextToken</code> in a subsequent request to fetch the next page of
     * output.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextToken</code> in a subsequent request to fetch the next page of
     * output.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextToken</code> in a subsequent request to fetch the next page of
     * output.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextToken</code> in a subsequent request to fetch the next page of
     * output.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextToken</code> in a subsequent request to fetch the next page of
     * output.</p>
     */
    inline DescribeReplicationConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextToken</code> in a subsequent request to fetch the next page of
     * output.</p>
     */
    inline DescribeReplicationConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextToken</code> in a subsequent request to fetch the next page of
     * output.</p>
     */
    inline DescribeReplicationConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>(Optional) To limit the number of objects returned in a response, you can
     * specify the <code>MaxItems</code> parameter. The default value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Optional) To limit the number of objects returned in a response, you can
     * specify the <code>MaxItems</code> parameter. The default value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Optional) To limit the number of objects returned in a response, you can
     * specify the <code>MaxItems</code> parameter. The default value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Optional) To limit the number of objects returned in a response, you can
     * specify the <code>MaxItems</code> parameter. The default value is 100. </p>
     */
    inline DescribeReplicationConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
