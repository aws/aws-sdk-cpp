/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetModelType.h>
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
  class ListAssetModelsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListAssetModelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssetModels"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The type of asset model. If you don't provide an
     * <code>assetModelTypes</code>, all types of asset models are returned.</p> <ul>
     * <li> <p> <b>ASSET_MODEL</b> – An asset model that you can use to create assets.
     * Can't be included as a component in another asset model.</p> </li> <li> <p>
     * <b>COMPONENT_MODEL</b> – A reusable component that you can include in the
     * composite models of other asset models. You can't create assets directly from
     * this type of asset model. </p> </li> </ul>
     */
    inline const Aws::Vector<AssetModelType>& GetAssetModelTypes() const{ return m_assetModelTypes; }
    inline bool AssetModelTypesHasBeenSet() const { return m_assetModelTypesHasBeenSet; }
    inline void SetAssetModelTypes(const Aws::Vector<AssetModelType>& value) { m_assetModelTypesHasBeenSet = true; m_assetModelTypes = value; }
    inline void SetAssetModelTypes(Aws::Vector<AssetModelType>&& value) { m_assetModelTypesHasBeenSet = true; m_assetModelTypes = std::move(value); }
    inline ListAssetModelsRequest& WithAssetModelTypes(const Aws::Vector<AssetModelType>& value) { SetAssetModelTypes(value); return *this;}
    inline ListAssetModelsRequest& WithAssetModelTypes(Aws::Vector<AssetModelType>&& value) { SetAssetModelTypes(std::move(value)); return *this;}
    inline ListAssetModelsRequest& AddAssetModelTypes(const AssetModelType& value) { m_assetModelTypesHasBeenSet = true; m_assetModelTypes.push_back(value); return *this; }
    inline ListAssetModelsRequest& AddAssetModelTypes(AssetModelType&& value) { m_assetModelTypesHasBeenSet = true; m_assetModelTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAssetModelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssetModelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssetModelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssetModelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version alias that specifies the latest or active version of the asset
     * model. The details are returned in the response. The default value is
     * <code>LATEST</code>. See <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/model-active-version.html">
     * Asset model versions</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelVersion() const{ return m_assetModelVersion; }
    inline bool AssetModelVersionHasBeenSet() const { return m_assetModelVersionHasBeenSet; }
    inline void SetAssetModelVersion(const Aws::String& value) { m_assetModelVersionHasBeenSet = true; m_assetModelVersion = value; }
    inline void SetAssetModelVersion(Aws::String&& value) { m_assetModelVersionHasBeenSet = true; m_assetModelVersion = std::move(value); }
    inline void SetAssetModelVersion(const char* value) { m_assetModelVersionHasBeenSet = true; m_assetModelVersion.assign(value); }
    inline ListAssetModelsRequest& WithAssetModelVersion(const Aws::String& value) { SetAssetModelVersion(value); return *this;}
    inline ListAssetModelsRequest& WithAssetModelVersion(Aws::String&& value) { SetAssetModelVersion(std::move(value)); return *this;}
    inline ListAssetModelsRequest& WithAssetModelVersion(const char* value) { SetAssetModelVersion(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetModelType> m_assetModelTypes;
    bool m_assetModelTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_assetModelVersion;
    bool m_assetModelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
