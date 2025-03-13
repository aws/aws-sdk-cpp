/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for <code>DescribeFileSystems</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystemsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeFileSystemsRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DescribeFileSystemsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFileSystems"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>IDs of the file systems whose descriptions you want to retrieve (String).</p>
     */
    inline const Aws::Vector<Aws::String>& GetFileSystemIds() const { return m_fileSystemIds; }
    inline bool FileSystemIdsHasBeenSet() const { return m_fileSystemIdsHasBeenSet; }
    template<typename FileSystemIdsT = Aws::Vector<Aws::String>>
    void SetFileSystemIds(FileSystemIdsT&& value) { m_fileSystemIdsHasBeenSet = true; m_fileSystemIds = std::forward<FileSystemIdsT>(value); }
    template<typename FileSystemIdsT = Aws::Vector<Aws::String>>
    DescribeFileSystemsRequest& WithFileSystemIds(FileSystemIdsT&& value) { SetFileSystemIds(std::forward<FileSystemIdsT>(value)); return *this;}
    template<typename FileSystemIdsT = Aws::String>
    DescribeFileSystemsRequest& AddFileSystemIds(FileSystemIdsT&& value) { m_fileSystemIdsHasBeenSet = true; m_fileSystemIds.emplace_back(std::forward<FileSystemIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of file systems to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeFileSystemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If a token present, the
     * operation continues the list from where the returning call left off.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFileSystemsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_fileSystemIds;
    bool m_fileSystemIdsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
