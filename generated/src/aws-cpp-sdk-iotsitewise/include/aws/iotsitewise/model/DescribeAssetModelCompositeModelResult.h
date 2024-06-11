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
    AWS_IOTSITEWISE_API DescribeAssetModelCompositeModelResult();
    AWS_IOTSITEWISE_API DescribeAssetModelCompositeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetModelCompositeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelId = value; }
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelId = std::move(value); }
    inline void SetAssetModelId(const char* value) { m_assetModelId.assign(value); }
    inline DescribeAssetModelCompositeModelResult& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const{ return m_assetModelCompositeModelId; }
    inline void SetAssetModelCompositeModelId(const Aws::String& value) { m_assetModelCompositeModelId = value; }
    inline void SetAssetModelCompositeModelId(Aws::String&& value) { m_assetModelCompositeModelId = std::move(value); }
    inline void SetAssetModelCompositeModelId(const char* value) { m_assetModelCompositeModelId.assign(value); }
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelId(const Aws::String& value) { SetAssetModelCompositeModelId(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelId(Aws::String&& value) { SetAssetModelCompositeModelId(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelId(const char* value) { SetAssetModelCompositeModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of a composite model on this asset model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelExternalId() const{ return m_assetModelCompositeModelExternalId; }
    inline void SetAssetModelCompositeModelExternalId(const Aws::String& value) { m_assetModelCompositeModelExternalId = value; }
    inline void SetAssetModelCompositeModelExternalId(Aws::String&& value) { m_assetModelCompositeModelExternalId = std::move(value); }
    inline void SetAssetModelCompositeModelExternalId(const char* value) { m_assetModelCompositeModelExternalId.assign(value); }
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelExternalId(const Aws::String& value) { SetAssetModelCompositeModelExternalId(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelExternalId(Aws::String&& value) { SetAssetModelCompositeModelExternalId(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelExternalId(const char* value) { SetAssetModelCompositeModelExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelPathSegment>& GetAssetModelCompositeModelPath() const{ return m_assetModelCompositeModelPath; }
    inline void SetAssetModelCompositeModelPath(const Aws::Vector<AssetModelCompositeModelPathSegment>& value) { m_assetModelCompositeModelPath = value; }
    inline void SetAssetModelCompositeModelPath(Aws::Vector<AssetModelCompositeModelPathSegment>&& value) { m_assetModelCompositeModelPath = std::move(value); }
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelPath(const Aws::Vector<AssetModelCompositeModelPathSegment>& value) { SetAssetModelCompositeModelPath(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelPath(Aws::Vector<AssetModelCompositeModelPathSegment>&& value) { SetAssetModelCompositeModelPath(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& AddAssetModelCompositeModelPath(const AssetModelCompositeModelPathSegment& value) { m_assetModelCompositeModelPath.push_back(value); return *this; }
    inline DescribeAssetModelCompositeModelResult& AddAssetModelCompositeModelPath(AssetModelCompositeModelPathSegment&& value) { m_assetModelCompositeModelPath.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique, friendly name for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelName() const{ return m_assetModelCompositeModelName; }
    inline void SetAssetModelCompositeModelName(const Aws::String& value) { m_assetModelCompositeModelName = value; }
    inline void SetAssetModelCompositeModelName(Aws::String&& value) { m_assetModelCompositeModelName = std::move(value); }
    inline void SetAssetModelCompositeModelName(const char* value) { m_assetModelCompositeModelName.assign(value); }
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelName(const Aws::String& value) { SetAssetModelCompositeModelName(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelName(Aws::String&& value) { SetAssetModelCompositeModelName(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelName(const char* value) { SetAssetModelCompositeModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelDescription() const{ return m_assetModelCompositeModelDescription; }
    inline void SetAssetModelCompositeModelDescription(const Aws::String& value) { m_assetModelCompositeModelDescription = value; }
    inline void SetAssetModelCompositeModelDescription(Aws::String&& value) { m_assetModelCompositeModelDescription = std::move(value); }
    inline void SetAssetModelCompositeModelDescription(const char* value) { m_assetModelCompositeModelDescription.assign(value); }
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelDescription(const Aws::String& value) { SetAssetModelCompositeModelDescription(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelDescription(Aws::String&& value) { SetAssetModelCompositeModelDescription(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelDescription(const char* value) { SetAssetModelCompositeModelDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelType() const{ return m_assetModelCompositeModelType; }
    inline void SetAssetModelCompositeModelType(const Aws::String& value) { m_assetModelCompositeModelType = value; }
    inline void SetAssetModelCompositeModelType(Aws::String&& value) { m_assetModelCompositeModelType = std::move(value); }
    inline void SetAssetModelCompositeModelType(const char* value) { m_assetModelCompositeModelType.assign(value); }
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelType(const Aws::String& value) { SetAssetModelCompositeModelType(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelType(Aws::String&& value) { SetAssetModelCompositeModelType(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelType(const char* value) { SetAssetModelCompositeModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property definitions of the composite model.</p>
     */
    inline const Aws::Vector<AssetModelProperty>& GetAssetModelCompositeModelProperties() const{ return m_assetModelCompositeModelProperties; }
    inline void SetAssetModelCompositeModelProperties(const Aws::Vector<AssetModelProperty>& value) { m_assetModelCompositeModelProperties = value; }
    inline void SetAssetModelCompositeModelProperties(Aws::Vector<AssetModelProperty>&& value) { m_assetModelCompositeModelProperties = std::move(value); }
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelProperties(const Aws::Vector<AssetModelProperty>& value) { SetAssetModelCompositeModelProperties(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelProperties(Aws::Vector<AssetModelProperty>&& value) { SetAssetModelCompositeModelProperties(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& AddAssetModelCompositeModelProperties(const AssetModelProperty& value) { m_assetModelCompositeModelProperties.push_back(value); return *this; }
    inline DescribeAssetModelCompositeModelResult& AddAssetModelCompositeModelProperties(AssetModelProperty&& value) { m_assetModelCompositeModelProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata for the composition relationship established by using
     * <code>composedAssetModelId</code> in <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">
     * <code>CreateAssetModelCompositeModel</code> </a>. For instance, an array
     * detailing the path of the composition relationship for this composite model.</p>
     */
    inline const CompositionDetails& GetCompositionDetails() const{ return m_compositionDetails; }
    inline void SetCompositionDetails(const CompositionDetails& value) { m_compositionDetails = value; }
    inline void SetCompositionDetails(CompositionDetails&& value) { m_compositionDetails = std::move(value); }
    inline DescribeAssetModelCompositeModelResult& WithCompositionDetails(const CompositionDetails& value) { SetCompositionDetails(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithCompositionDetails(CompositionDetails&& value) { SetCompositionDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of composite model summaries for the composite model.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelSummary>& GetAssetModelCompositeModelSummaries() const{ return m_assetModelCompositeModelSummaries; }
    inline void SetAssetModelCompositeModelSummaries(const Aws::Vector<AssetModelCompositeModelSummary>& value) { m_assetModelCompositeModelSummaries = value; }
    inline void SetAssetModelCompositeModelSummaries(Aws::Vector<AssetModelCompositeModelSummary>&& value) { m_assetModelCompositeModelSummaries = std::move(value); }
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelSummaries(const Aws::Vector<AssetModelCompositeModelSummary>& value) { SetAssetModelCompositeModelSummaries(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithAssetModelCompositeModelSummaries(Aws::Vector<AssetModelCompositeModelSummary>&& value) { SetAssetModelCompositeModelSummaries(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& AddAssetModelCompositeModelSummaries(const AssetModelCompositeModelSummary& value) { m_assetModelCompositeModelSummaries.push_back(value); return *this; }
    inline DescribeAssetModelCompositeModelResult& AddAssetModelCompositeModelSummaries(AssetModelCompositeModelSummary&& value) { m_assetModelCompositeModelSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The available actions for a composite model on this asset model.</p>
     */
    inline const Aws::Vector<ActionDefinition>& GetActionDefinitions() const{ return m_actionDefinitions; }
    inline void SetActionDefinitions(const Aws::Vector<ActionDefinition>& value) { m_actionDefinitions = value; }
    inline void SetActionDefinitions(Aws::Vector<ActionDefinition>&& value) { m_actionDefinitions = std::move(value); }
    inline DescribeAssetModelCompositeModelResult& WithActionDefinitions(const Aws::Vector<ActionDefinition>& value) { SetActionDefinitions(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithActionDefinitions(Aws::Vector<ActionDefinition>&& value) { SetActionDefinitions(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& AddActionDefinitions(const ActionDefinition& value) { m_actionDefinitions.push_back(value); return *this; }
    inline DescribeAssetModelCompositeModelResult& AddActionDefinitions(ActionDefinition&& value) { m_actionDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAssetModelCompositeModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;

    Aws::String m_assetModelCompositeModelId;

    Aws::String m_assetModelCompositeModelExternalId;

    Aws::Vector<AssetModelCompositeModelPathSegment> m_assetModelCompositeModelPath;

    Aws::String m_assetModelCompositeModelName;

    Aws::String m_assetModelCompositeModelDescription;

    Aws::String m_assetModelCompositeModelType;

    Aws::Vector<AssetModelProperty> m_assetModelCompositeModelProperties;

    CompositionDetails m_compositionDetails;

    Aws::Vector<AssetModelCompositeModelSummary> m_assetModelCompositeModelSummaries;

    Aws::Vector<ActionDefinition> m_actionDefinitions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
