/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a summary of the components of the composite model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CompositionRelationshipSummary">AWS
   * API Reference</a></p>
   */
  class CompositionRelationshipSummary
  {
  public:
    AWS_IOTSITEWISE_API CompositionRelationshipSummary() = default;
    AWS_IOTSITEWISE_API CompositionRelationshipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API CompositionRelationshipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    CompositionRelationshipSummary& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const { return m_assetModelCompositeModelId; }
    inline bool AssetModelCompositeModelIdHasBeenSet() const { return m_assetModelCompositeModelIdHasBeenSet; }
    template<typename AssetModelCompositeModelIdT = Aws::String>
    void SetAssetModelCompositeModelId(AssetModelCompositeModelIdT&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::forward<AssetModelCompositeModelIdT>(value); }
    template<typename AssetModelCompositeModelIdT = Aws::String>
    CompositionRelationshipSummary& WithAssetModelCompositeModelId(AssetModelCompositeModelIdT&& value) { SetAssetModelCompositeModelId(std::forward<AssetModelCompositeModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelType() const { return m_assetModelCompositeModelType; }
    inline bool AssetModelCompositeModelTypeHasBeenSet() const { return m_assetModelCompositeModelTypeHasBeenSet; }
    template<typename AssetModelCompositeModelTypeT = Aws::String>
    void SetAssetModelCompositeModelType(AssetModelCompositeModelTypeT&& value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType = std::forward<AssetModelCompositeModelTypeT>(value); }
    template<typename AssetModelCompositeModelTypeT = Aws::String>
    CompositionRelationshipSummary& WithAssetModelCompositeModelType(AssetModelCompositeModelTypeT&& value) { SetAssetModelCompositeModelType(std::forward<AssetModelCompositeModelTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelId;
    bool m_assetModelCompositeModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelType;
    bool m_assetModelCompositeModelTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
