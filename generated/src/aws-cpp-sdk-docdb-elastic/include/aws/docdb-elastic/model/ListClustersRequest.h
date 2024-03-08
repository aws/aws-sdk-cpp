/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/DocDBElasticRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DocDBElastic
{
namespace Model
{

  /**
   */
  class ListClustersRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API ListClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusters"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;

    AWS_DOCDBELASTIC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of elastic cluster snapshot results to receive in the
     * response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of elastic cluster snapshot results to receive in the
     * response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of elastic cluster snapshot results to receive in the
     * response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of elastic cluster snapshot results to receive in the
     * response.</p>
     */
    inline ListClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline ListClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline ListClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline ListClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
