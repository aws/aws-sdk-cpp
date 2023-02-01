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
   */
  class DescribeFileCachesRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DescribeFileCachesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFileCaches"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>IDs of the caches whose descriptions you want to retrieve (String).</p>
     */
    inline const Aws::Vector<Aws::String>& GetFileCacheIds() const{ return m_fileCacheIds; }

    /**
     * <p>IDs of the caches whose descriptions you want to retrieve (String).</p>
     */
    inline bool FileCacheIdsHasBeenSet() const { return m_fileCacheIdsHasBeenSet; }

    /**
     * <p>IDs of the caches whose descriptions you want to retrieve (String).</p>
     */
    inline void SetFileCacheIds(const Aws::Vector<Aws::String>& value) { m_fileCacheIdsHasBeenSet = true; m_fileCacheIds = value; }

    /**
     * <p>IDs of the caches whose descriptions you want to retrieve (String).</p>
     */
    inline void SetFileCacheIds(Aws::Vector<Aws::String>&& value) { m_fileCacheIdsHasBeenSet = true; m_fileCacheIds = std::move(value); }

    /**
     * <p>IDs of the caches whose descriptions you want to retrieve (String).</p>
     */
    inline DescribeFileCachesRequest& WithFileCacheIds(const Aws::Vector<Aws::String>& value) { SetFileCacheIds(value); return *this;}

    /**
     * <p>IDs of the caches whose descriptions you want to retrieve (String).</p>
     */
    inline DescribeFileCachesRequest& WithFileCacheIds(Aws::Vector<Aws::String>&& value) { SetFileCacheIds(std::move(value)); return *this;}

    /**
     * <p>IDs of the caches whose descriptions you want to retrieve (String).</p>
     */
    inline DescribeFileCachesRequest& AddFileCacheIds(const Aws::String& value) { m_fileCacheIdsHasBeenSet = true; m_fileCacheIds.push_back(value); return *this; }

    /**
     * <p>IDs of the caches whose descriptions you want to retrieve (String).</p>
     */
    inline DescribeFileCachesRequest& AddFileCacheIds(Aws::String&& value) { m_fileCacheIdsHasBeenSet = true; m_fileCacheIds.push_back(std::move(value)); return *this; }

    /**
     * <p>IDs of the caches whose descriptions you want to retrieve (String).</p>
     */
    inline DescribeFileCachesRequest& AddFileCacheIds(const char* value) { m_fileCacheIdsHasBeenSet = true; m_fileCacheIds.push_back(value); return *this; }


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline DescribeFileCachesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeFileCachesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeFileCachesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeFileCachesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_fileCacheIds;
    bool m_fileCacheIdsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
