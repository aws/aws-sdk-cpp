/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class BatchDisassociateProjectAssetsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API BatchDisassociateProjectAssetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateProjectAssets"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the project from which to disassociate the assets.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    BatchDisassociateProjectAssetsRequest& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the assets to be disassociated from the project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssetIds() const { return m_assetIds; }
    inline bool AssetIdsHasBeenSet() const { return m_assetIdsHasBeenSet; }
    template<typename AssetIdsT = Aws::Vector<Aws::String>>
    void SetAssetIds(AssetIdsT&& value) { m_assetIdsHasBeenSet = true; m_assetIds = std::forward<AssetIdsT>(value); }
    template<typename AssetIdsT = Aws::Vector<Aws::String>>
    BatchDisassociateProjectAssetsRequest& WithAssetIds(AssetIdsT&& value) { SetAssetIds(std::forward<AssetIdsT>(value)); return *this;}
    template<typename AssetIdsT = Aws::String>
    BatchDisassociateProjectAssetsRequest& AddAssetIds(AssetIdsT&& value) { m_assetIdsHasBeenSet = true; m_assetIds.emplace_back(std::forward<AssetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    BatchDisassociateProjectAssetsRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_assetIds;
    bool m_assetIdsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
