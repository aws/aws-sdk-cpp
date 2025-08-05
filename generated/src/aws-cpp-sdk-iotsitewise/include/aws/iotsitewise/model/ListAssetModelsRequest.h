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
    AWS_IOTSITEWISE_API ListAssetModelsRequest() = default;

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
     * this type of asset model. </p> </li> <li> <p> <b>INTERFACE</b> – An interface is
     * a type of model that defines a standard structure that can be applied to
     * different asset models.</p> </li> </ul>
     */
    inline const Aws::Vector<AssetModelType>& GetAssetModelTypes() const { return m_assetModelTypes; }
    inline bool AssetModelTypesHasBeenSet() const { return m_assetModelTypesHasBeenSet; }
    template<typename AssetModelTypesT = Aws::Vector<AssetModelType>>
    void SetAssetModelTypes(AssetModelTypesT&& value) { m_assetModelTypesHasBeenSet = true; m_assetModelTypes = std::forward<AssetModelTypesT>(value); }
    template<typename AssetModelTypesT = Aws::Vector<AssetModelType>>
    ListAssetModelsRequest& WithAssetModelTypes(AssetModelTypesT&& value) { SetAssetModelTypes(std::forward<AssetModelTypesT>(value)); return *this;}
    inline ListAssetModelsRequest& AddAssetModelTypes(AssetModelType value) { m_assetModelTypesHasBeenSet = true; m_assetModelTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssetModelsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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
    inline const Aws::String& GetAssetModelVersion() const { return m_assetModelVersion; }
    inline bool AssetModelVersionHasBeenSet() const { return m_assetModelVersionHasBeenSet; }
    template<typename AssetModelVersionT = Aws::String>
    void SetAssetModelVersion(AssetModelVersionT&& value) { m_assetModelVersionHasBeenSet = true; m_assetModelVersion = std::forward<AssetModelVersionT>(value); }
    template<typename AssetModelVersionT = Aws::String>
    ListAssetModelsRequest& WithAssetModelVersion(AssetModelVersionT&& value) { SetAssetModelVersion(std::forward<AssetModelVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetModelType> m_assetModelTypes;
    bool m_assetModelTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_assetModelVersion;
    bool m_assetModelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
