/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/TraversalType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ListAssetRelationshipsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListAssetRelationshipsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssetRelationships"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline ListAssetRelationshipsRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline ListAssetRelationshipsRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline ListAssetRelationshipsRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The type of traversal to use to identify asset relationships. Choose the
     * following option:</p> <ul> <li> <p> <code>PATH_TO_ROOT</code> – Identify the
     * asset's parent assets up to the root asset. The asset that you specify in
     * <code>assetId</code> is the first result in the list of
     * <code>assetRelationshipSummaries</code>, and the root asset is the last
     * result.</p> </li> </ul>
     */
    inline const TraversalType& GetTraversalType() const{ return m_traversalType; }

    /**
     * <p>The type of traversal to use to identify asset relationships. Choose the
     * following option:</p> <ul> <li> <p> <code>PATH_TO_ROOT</code> – Identify the
     * asset's parent assets up to the root asset. The asset that you specify in
     * <code>assetId</code> is the first result in the list of
     * <code>assetRelationshipSummaries</code>, and the root asset is the last
     * result.</p> </li> </ul>
     */
    inline bool TraversalTypeHasBeenSet() const { return m_traversalTypeHasBeenSet; }

    /**
     * <p>The type of traversal to use to identify asset relationships. Choose the
     * following option:</p> <ul> <li> <p> <code>PATH_TO_ROOT</code> – Identify the
     * asset's parent assets up to the root asset. The asset that you specify in
     * <code>assetId</code> is the first result in the list of
     * <code>assetRelationshipSummaries</code>, and the root asset is the last
     * result.</p> </li> </ul>
     */
    inline void SetTraversalType(const TraversalType& value) { m_traversalTypeHasBeenSet = true; m_traversalType = value; }

    /**
     * <p>The type of traversal to use to identify asset relationships. Choose the
     * following option:</p> <ul> <li> <p> <code>PATH_TO_ROOT</code> – Identify the
     * asset's parent assets up to the root asset. The asset that you specify in
     * <code>assetId</code> is the first result in the list of
     * <code>assetRelationshipSummaries</code>, and the root asset is the last
     * result.</p> </li> </ul>
     */
    inline void SetTraversalType(TraversalType&& value) { m_traversalTypeHasBeenSet = true; m_traversalType = std::move(value); }

    /**
     * <p>The type of traversal to use to identify asset relationships. Choose the
     * following option:</p> <ul> <li> <p> <code>PATH_TO_ROOT</code> – Identify the
     * asset's parent assets up to the root asset. The asset that you specify in
     * <code>assetId</code> is the first result in the list of
     * <code>assetRelationshipSummaries</code>, and the root asset is the last
     * result.</p> </li> </ul>
     */
    inline ListAssetRelationshipsRequest& WithTraversalType(const TraversalType& value) { SetTraversalType(value); return *this;}

    /**
     * <p>The type of traversal to use to identify asset relationships. Choose the
     * following option:</p> <ul> <li> <p> <code>PATH_TO_ROOT</code> – Identify the
     * asset's parent assets up to the root asset. The asset that you specify in
     * <code>assetId</code> is the first result in the list of
     * <code>assetRelationshipSummaries</code>, and the root asset is the last
     * result.</p> </li> </ul>
     */
    inline ListAssetRelationshipsRequest& WithTraversalType(TraversalType&& value) { SetTraversalType(std::move(value)); return *this;}


    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssetRelationshipsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssetRelationshipsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssetRelationshipsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline ListAssetRelationshipsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    TraversalType m_traversalType;
    bool m_traversalTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
