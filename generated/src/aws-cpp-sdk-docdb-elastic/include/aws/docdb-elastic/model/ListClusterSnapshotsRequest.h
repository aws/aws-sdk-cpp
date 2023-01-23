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
  class ListClusterSnapshotsRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API ListClusterSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusterSnapshots"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;

    AWS_DOCDBELASTIC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline ListClusterSnapshotsRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline ListClusterSnapshotsRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline ListClusterSnapshotsRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The maximum number of entries to recieve in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of entries to recieve in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of entries to recieve in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of entries to recieve in the response.</p>
     */
    inline ListClusterSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The nextToken which is used the get the next page of data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken which is used the get the next page of data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken which is used the get the next page of data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken which is used the get the next page of data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken which is used the get the next page of data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken which is used the get the next page of data.</p>
     */
    inline ListClusterSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken which is used the get the next page of data.</p>
     */
    inline ListClusterSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken which is used the get the next page of data.</p>
     */
    inline ListClusterSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
