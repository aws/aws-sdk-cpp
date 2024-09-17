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
    AWS_IOTSITEWISE_API DescribeAssetCompositeModelResult();
    AWS_IOTSITEWISE_API DescribeAssetCompositeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetCompositeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset, in UUID format. This ID uniquely identifies the asset
     * within IoT SiteWise and can be used with other IoT SiteWise APIs.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline void SetAssetId(const Aws::String& value) { m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetId.assign(value); }
    inline DescribeAssetCompositeModelResult& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a composite model on this asset.</p>
     */
    inline const Aws::String& GetAssetCompositeModelId() const{ return m_assetCompositeModelId; }
    inline void SetAssetCompositeModelId(const Aws::String& value) { m_assetCompositeModelId = value; }
    inline void SetAssetCompositeModelId(Aws::String&& value) { m_assetCompositeModelId = std::move(value); }
    inline void SetAssetCompositeModelId(const char* value) { m_assetCompositeModelId.assign(value); }
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelId(const Aws::String& value) { SetAssetCompositeModelId(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelId(Aws::String&& value) { SetAssetCompositeModelId(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelId(const char* value) { SetAssetCompositeModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An external ID to assign to the asset model.</p> <p>If the composite model is
     * a component-based composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline const Aws::String& GetAssetCompositeModelExternalId() const{ return m_assetCompositeModelExternalId; }
    inline void SetAssetCompositeModelExternalId(const Aws::String& value) { m_assetCompositeModelExternalId = value; }
    inline void SetAssetCompositeModelExternalId(Aws::String&& value) { m_assetCompositeModelExternalId = std::move(value); }
    inline void SetAssetCompositeModelExternalId(const char* value) { m_assetCompositeModelExternalId.assign(value); }
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelExternalId(const Aws::String& value) { SetAssetCompositeModelExternalId(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelExternalId(Aws::String&& value) { SetAssetCompositeModelExternalId(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelExternalId(const char* value) { SetAssetCompositeModelExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline const Aws::Vector<AssetCompositeModelPathSegment>& GetAssetCompositeModelPath() const{ return m_assetCompositeModelPath; }
    inline void SetAssetCompositeModelPath(const Aws::Vector<AssetCompositeModelPathSegment>& value) { m_assetCompositeModelPath = value; }
    inline void SetAssetCompositeModelPath(Aws::Vector<AssetCompositeModelPathSegment>&& value) { m_assetCompositeModelPath = std::move(value); }
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelPath(const Aws::Vector<AssetCompositeModelPathSegment>& value) { SetAssetCompositeModelPath(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelPath(Aws::Vector<AssetCompositeModelPathSegment>&& value) { SetAssetCompositeModelPath(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& AddAssetCompositeModelPath(const AssetCompositeModelPathSegment& value) { m_assetCompositeModelPath.push_back(value); return *this; }
    inline DescribeAssetCompositeModelResult& AddAssetCompositeModelPath(AssetCompositeModelPathSegment&& value) { m_assetCompositeModelPath.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique, friendly name for the composite model.</p>
     */
    inline const Aws::String& GetAssetCompositeModelName() const{ return m_assetCompositeModelName; }
    inline void SetAssetCompositeModelName(const Aws::String& value) { m_assetCompositeModelName = value; }
    inline void SetAssetCompositeModelName(Aws::String&& value) { m_assetCompositeModelName = std::move(value); }
    inline void SetAssetCompositeModelName(const char* value) { m_assetCompositeModelName.assign(value); }
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelName(const Aws::String& value) { SetAssetCompositeModelName(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelName(Aws::String&& value) { SetAssetCompositeModelName(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelName(const char* value) { SetAssetCompositeModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the composite model.</p>
     */
    inline const Aws::String& GetAssetCompositeModelDescription() const{ return m_assetCompositeModelDescription; }
    inline void SetAssetCompositeModelDescription(const Aws::String& value) { m_assetCompositeModelDescription = value; }
    inline void SetAssetCompositeModelDescription(Aws::String&& value) { m_assetCompositeModelDescription = std::move(value); }
    inline void SetAssetCompositeModelDescription(const char* value) { m_assetCompositeModelDescription.assign(value); }
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelDescription(const Aws::String& value) { SetAssetCompositeModelDescription(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelDescription(Aws::String&& value) { SetAssetCompositeModelDescription(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelDescription(const char* value) { SetAssetCompositeModelDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline const Aws::String& GetAssetCompositeModelType() const{ return m_assetCompositeModelType; }
    inline void SetAssetCompositeModelType(const Aws::String& value) { m_assetCompositeModelType = value; }
    inline void SetAssetCompositeModelType(Aws::String&& value) { m_assetCompositeModelType = std::move(value); }
    inline void SetAssetCompositeModelType(const char* value) { m_assetCompositeModelType.assign(value); }
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelType(const Aws::String& value) { SetAssetCompositeModelType(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelType(Aws::String&& value) { SetAssetCompositeModelType(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelType(const char* value) { SetAssetCompositeModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property definitions of the composite model that was used to create the
     * asset.</p>
     */
    inline const Aws::Vector<AssetProperty>& GetAssetCompositeModelProperties() const{ return m_assetCompositeModelProperties; }
    inline void SetAssetCompositeModelProperties(const Aws::Vector<AssetProperty>& value) { m_assetCompositeModelProperties = value; }
    inline void SetAssetCompositeModelProperties(Aws::Vector<AssetProperty>&& value) { m_assetCompositeModelProperties = std::move(value); }
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelProperties(const Aws::Vector<AssetProperty>& value) { SetAssetCompositeModelProperties(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelProperties(Aws::Vector<AssetProperty>&& value) { SetAssetCompositeModelProperties(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& AddAssetCompositeModelProperties(const AssetProperty& value) { m_assetCompositeModelProperties.push_back(value); return *this; }
    inline DescribeAssetCompositeModelResult& AddAssetCompositeModelProperties(AssetProperty&& value) { m_assetCompositeModelProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of composite model summaries.</p>
     */
    inline const Aws::Vector<AssetCompositeModelSummary>& GetAssetCompositeModelSummaries() const{ return m_assetCompositeModelSummaries; }
    inline void SetAssetCompositeModelSummaries(const Aws::Vector<AssetCompositeModelSummary>& value) { m_assetCompositeModelSummaries = value; }
    inline void SetAssetCompositeModelSummaries(Aws::Vector<AssetCompositeModelSummary>&& value) { m_assetCompositeModelSummaries = std::move(value); }
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelSummaries(const Aws::Vector<AssetCompositeModelSummary>& value) { SetAssetCompositeModelSummaries(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithAssetCompositeModelSummaries(Aws::Vector<AssetCompositeModelSummary>&& value) { SetAssetCompositeModelSummaries(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& AddAssetCompositeModelSummaries(const AssetCompositeModelSummary& value) { m_assetCompositeModelSummaries.push_back(value); return *this; }
    inline DescribeAssetCompositeModelResult& AddAssetCompositeModelSummaries(AssetCompositeModelSummary&& value) { m_assetCompositeModelSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The available actions for a composite model on this asset.</p>
     */
    inline const Aws::Vector<ActionDefinition>& GetActionDefinitions() const{ return m_actionDefinitions; }
    inline void SetActionDefinitions(const Aws::Vector<ActionDefinition>& value) { m_actionDefinitions = value; }
    inline void SetActionDefinitions(Aws::Vector<ActionDefinition>&& value) { m_actionDefinitions = std::move(value); }
    inline DescribeAssetCompositeModelResult& WithActionDefinitions(const Aws::Vector<ActionDefinition>& value) { SetActionDefinitions(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithActionDefinitions(Aws::Vector<ActionDefinition>&& value) { SetActionDefinitions(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& AddActionDefinitions(const ActionDefinition& value) { m_actionDefinitions.push_back(value); return *this; }
    inline DescribeAssetCompositeModelResult& AddActionDefinitions(ActionDefinition&& value) { m_actionDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAssetCompositeModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAssetCompositeModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAssetCompositeModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;

    Aws::String m_assetCompositeModelId;

    Aws::String m_assetCompositeModelExternalId;

    Aws::Vector<AssetCompositeModelPathSegment> m_assetCompositeModelPath;

    Aws::String m_assetCompositeModelName;

    Aws::String m_assetCompositeModelDescription;

    Aws::String m_assetCompositeModelType;

    Aws::Vector<AssetProperty> m_assetCompositeModelProperties;

    Aws::Vector<AssetCompositeModelSummary> m_assetCompositeModelSummaries;

    Aws::Vector<ActionDefinition> m_actionDefinitions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
