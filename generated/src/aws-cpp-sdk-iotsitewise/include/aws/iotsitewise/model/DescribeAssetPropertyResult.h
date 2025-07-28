/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/Property.h>
#include <aws/iotsitewise/model/CompositeModelProperty.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribeAssetPropertyResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeAssetPropertyResult() = default;
    AWS_IOTSITEWISE_API DescribeAssetPropertyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetPropertyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset, in UUID format.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    DescribeAssetPropertyResult& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the asset. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetExternalId() const { return m_assetExternalId; }
    template<typename AssetExternalIdT = Aws::String>
    void SetAssetExternalId(AssetExternalIdT&& value) { m_assetExternalIdHasBeenSet = true; m_assetExternalId = std::forward<AssetExternalIdT>(value); }
    template<typename AssetExternalIdT = Aws::String>
    DescribeAssetPropertyResult& WithAssetExternalId(AssetExternalIdT&& value) { SetAssetExternalId(std::forward<AssetExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset.</p>
     */
    inline const Aws::String& GetAssetName() const { return m_assetName; }
    template<typename AssetNameT = Aws::String>
    void SetAssetName(AssetNameT&& value) { m_assetNameHasBeenSet = true; m_assetName = std::forward<AssetNameT>(value); }
    template<typename AssetNameT = Aws::String>
    DescribeAssetPropertyResult& WithAssetName(AssetNameT&& value) { SetAssetName(std::forward<AssetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    DescribeAssetPropertyResult& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset property's definition, alias, and notification state.</p> <p>This
     * response includes this object for normal asset properties. If you describe an
     * asset property in a composite model, this response includes the asset property
     * information in <code>compositeModel</code>.</p>
     */
    inline const Property& GetAssetProperty() const { return m_assetProperty; }
    template<typename AssetPropertyT = Property>
    void SetAssetProperty(AssetPropertyT&& value) { m_assetPropertyHasBeenSet = true; m_assetProperty = std::forward<AssetPropertyT>(value); }
    template<typename AssetPropertyT = Property>
    DescribeAssetPropertyResult& WithAssetProperty(AssetPropertyT&& value) { SetAssetProperty(std::forward<AssetPropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The composite model that declares this asset property, if this asset property
     * exists in a composite model.</p>
     */
    inline const CompositeModelProperty& GetCompositeModel() const { return m_compositeModel; }
    template<typename CompositeModelT = CompositeModelProperty>
    void SetCompositeModel(CompositeModelT&& value) { m_compositeModelHasBeenSet = true; m_compositeModel = std::forward<CompositeModelT>(value); }
    template<typename CompositeModelT = CompositeModelProperty>
    DescribeAssetPropertyResult& WithCompositeModel(CompositeModelT&& value) { SetCompositeModel(std::forward<CompositeModelT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssetPropertyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetExternalId;
    bool m_assetExternalIdHasBeenSet = false;

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Property m_assetProperty;
    bool m_assetPropertyHasBeenSet = false;

    CompositeModelProperty m_compositeModel;
    bool m_compositeModelHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
