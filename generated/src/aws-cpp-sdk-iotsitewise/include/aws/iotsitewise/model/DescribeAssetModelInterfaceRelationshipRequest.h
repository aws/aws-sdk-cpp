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
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class DescribeAssetModelInterfaceRelationshipRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeAssetModelInterfaceRelationshipRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssetModelInterfaceRelationship"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the asset model. This can be either the actual ID in UUID format,
     * or else externalId: followed by the external ID.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    DescribeAssetModelInterfaceRelationshipRequest& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the interface asset model. This can be either the actual ID in UUID
     * format, or else externalId: followed by the external ID.</p>
     */
    inline const Aws::String& GetInterfaceAssetModelId() const { return m_interfaceAssetModelId; }
    inline bool InterfaceAssetModelIdHasBeenSet() const { return m_interfaceAssetModelIdHasBeenSet; }
    template<typename InterfaceAssetModelIdT = Aws::String>
    void SetInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { m_interfaceAssetModelIdHasBeenSet = true; m_interfaceAssetModelId = std::forward<InterfaceAssetModelIdT>(value); }
    template<typename InterfaceAssetModelIdT = Aws::String>
    DescribeAssetModelInterfaceRelationshipRequest& WithInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { SetInterfaceAssetModelId(std::forward<InterfaceAssetModelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_interfaceAssetModelId;
    bool m_interfaceAssetModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
