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
    AWS_FSX_API DescribeFileSystemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFileSystems"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>IDs of the file systems whose descriptions you want to retrieve (String).</p>
     */
    inline const Aws::Vector<Aws::String>& GetFileSystemIds() const{ return m_fileSystemIds; }

    /**
     * <p>IDs of the file systems whose descriptions you want to retrieve (String).</p>
     */
    inline bool FileSystemIdsHasBeenSet() const { return m_fileSystemIdsHasBeenSet; }

    /**
     * <p>IDs of the file systems whose descriptions you want to retrieve (String).</p>
     */
    inline void SetFileSystemIds(const Aws::Vector<Aws::String>& value) { m_fileSystemIdsHasBeenSet = true; m_fileSystemIds = value; }

    /**
     * <p>IDs of the file systems whose descriptions you want to retrieve (String).</p>
     */
    inline void SetFileSystemIds(Aws::Vector<Aws::String>&& value) { m_fileSystemIdsHasBeenSet = true; m_fileSystemIds = std::move(value); }

    /**
     * <p>IDs of the file systems whose descriptions you want to retrieve (String).</p>
     */
    inline DescribeFileSystemsRequest& WithFileSystemIds(const Aws::Vector<Aws::String>& value) { SetFileSystemIds(value); return *this;}

    /**
     * <p>IDs of the file systems whose descriptions you want to retrieve (String).</p>
     */
    inline DescribeFileSystemsRequest& WithFileSystemIds(Aws::Vector<Aws::String>&& value) { SetFileSystemIds(std::move(value)); return *this;}

    /**
     * <p>IDs of the file systems whose descriptions you want to retrieve (String).</p>
     */
    inline DescribeFileSystemsRequest& AddFileSystemIds(const Aws::String& value) { m_fileSystemIdsHasBeenSet = true; m_fileSystemIds.push_back(value); return *this; }

    /**
     * <p>IDs of the file systems whose descriptions you want to retrieve (String).</p>
     */
    inline DescribeFileSystemsRequest& AddFileSystemIds(Aws::String&& value) { m_fileSystemIdsHasBeenSet = true; m_fileSystemIds.push_back(std::move(value)); return *this; }

    /**
     * <p>IDs of the file systems whose descriptions you want to retrieve (String).</p>
     */
    inline DescribeFileSystemsRequest& AddFileSystemIds(const char* value) { m_fileSystemIdsHasBeenSet = true; m_fileSystemIds.push_back(value); return *this; }


    /**
     * <p>Maximum number of file systems to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of file systems to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of file systems to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of file systems to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline DescribeFileSystemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If a token present, the
     * operation continues the list from where the returning call left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If a token present, the
     * operation continues the list from where the returning call left off.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If a token present, the
     * operation continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If a token present, the
     * operation continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If a token present, the
     * operation continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If a token present, the
     * operation continues the list from where the returning call left off.</p>
     */
    inline DescribeFileSystemsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If a token present, the
     * operation continues the list from where the returning call left off.</p>
     */
    inline DescribeFileSystemsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If a token present, the
     * operation continues the list from where the returning call left off.</p>
     */
    inline DescribeFileSystemsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_fileSystemIds;
    bool m_fileSystemIdsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
