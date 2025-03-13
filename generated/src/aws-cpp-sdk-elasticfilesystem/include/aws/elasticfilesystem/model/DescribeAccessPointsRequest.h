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
    AWS_EFS_API DescribeAccessPointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccessPoints"; }

    AWS_EFS_API Aws::String SerializePayload() const override;

    AWS_EFS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>(Optional) When retrieving all access points for a file system, you can
     * optionally specify the <code>MaxItems</code> parameter to limit the number of
     * objects returned in a response. The default value is 100. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeAccessPointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>NextToken</code> is present if the response is paginated. You can use
     * <code>NextMarker</code> in the subsequent request to fetch the next page of
     * access point descriptions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAccessPointsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Specifies an EFS access point to describe in the response;
     * mutually exclusive with <code>FileSystemId</code>.</p>
     */
    inline const Aws::String& GetAccessPointId() const { return m_accessPointId; }
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }
    template<typename AccessPointIdT = Aws::String>
    void SetAccessPointId(AccessPointIdT&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::forward<AccessPointIdT>(value); }
    template<typename AccessPointIdT = Aws::String>
    DescribeAccessPointsRequest& WithAccessPointId(AccessPointIdT&& value) { SetAccessPointId(std::forward<AccessPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) If you provide a <code>FileSystemId</code>, EFS returns all access
     * points for that file system; mutually exclusive with
     * <code>AccessPointId</code>.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    DescribeAccessPointsRequest& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
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
