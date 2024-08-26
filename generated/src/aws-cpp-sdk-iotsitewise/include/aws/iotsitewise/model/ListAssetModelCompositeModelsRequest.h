/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListAssetModelCompositeModelsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListAssetModelCompositeModelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssetModelCompositeModels"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the asset model. This can be either the actual ID in UUID format,
     * or else <code>externalId:</code> followed by the external ID, if it has one. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }
    inline ListAssetModelCompositeModelsRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}
    inline ListAssetModelCompositeModelsRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}
    inline ListAssetModelCompositeModelsRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}
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
    inline ListAssetModelCompositeModelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssetModelCompositeModelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssetModelCompositeModelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssetModelCompositeModelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline ListAssetModelCompositeModelsRequest& WithAssetModelVersion(const Aws::String& value) { SetAssetModelVersion(value); return *this;}
    inline ListAssetModelCompositeModelsRequest& WithAssetModelVersion(Aws::String&& value) { SetAssetModelVersion(std::move(value)); return *this;}
    inline ListAssetModelCompositeModelsRequest& WithAssetModelVersion(const char* value) { SetAssetModelVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

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
