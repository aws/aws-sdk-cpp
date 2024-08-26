/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetModelVersionType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

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
  class DeleteAssetModelCompositeModelRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DeleteAssetModelCompositeModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAssetModelCompositeModel"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_IOTSITEWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }
    inline DeleteAssetModelCompositeModelRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const{ return m_assetModelCompositeModelId; }
    inline bool AssetModelCompositeModelIdHasBeenSet() const { return m_assetModelCompositeModelIdHasBeenSet; }
    inline void SetAssetModelCompositeModelId(const Aws::String& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = value; }
    inline void SetAssetModelCompositeModelId(Aws::String&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::move(value); }
    inline void SetAssetModelCompositeModelId(const char* value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId.assign(value); }
    inline DeleteAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(const Aws::String& value) { SetAssetModelCompositeModelId(value); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(Aws::String&& value) { SetAssetModelCompositeModelId(std::move(value)); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(const char* value) { SetAssetModelCompositeModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline DeleteAssetModelCompositeModelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected current entity tag (ETag) for the asset model’s latest or active
     * version (specified using <code>matchForVersionType</code>). The delete request
     * is rejected if the tag does not match the latest or active version's current
     * entity tag. See <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/opt-locking-for-model.html">Optimistic
     * locking for asset model writes</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }
    inline DeleteAssetModelCompositeModelRequest& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Accepts <b>*</b> to reject the delete request if an active version (specified
     * using <code>matchForVersionType</code> as <code>ACTIVE</code>) already exists
     * for the asset model.</p>
     */
    inline const Aws::String& GetIfNoneMatch() const{ return m_ifNoneMatch; }
    inline bool IfNoneMatchHasBeenSet() const { return m_ifNoneMatchHasBeenSet; }
    inline void SetIfNoneMatch(const Aws::String& value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch = value; }
    inline void SetIfNoneMatch(Aws::String&& value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch = std::move(value); }
    inline void SetIfNoneMatch(const char* value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch.assign(value); }
    inline DeleteAssetModelCompositeModelRequest& WithIfNoneMatch(const Aws::String& value) { SetIfNoneMatch(value); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithIfNoneMatch(Aws::String&& value) { SetIfNoneMatch(std::move(value)); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithIfNoneMatch(const char* value) { SetIfNoneMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the asset model version type (<code>LATEST</code> or
     * <code>ACTIVE</code>) used in conjunction with <code>If-Match</code> or
     * <code>If-None-Match</code> headers to determine the target ETag for the delete
     * operation.</p>
     */
    inline const AssetModelVersionType& GetMatchForVersionType() const{ return m_matchForVersionType; }
    inline bool MatchForVersionTypeHasBeenSet() const { return m_matchForVersionTypeHasBeenSet; }
    inline void SetMatchForVersionType(const AssetModelVersionType& value) { m_matchForVersionTypeHasBeenSet = true; m_matchForVersionType = value; }
    inline void SetMatchForVersionType(AssetModelVersionType&& value) { m_matchForVersionTypeHasBeenSet = true; m_matchForVersionType = std::move(value); }
    inline DeleteAssetModelCompositeModelRequest& WithMatchForVersionType(const AssetModelVersionType& value) { SetMatchForVersionType(value); return *this;}
    inline DeleteAssetModelCompositeModelRequest& WithMatchForVersionType(AssetModelVersionType&& value) { SetMatchForVersionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelId;
    bool m_assetModelCompositeModelIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    Aws::String m_ifNoneMatch;
    bool m_ifNoneMatchHasBeenSet = false;

    AssetModelVersionType m_matchForVersionType;
    bool m_matchForVersionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
