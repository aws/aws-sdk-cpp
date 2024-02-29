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
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline ListClusterSnapshotsRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline ListClusterSnapshotsRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline ListClusterSnapshotsRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


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
    inline ListClusterSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListClusterSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline ListClusterSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token provided by a previous request. If this parameter is
     * specified, the response includes only records beyond this token, up to the value
     * specified by <code>max-results</code>.</p> <p>If there is no more data in the
     * responce, the <code>nextToken</code> will not be returned.</p>
     */
    inline ListClusterSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The type of cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all cluster
     * snapshots that Amazon DocumentDB has automatically created for your Amazon Web
     * Services account.</p> </li> <li> <p> <code>manual</code> - Return all cluster
     * snapshots that you have manually created for your Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>The type of cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all cluster
     * snapshots that Amazon DocumentDB has automatically created for your Amazon Web
     * Services account.</p> </li> <li> <p> <code>manual</code> - Return all cluster
     * snapshots that you have manually created for your Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }

    /**
     * <p>The type of cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all cluster
     * snapshots that Amazon DocumentDB has automatically created for your Amazon Web
     * Services account.</p> </li> <li> <p> <code>manual</code> - Return all cluster
     * snapshots that you have manually created for your Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>The type of cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all cluster
     * snapshots that Amazon DocumentDB has automatically created for your Amazon Web
     * Services account.</p> </li> <li> <p> <code>manual</code> - Return all cluster
     * snapshots that you have manually created for your Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }

    /**
     * <p>The type of cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all cluster
     * snapshots that Amazon DocumentDB has automatically created for your Amazon Web
     * Services account.</p> </li> <li> <p> <code>manual</code> - Return all cluster
     * snapshots that you have manually created for your Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>The type of cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all cluster
     * snapshots that Amazon DocumentDB has automatically created for your Amazon Web
     * Services account.</p> </li> <li> <p> <code>manual</code> - Return all cluster
     * snapshots that you have manually created for your Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline ListClusterSnapshotsRequest& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>The type of cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all cluster
     * snapshots that Amazon DocumentDB has automatically created for your Amazon Web
     * Services account.</p> </li> <li> <p> <code>manual</code> - Return all cluster
     * snapshots that you have manually created for your Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline ListClusterSnapshotsRequest& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}

    /**
     * <p>The type of cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all cluster
     * snapshots that Amazon DocumentDB has automatically created for your Amazon Web
     * Services account.</p> </li> <li> <p> <code>manual</code> - Return all cluster
     * snapshots that you have manually created for your Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline ListClusterSnapshotsRequest& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
