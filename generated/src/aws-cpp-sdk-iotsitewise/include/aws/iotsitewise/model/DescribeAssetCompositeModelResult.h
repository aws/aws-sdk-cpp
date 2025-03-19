/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetCompositeModelPathSegment.h>
#include <aws/iotsitewise/model/AssetProperty.h>
#include <aws/iotsitewise/model/AssetCompositeModelSummary.h>
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
  class DescribeAssetCompositeModelResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeAssetCompositeModelResult() = default;
    AWS_IOTSITEWISE_API DescribeAssetCompositeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetCompositeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset, in UUID format. This ID uniquely identifies the asset
     * within IoT SiteWise and can be used with other IoT SiteWise APIs.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    DescribeAssetCompositeModelResult& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a composite model on this asset.</p>
     */
    inline const Aws::String& GetAssetCompositeModelId() const { return m_assetCompositeModelId; }
    template<typename AssetCompositeModelIdT = Aws::String>
    void SetAssetCompositeModelId(AssetCompositeModelIdT&& value) { m_assetCompositeModelIdHasBeenSet = true; m_assetCompositeModelId = std::forward<AssetCompositeModelIdT>(value); }
    template<typename AssetCompositeModelIdT = Aws::String>
    DescribeAssetCompositeModelResult& WithAssetCompositeModelId(AssetCompositeModelIdT&& value) { SetAssetCompositeModelId(std::forward<AssetCompositeModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An external ID to assign to the asset model.</p> <p>If the composite model is
     * a component-based composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline const Aws::String& GetAssetCompositeModelExternalId() const { return m_assetCompositeModelExternalId; }
    template<typename AssetCompositeModelExternalIdT = Aws::String>
    void SetAssetCompositeModelExternalId(AssetCompositeModelExternalIdT&& value) { m_assetCompositeModelExternalIdHasBeenSet = true; m_assetCompositeModelExternalId = std::forward<AssetCompositeModelExternalIdT>(value); }
    template<typename AssetCompositeModelExternalIdT = Aws::String>
    DescribeAssetCompositeModelResult& WithAssetCompositeModelExternalId(AssetCompositeModelExternalIdT&& value) { SetAssetCompositeModelExternalId(std::forward<AssetCompositeModelExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline const Aws::Vector<AssetCompositeModelPathSegment>& GetAssetCompositeModelPath() const { return m_assetCompositeModelPath; }
    template<typename AssetCompositeModelPathT = Aws::Vector<AssetCompositeModelPathSegment>>
    void SetAssetCompositeModelPath(AssetCompositeModelPathT&& value) { m_assetCompositeModelPathHasBeenSet = true; m_assetCompositeModelPath = std::forward<AssetCompositeModelPathT>(value); }
    template<typename AssetCompositeModelPathT = Aws::Vector<AssetCompositeModelPathSegment>>
    DescribeAssetCompositeModelResult& WithAssetCompositeModelPath(AssetCompositeModelPathT&& value) { SetAssetCompositeModelPath(std::forward<AssetCompositeModelPathT>(value)); return *this;}
    template<typename AssetCompositeModelPathT = AssetCompositeModelPathSegment>
    DescribeAssetCompositeModelResult& AddAssetCompositeModelPath(AssetCompositeModelPathT&& value) { m_assetCompositeModelPathHasBeenSet = true; m_assetCompositeModelPath.emplace_back(std::forward<AssetCompositeModelPathT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique, friendly name for the composite model.</p>
     */
    inline const Aws::String& GetAssetCompositeModelName() const { return m_assetCompositeModelName; }
    template<typename AssetCompositeModelNameT = Aws::String>
    void SetAssetCompositeModelName(AssetCompositeModelNameT&& value) { m_assetCompositeModelNameHasBeenSet = true; m_assetCompositeModelName = std::forward<AssetCompositeModelNameT>(value); }
    template<typename AssetCompositeModelNameT = Aws::String>
    DescribeAssetCompositeModelResult& WithAssetCompositeModelName(AssetCompositeModelNameT&& value) { SetAssetCompositeModelName(std::forward<AssetCompositeModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the composite model.</p>
     */
    inline const Aws::String& GetAssetCompositeModelDescription() const { return m_assetCompositeModelDescription; }
    template<typename AssetCompositeModelDescriptionT = Aws::String>
    void SetAssetCompositeModelDescription(AssetCompositeModelDescriptionT&& value) { m_assetCompositeModelDescriptionHasBeenSet = true; m_assetCompositeModelDescription = std::forward<AssetCompositeModelDescriptionT>(value); }
    template<typename AssetCompositeModelDescriptionT = Aws::String>
    DescribeAssetCompositeModelResult& WithAssetCompositeModelDescription(AssetCompositeModelDescriptionT&& value) { SetAssetCompositeModelDescription(std::forward<AssetCompositeModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline const Aws::String& GetAssetCompositeModelType() const { return m_assetCompositeModelType; }
    template<typename AssetCompositeModelTypeT = Aws::String>
    void SetAssetCompositeModelType(AssetCompositeModelTypeT&& value) { m_assetCompositeModelTypeHasBeenSet = true; m_assetCompositeModelType = std::forward<AssetCompositeModelTypeT>(value); }
    template<typename AssetCompositeModelTypeT = Aws::String>
    DescribeAssetCompositeModelResult& WithAssetCompositeModelType(AssetCompositeModelTypeT&& value) { SetAssetCompositeModelType(std::forward<AssetCompositeModelTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property definitions of the composite model that was used to create the
     * asset.</p>
     */
    inline const Aws::Vector<AssetProperty>& GetAssetCompositeModelProperties() const { return m_assetCompositeModelProperties; }
    template<typename AssetCompositeModelPropertiesT = Aws::Vector<AssetProperty>>
    void SetAssetCompositeModelProperties(AssetCompositeModelPropertiesT&& value) { m_assetCompositeModelPropertiesHasBeenSet = true; m_assetCompositeModelProperties = std::forward<AssetCompositeModelPropertiesT>(value); }
    template<typename AssetCompositeModelPropertiesT = Aws::Vector<AssetProperty>>
    DescribeAssetCompositeModelResult& WithAssetCompositeModelProperties(AssetCompositeModelPropertiesT&& value) { SetAssetCompositeModelProperties(std::forward<AssetCompositeModelPropertiesT>(value)); return *this;}
    template<typename AssetCompositeModelPropertiesT = AssetProperty>
    DescribeAssetCompositeModelResult& AddAssetCompositeModelProperties(AssetCompositeModelPropertiesT&& value) { m_assetCompositeModelPropertiesHasBeenSet = true; m_assetCompositeModelProperties.emplace_back(std::forward<AssetCompositeModelPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of composite model summaries.</p>
     */
    inline const Aws::Vector<AssetCompositeModelSummary>& GetAssetCompositeModelSummaries() const { return m_assetCompositeModelSummaries; }
    template<typename AssetCompositeModelSummariesT = Aws::Vector<AssetCompositeModelSummary>>
    void SetAssetCompositeModelSummaries(AssetCompositeModelSummariesT&& value) { m_assetCompositeModelSummariesHasBeenSet = true; m_assetCompositeModelSummaries = std::forward<AssetCompositeModelSummariesT>(value); }
    template<typename AssetCompositeModelSummariesT = Aws::Vector<AssetCompositeModelSummary>>
    DescribeAssetCompositeModelResult& WithAssetCompositeModelSummaries(AssetCompositeModelSummariesT&& value) { SetAssetCompositeModelSummaries(std::forward<AssetCompositeModelSummariesT>(value)); return *this;}
    template<typename AssetCompositeModelSummariesT = AssetCompositeModelSummary>
    DescribeAssetCompositeModelResult& AddAssetCompositeModelSummaries(AssetCompositeModelSummariesT&& value) { m_assetCompositeModelSummariesHasBeenSet = true; m_assetCompositeModelSummaries.emplace_back(std::forward<AssetCompositeModelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The available actions for a composite model on this asset.</p>
     */
    inline const Aws::Vector<ActionDefinition>& GetActionDefinitions() const { return m_actionDefinitions; }
    template<typename ActionDefinitionsT = Aws::Vector<ActionDefinition>>
    void SetActionDefinitions(ActionDefinitionsT&& value) { m_actionDefinitionsHasBeenSet = true; m_actionDefinitions = std::forward<ActionDefinitionsT>(value); }
    template<typename ActionDefinitionsT = Aws::Vector<ActionDefinition>>
    DescribeAssetCompositeModelResult& WithActionDefinitions(ActionDefinitionsT&& value) { SetActionDefinitions(std::forward<ActionDefinitionsT>(value)); return *this;}
    template<typename ActionDefinitionsT = ActionDefinition>
    DescribeAssetCompositeModelResult& AddActionDefinitions(ActionDefinitionsT&& value) { m_actionDefinitionsHasBeenSet = true; m_actionDefinitions.emplace_back(std::forward<ActionDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssetCompositeModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetCompositeModelId;
    bool m_assetCompositeModelIdHasBeenSet = false;

    Aws::String m_assetCompositeModelExternalId;
    bool m_assetCompositeModelExternalIdHasBeenSet = false;

    Aws::Vector<AssetCompositeModelPathSegment> m_assetCompositeModelPath;
    bool m_assetCompositeModelPathHasBeenSet = false;

    Aws::String m_assetCompositeModelName;
    bool m_assetCompositeModelNameHasBeenSet = false;

    Aws::String m_assetCompositeModelDescription;
    bool m_assetCompositeModelDescriptionHasBeenSet = false;

    Aws::String m_assetCompositeModelType;
    bool m_assetCompositeModelTypeHasBeenSet = false;

    Aws::Vector<AssetProperty> m_assetCompositeModelProperties;
    bool m_assetCompositeModelPropertiesHasBeenSet = false;

    Aws::Vector<AssetCompositeModelSummary> m_assetCompositeModelSummaries;
    bool m_assetCompositeModelSummariesHasBeenSet = false;

    Aws::Vector<ActionDefinition> m_actionDefinitions;
    bool m_actionDefinitionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
