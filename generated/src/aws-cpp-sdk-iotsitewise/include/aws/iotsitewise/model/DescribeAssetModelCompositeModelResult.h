/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/CompositionDetails.h>
#include <aws/iotsitewise/model/AssetModelCompositeModelPathSegment.h>
#include <aws/iotsitewise/model/AssetModelProperty.h>
#include <aws/iotsitewise/model/AssetModelCompositeModelSummary.h>
#include <aws/iotsitewise/model/ActionDefinition.h>
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
  class DescribeAssetModelCompositeModelResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeAssetModelCompositeModelResult() = default;
    AWS_IOTSITEWISE_API DescribeAssetModelCompositeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetModelCompositeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    DescribeAssetModelCompositeModelResult& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const { return m_assetModelCompositeModelId; }
    template<typename AssetModelCompositeModelIdT = Aws::String>
    void SetAssetModelCompositeModelId(AssetModelCompositeModelIdT&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::forward<AssetModelCompositeModelIdT>(value); }
    template<typename AssetModelCompositeModelIdT = Aws::String>
    DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelId(AssetModelCompositeModelIdT&& value) { SetAssetModelCompositeModelId(std::forward<AssetModelCompositeModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of a composite model on this asset model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelExternalId() const { return m_assetModelCompositeModelExternalId; }
    template<typename AssetModelCompositeModelExternalIdT = Aws::String>
    void SetAssetModelCompositeModelExternalId(AssetModelCompositeModelExternalIdT&& value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId = std::forward<AssetModelCompositeModelExternalIdT>(value); }
    template<typename AssetModelCompositeModelExternalIdT = Aws::String>
    DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelExternalId(AssetModelCompositeModelExternalIdT&& value) { SetAssetModelCompositeModelExternalId(std::forward<AssetModelCompositeModelExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelPathSegment>& GetAssetModelCompositeModelPath() const { return m_assetModelCompositeModelPath; }
    template<typename AssetModelCompositeModelPathT = Aws::Vector<AssetModelCompositeModelPathSegment>>
    void SetAssetModelCompositeModelPath(AssetModelCompositeModelPathT&& value) { m_assetModelCompositeModelPathHasBeenSet = true; m_assetModelCompositeModelPath = std::forward<AssetModelCompositeModelPathT>(value); }
    template<typename AssetModelCompositeModelPathT = Aws::Vector<AssetModelCompositeModelPathSegment>>
    DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelPath(AssetModelCompositeModelPathT&& value) { SetAssetModelCompositeModelPath(std::forward<AssetModelCompositeModelPathT>(value)); return *this;}
    template<typename AssetModelCompositeModelPathT = AssetModelCompositeModelPathSegment>
    DescribeAssetModelCompositeModelResult& AddAssetModelCompositeModelPath(AssetModelCompositeModelPathT&& value) { m_assetModelCompositeModelPathHasBeenSet = true; m_assetModelCompositeModelPath.emplace_back(std::forward<AssetModelCompositeModelPathT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique, friendly name for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelName() const { return m_assetModelCompositeModelName; }
    template<typename AssetModelCompositeModelNameT = Aws::String>
    void SetAssetModelCompositeModelName(AssetModelCompositeModelNameT&& value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName = std::forward<AssetModelCompositeModelNameT>(value); }
    template<typename AssetModelCompositeModelNameT = Aws::String>
    DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelName(AssetModelCompositeModelNameT&& value) { SetAssetModelCompositeModelName(std::forward<AssetModelCompositeModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelDescription() const { return m_assetModelCompositeModelDescription; }
    template<typename AssetModelCompositeModelDescriptionT = Aws::String>
    void SetAssetModelCompositeModelDescription(AssetModelCompositeModelDescriptionT&& value) { m_assetModelCompositeModelDescriptionHasBeenSet = true; m_assetModelCompositeModelDescription = std::forward<AssetModelCompositeModelDescriptionT>(value); }
    template<typename AssetModelCompositeModelDescriptionT = Aws::String>
    DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelDescription(AssetModelCompositeModelDescriptionT&& value) { SetAssetModelCompositeModelDescription(std::forward<AssetModelCompositeModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelType() const { return m_assetModelCompositeModelType; }
    template<typename AssetModelCompositeModelTypeT = Aws::String>
    void SetAssetModelCompositeModelType(AssetModelCompositeModelTypeT&& value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType = std::forward<AssetModelCompositeModelTypeT>(value); }
    template<typename AssetModelCompositeModelTypeT = Aws::String>
    DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelType(AssetModelCompositeModelTypeT&& value) { SetAssetModelCompositeModelType(std::forward<AssetModelCompositeModelTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property definitions of the composite model.</p>
     */
    inline const Aws::Vector<AssetModelProperty>& GetAssetModelCompositeModelProperties() const { return m_assetModelCompositeModelProperties; }
    template<typename AssetModelCompositeModelPropertiesT = Aws::Vector<AssetModelProperty>>
    void SetAssetModelCompositeModelProperties(AssetModelCompositeModelPropertiesT&& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties = std::forward<AssetModelCompositeModelPropertiesT>(value); }
    template<typename AssetModelCompositeModelPropertiesT = Aws::Vector<AssetModelProperty>>
    DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelProperties(AssetModelCompositeModelPropertiesT&& value) { SetAssetModelCompositeModelProperties(std::forward<AssetModelCompositeModelPropertiesT>(value)); return *this;}
    template<typename AssetModelCompositeModelPropertiesT = AssetModelProperty>
    DescribeAssetModelCompositeModelResult& AddAssetModelCompositeModelProperties(AssetModelCompositeModelPropertiesT&& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties.emplace_back(std::forward<AssetModelCompositeModelPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata for the composition relationship established by using
     * <code>composedAssetModelId</code> in <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">
     * <code>CreateAssetModelCompositeModel</code> </a>. For instance, an array
     * detailing the path of the composition relationship for this composite model.</p>
     */
    inline const CompositionDetails& GetCompositionDetails() const { return m_compositionDetails; }
    template<typename CompositionDetailsT = CompositionDetails>
    void SetCompositionDetails(CompositionDetailsT&& value) { m_compositionDetailsHasBeenSet = true; m_compositionDetails = std::forward<CompositionDetailsT>(value); }
    template<typename CompositionDetailsT = CompositionDetails>
    DescribeAssetModelCompositeModelResult& WithCompositionDetails(CompositionDetailsT&& value) { SetCompositionDetails(std::forward<CompositionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of composite model summaries for the composite model.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelSummary>& GetAssetModelCompositeModelSummaries() const { return m_assetModelCompositeModelSummaries; }
    template<typename AssetModelCompositeModelSummariesT = Aws::Vector<AssetModelCompositeModelSummary>>
    void SetAssetModelCompositeModelSummaries(AssetModelCompositeModelSummariesT&& value) { m_assetModelCompositeModelSummariesHasBeenSet = true; m_assetModelCompositeModelSummaries = std::forward<AssetModelCompositeModelSummariesT>(value); }
    template<typename AssetModelCompositeModelSummariesT = Aws::Vector<AssetModelCompositeModelSummary>>
    DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelSummaries(AssetModelCompositeModelSummariesT&& value) { SetAssetModelCompositeModelSummaries(std::forward<AssetModelCompositeModelSummariesT>(value)); return *this;}
    template<typename AssetModelCompositeModelSummariesT = AssetModelCompositeModelSummary>
    DescribeAssetModelCompositeModelResult& AddAssetModelCompositeModelSummaries(AssetModelCompositeModelSummariesT&& value) { m_assetModelCompositeModelSummariesHasBeenSet = true; m_assetModelCompositeModelSummaries.emplace_back(std::forward<AssetModelCompositeModelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The available actions for a composite model on this asset model.</p>
     */
    inline const Aws::Vector<ActionDefinition>& GetActionDefinitions() const { return m_actionDefinitions; }
    template<typename ActionDefinitionsT = Aws::Vector<ActionDefinition>>
    void SetActionDefinitions(ActionDefinitionsT&& value) { m_actionDefinitionsHasBeenSet = true; m_actionDefinitions = std::forward<ActionDefinitionsT>(value); }
    template<typename ActionDefinitionsT = Aws::Vector<ActionDefinition>>
    DescribeAssetModelCompositeModelResult& WithActionDefinitions(ActionDefinitionsT&& value) { SetActionDefinitions(std::forward<ActionDefinitionsT>(value)); return *this;}
    template<typename ActionDefinitionsT = ActionDefinition>
    DescribeAssetModelCompositeModelResult& AddActionDefinitions(ActionDefinitionsT&& value) { m_actionDefinitionsHasBeenSet = true; m_actionDefinitions.emplace_back(std::forward<ActionDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssetModelCompositeModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelId;
    bool m_assetModelCompositeModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelExternalId;
    bool m_assetModelCompositeModelExternalIdHasBeenSet = false;

    Aws::Vector<AssetModelCompositeModelPathSegment> m_assetModelCompositeModelPath;
    bool m_assetModelCompositeModelPathHasBeenSet = false;

    Aws::String m_assetModelCompositeModelName;
    bool m_assetModelCompositeModelNameHasBeenSet = false;

    Aws::String m_assetModelCompositeModelDescription;
    bool m_assetModelCompositeModelDescriptionHasBeenSet = false;

    Aws::String m_assetModelCompositeModelType;
    bool m_assetModelCompositeModelTypeHasBeenSet = false;

    Aws::Vector<AssetModelProperty> m_assetModelCompositeModelProperties;
    bool m_assetModelCompositeModelPropertiesHasBeenSet = false;

    CompositionDetails m_compositionDetails;
    bool m_compositionDetailsHasBeenSet = false;

    Aws::Vector<AssetModelCompositeModelSummary> m_assetModelCompositeModelSummaries;
    bool m_assetModelCompositeModelSummariesHasBeenSet = false;

    Aws::Vector<ActionDefinition> m_actionDefinitions;
    bool m_actionDefinitionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
