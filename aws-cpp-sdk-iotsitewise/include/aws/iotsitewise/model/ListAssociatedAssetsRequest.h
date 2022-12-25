/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/TraversalDirection.h>
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
  class ListAssociatedAssetsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListAssociatedAssetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssociatedAssets"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the asset to query.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the asset to query.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The ID of the asset to query.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The ID of the asset to query.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The ID of the asset to query.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The ID of the asset to query.</p>
     */
    inline ListAssociatedAssetsRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset to query.</p>
     */
    inline ListAssociatedAssetsRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset to query.</p>
     */
    inline ListAssociatedAssetsRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The ID of the hierarchy by which child assets are associated to the asset. To
     * find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * operations. This parameter is required if you choose <code>CHILD</code> for
     * <code>traversalDirection</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetHierarchyId() const{ return m_hierarchyId; }

    /**
     * <p>The ID of the hierarchy by which child assets are associated to the asset. To
     * find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * operations. This parameter is required if you choose <code>CHILD</code> for
     * <code>traversalDirection</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }

    /**
     * <p>The ID of the hierarchy by which child assets are associated to the asset. To
     * find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * operations. This parameter is required if you choose <code>CHILD</code> for
     * <code>traversalDirection</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(const Aws::String& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = value; }

    /**
     * <p>The ID of the hierarchy by which child assets are associated to the asset. To
     * find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * operations. This parameter is required if you choose <code>CHILD</code> for
     * <code>traversalDirection</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(Aws::String&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::move(value); }

    /**
     * <p>The ID of the hierarchy by which child assets are associated to the asset. To
     * find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * operations. This parameter is required if you choose <code>CHILD</code> for
     * <code>traversalDirection</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(const char* value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId.assign(value); }

    /**
     * <p>The ID of the hierarchy by which child assets are associated to the asset. To
     * find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * operations. This parameter is required if you choose <code>CHILD</code> for
     * <code>traversalDirection</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline ListAssociatedAssetsRequest& WithHierarchyId(const Aws::String& value) { SetHierarchyId(value); return *this;}

    /**
     * <p>The ID of the hierarchy by which child assets are associated to the asset. To
     * find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * operations. This parameter is required if you choose <code>CHILD</code> for
     * <code>traversalDirection</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline ListAssociatedAssetsRequest& WithHierarchyId(Aws::String&& value) { SetHierarchyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hierarchy by which child assets are associated to the asset. To
     * find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * operations. This parameter is required if you choose <code>CHILD</code> for
     * <code>traversalDirection</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline ListAssociatedAssetsRequest& WithHierarchyId(const char* value) { SetHierarchyId(value); return *this;}


    /**
     * <p>The direction to list associated assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>CHILD</code> – The list includes all child
     * assets associated to the asset. The <code>hierarchyId</code> parameter is
     * required if you choose <code>CHILD</code>.</p> </li> <li> <p>
     * <code>PARENT</code> – The list includes the asset's parent asset.</p> </li>
     * </ul> <p>Default: <code>CHILD</code> </p>
     */
    inline const TraversalDirection& GetTraversalDirection() const{ return m_traversalDirection; }

    /**
     * <p>The direction to list associated assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>CHILD</code> – The list includes all child
     * assets associated to the asset. The <code>hierarchyId</code> parameter is
     * required if you choose <code>CHILD</code>.</p> </li> <li> <p>
     * <code>PARENT</code> – The list includes the asset's parent asset.</p> </li>
     * </ul> <p>Default: <code>CHILD</code> </p>
     */
    inline bool TraversalDirectionHasBeenSet() const { return m_traversalDirectionHasBeenSet; }

    /**
     * <p>The direction to list associated assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>CHILD</code> – The list includes all child
     * assets associated to the asset. The <code>hierarchyId</code> parameter is
     * required if you choose <code>CHILD</code>.</p> </li> <li> <p>
     * <code>PARENT</code> – The list includes the asset's parent asset.</p> </li>
     * </ul> <p>Default: <code>CHILD</code> </p>
     */
    inline void SetTraversalDirection(const TraversalDirection& value) { m_traversalDirectionHasBeenSet = true; m_traversalDirection = value; }

    /**
     * <p>The direction to list associated assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>CHILD</code> – The list includes all child
     * assets associated to the asset. The <code>hierarchyId</code> parameter is
     * required if you choose <code>CHILD</code>.</p> </li> <li> <p>
     * <code>PARENT</code> – The list includes the asset's parent asset.</p> </li>
     * </ul> <p>Default: <code>CHILD</code> </p>
     */
    inline void SetTraversalDirection(TraversalDirection&& value) { m_traversalDirectionHasBeenSet = true; m_traversalDirection = std::move(value); }

    /**
     * <p>The direction to list associated assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>CHILD</code> – The list includes all child
     * assets associated to the asset. The <code>hierarchyId</code> parameter is
     * required if you choose <code>CHILD</code>.</p> </li> <li> <p>
     * <code>PARENT</code> – The list includes the asset's parent asset.</p> </li>
     * </ul> <p>Default: <code>CHILD</code> </p>
     */
    inline ListAssociatedAssetsRequest& WithTraversalDirection(const TraversalDirection& value) { SetTraversalDirection(value); return *this;}

    /**
     * <p>The direction to list associated assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>CHILD</code> – The list includes all child
     * assets associated to the asset. The <code>hierarchyId</code> parameter is
     * required if you choose <code>CHILD</code>.</p> </li> <li> <p>
     * <code>PARENT</code> – The list includes the asset's parent asset.</p> </li>
     * </ul> <p>Default: <code>CHILD</code> </p>
     */
    inline ListAssociatedAssetsRequest& WithTraversalDirection(TraversalDirection&& value) { SetTraversalDirection(std::move(value)); return *this;}


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
    inline ListAssociatedAssetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssociatedAssetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssociatedAssetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline ListAssociatedAssetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_hierarchyId;
    bool m_hierarchyIdHasBeenSet = false;

    TraversalDirection m_traversalDirection;
    bool m_traversalDirectionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
