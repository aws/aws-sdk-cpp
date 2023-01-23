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
  class DescribeAccessPointsRequest : public EFSRequest
  {
  public:
    AWS_EFS_API DescribeAccessPointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccessPoints"; }

    AWS_EFS_API Aws::String SerializePayload() const override;

    AWS_EFS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>(Optional) When retrieving all access points for a file system, you can
     * optionally specify the <code>MaxItems</code> parameter to limit the number of
     * objects returned in a response. The default value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Optional) When retrieving all access points for a file system, you can
     * optionally specify the <code>MaxItems</code> parameter to limit the number of
     * objects returned in a response. The default value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Optional) When retrieving all access points for a file system, you can
     * optionally specify the <code>MaxItems</code> parameter to limit the number of
     * objects returned in a response. The default value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Optional) When retrieving all access points for a file system, you can
     * optionally specify the <code>MaxItems</code> parameter to limit the number of
     * objects returned in a response. The default value is 100. </p>
     */
    inline DescribeAccessPointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextMarker</code> in the subsequent request to fetch the next page of
     * access point descriptions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextMarker</code> in the subsequent request to fetch the next page of
     * access point descriptions.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextMarker</code> in the subsequent request to fetch the next page of
     * access point descriptions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextMarker</code> in the subsequent request to fetch the next page of
     * access point descriptions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextMarker</code> in the subsequent request to fetch the next page of
     * access point descriptions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextMarker</code> in the subsequent request to fetch the next page of
     * access point descriptions.</p>
     */
    inline DescribeAccessPointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextMarker</code> in the subsequent request to fetch the next page of
     * access point descriptions.</p>
     */
    inline DescribeAccessPointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextMarker</code> in the subsequent request to fetch the next page of
     * access point descriptions.</p>
     */
    inline DescribeAccessPointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>(Optional) Specifies an EFS access point to describe in the response;
     * mutually exclusive with <code>FileSystemId</code>.</p>
     */
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }

    /**
     * <p>(Optional) Specifies an EFS access point to describe in the response;
     * mutually exclusive with <code>FileSystemId</code>.</p>
     */
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }

    /**
     * <p>(Optional) Specifies an EFS access point to describe in the response;
     * mutually exclusive with <code>FileSystemId</code>.</p>
     */
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = value; }

    /**
     * <p>(Optional) Specifies an EFS access point to describe in the response;
     * mutually exclusive with <code>FileSystemId</code>.</p>
     */
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::move(value); }

    /**
     * <p>(Optional) Specifies an EFS access point to describe in the response;
     * mutually exclusive with <code>FileSystemId</code>.</p>
     */
    inline void SetAccessPointId(const char* value) { m_accessPointIdHasBeenSet = true; m_accessPointId.assign(value); }

    /**
     * <p>(Optional) Specifies an EFS access point to describe in the response;
     * mutually exclusive with <code>FileSystemId</code>.</p>
     */
    inline DescribeAccessPointsRequest& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}

    /**
     * <p>(Optional) Specifies an EFS access point to describe in the response;
     * mutually exclusive with <code>FileSystemId</code>.</p>
     */
    inline DescribeAccessPointsRequest& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies an EFS access point to describe in the response;
     * mutually exclusive with <code>FileSystemId</code>.</p>
     */
    inline DescribeAccessPointsRequest& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}


    /**
     * <p>(Optional) If you provide a <code>FileSystemId</code>, EFS returns all access
     * points for that file system; mutually exclusive with
     * <code>AccessPointId</code>.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>(Optional) If you provide a <code>FileSystemId</code>, EFS returns all access
     * points for that file system; mutually exclusive with
     * <code>AccessPointId</code>.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>(Optional) If you provide a <code>FileSystemId</code>, EFS returns all access
     * points for that file system; mutually exclusive with
     * <code>AccessPointId</code>.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>(Optional) If you provide a <code>FileSystemId</code>, EFS returns all access
     * points for that file system; mutually exclusive with
     * <code>AccessPointId</code>.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>(Optional) If you provide a <code>FileSystemId</code>, EFS returns all access
     * points for that file system; mutually exclusive with
     * <code>AccessPointId</code>.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>(Optional) If you provide a <code>FileSystemId</code>, EFS returns all access
     * points for that file system; mutually exclusive with
     * <code>AccessPointId</code>.</p>
     */
    inline DescribeAccessPointsRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>(Optional) If you provide a <code>FileSystemId</code>, EFS returns all access
     * points for that file system; mutually exclusive with
     * <code>AccessPointId</code>.</p>
     */
    inline DescribeAccessPointsRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>(Optional) If you provide a <code>FileSystemId</code>, EFS returns all access
     * points for that file system; mutually exclusive with
     * <code>AccessPointId</code>.</p>
     */
    inline DescribeAccessPointsRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_accessPointId;
    bool m_accessPointIdHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
