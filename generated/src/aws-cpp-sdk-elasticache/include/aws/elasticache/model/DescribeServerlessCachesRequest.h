﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class DescribeServerlessCachesRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DescribeServerlessCachesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServerlessCaches"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier for the serverless cache. If this parameter is specified, only
     * information about that specific serverless cache is returned. Default: NULL</p>
     */
    inline const Aws::String& GetServerlessCacheName() const { return m_serverlessCacheName; }
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
    template<typename ServerlessCacheNameT = Aws::String>
    void SetServerlessCacheName(ServerlessCacheNameT&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::forward<ServerlessCacheNameT>(value); }
    template<typename ServerlessCacheNameT = Aws::String>
    DescribeServerlessCachesRequest& WithServerlessCacheName(ServerlessCacheNameT&& value) { SetServerlessCacheName(std::forward<ServerlessCacheNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records in the response. If more records exist than the
     * specified max-records value, the next token is included in the response so that
     * remaining results can be retrieved. The default is 50.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeServerlessCachesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeServerlessCachesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverlessCacheName;
    bool m_serverlessCacheNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
