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
   * <p>The resource the action will be taken on. This can include asset-based
   * resources and computation model resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TargetResource">AWS
   * API Reference</a></p>
   */
  class TargetResource
  {
  public:
    AWS_IOTSITEWISE_API TargetResource() = default;
    AWS_IOTSITEWISE_API TargetResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API TargetResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the asset, in UUID format.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    TargetResource& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelId() const { return m_computationModelId; }
    inline bool ComputationModelIdHasBeenSet() const { return m_computationModelIdHasBeenSet; }
    template<typename ComputationModelIdT = Aws::String>
    void SetComputationModelId(ComputationModelIdT&& value) { m_computationModelIdHasBeenSet = true; m_computationModelId = std::forward<ComputationModelIdT>(value); }
    template<typename ComputationModelIdT = Aws::String>
    TargetResource& WithComputationModelId(ComputationModelIdT&& value) { SetComputationModelId(std::forward<ComputationModelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_computationModelId;
    bool m_computationModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
