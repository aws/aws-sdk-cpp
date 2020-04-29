/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_IOTSITEWISE_API ListAssociatedAssetsRequest : public IoTSiteWiseRequest
  {
  public:
    ListAssociatedAssetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssociatedAssets"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the parent asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline ListAssociatedAssetsRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline ListAssociatedAssetsRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline ListAssociatedAssetsRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The hierarchy ID (of the parent asset model) whose associated assets are
     * returned. To find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * actions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetHierarchyId() const{ return m_hierarchyId; }

    /**
     * <p>The hierarchy ID (of the parent asset model) whose associated assets are
     * returned. To find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * actions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }

    /**
     * <p>The hierarchy ID (of the parent asset model) whose associated assets are
     * returned. To find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * actions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(const Aws::String& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = value; }

    /**
     * <p>The hierarchy ID (of the parent asset model) whose associated assets are
     * returned. To find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * actions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(Aws::String&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::move(value); }

    /**
     * <p>The hierarchy ID (of the parent asset model) whose associated assets are
     * returned. To find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * actions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(const char* value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId.assign(value); }

    /**
     * <p>The hierarchy ID (of the parent asset model) whose associated assets are
     * returned. To find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * actions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline ListAssociatedAssetsRequest& WithHierarchyId(const Aws::String& value) { SetHierarchyId(value); return *this;}

    /**
     * <p>The hierarchy ID (of the parent asset model) whose associated assets are
     * returned. To find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * actions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline ListAssociatedAssetsRequest& WithHierarchyId(Aws::String&& value) { SetHierarchyId(std::move(value)); return *this;}

    /**
     * <p>The hierarchy ID (of the parent asset model) whose associated assets are
     * returned. To find a hierarchy ID, use the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAsset.html">DescribeAsset</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>
     * actions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline ListAssociatedAssetsRequest& WithHierarchyId(const char* value) { SetHierarchyId(value); return *this;}


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
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline ListAssociatedAssetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet;

    Aws::String m_hierarchyId;
    bool m_hierarchyIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
