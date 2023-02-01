/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for <code>DescribeFileSystemAliases</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystemAliasesRequest">AWS
   * API Reference</a></p>
   */
  class DescribeFileSystemAliasesRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DescribeFileSystemAliasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFileSystemAliases"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline DescribeFileSystemAliasesRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline DescribeFileSystemAliasesRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline DescribeFileSystemAliasesRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The ID of the file system to return the associated DNS aliases for
     * (String).</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system to return the associated DNS aliases for
     * (String).</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the file system to return the associated DNS aliases for
     * (String).</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the file system to return the associated DNS aliases for
     * (String).</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system to return the associated DNS aliases for
     * (String).</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system to return the associated DNS aliases for
     * (String).</p>
     */
    inline DescribeFileSystemAliasesRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system to return the associated DNS aliases for
     * (String).</p>
     */
    inline DescribeFileSystemAliasesRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system to return the associated DNS aliases for
     * (String).</p>
     */
    inline DescribeFileSystemAliasesRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>Maximum number of DNS aliases to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of DNS aliases to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of DNS aliases to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of DNS aliases to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline DescribeFileSystemAliasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystemAliases</code> operation (String). If a token is
     * included in the request, the action continues the list from where the previous
     * returning call left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystemAliases</code> operation (String). If a token is
     * included in the request, the action continues the list from where the previous
     * returning call left off.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystemAliases</code> operation (String). If a token is
     * included in the request, the action continues the list from where the previous
     * returning call left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystemAliases</code> operation (String). If a token is
     * included in the request, the action continues the list from where the previous
     * returning call left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystemAliases</code> operation (String). If a token is
     * included in the request, the action continues the list from where the previous
     * returning call left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystemAliases</code> operation (String). If a token is
     * included in the request, the action continues the list from where the previous
     * returning call left off.</p>
     */
    inline DescribeFileSystemAliasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystemAliases</code> operation (String). If a token is
     * included in the request, the action continues the list from where the previous
     * returning call left off.</p>
     */
    inline DescribeFileSystemAliasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>DescribeFileSystemAliases</code> operation (String). If a token is
     * included in the request, the action continues the list from where the previous
     * returning call left off.</p>
     */
    inline DescribeFileSystemAliasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
