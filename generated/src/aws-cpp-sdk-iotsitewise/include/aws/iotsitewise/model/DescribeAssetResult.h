/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/AssetStatus.h>
#include <aws/iotsitewise/model/AssetProperty.h>
#include <aws/iotsitewise/model/AssetHierarchy.h>
#include <aws/iotsitewise/model/AssetCompositeModel.h>
#include <aws/iotsitewise/model/AssetCompositeModelSummary.h>
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
  class DescribeAssetResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeAssetResult() = default;
    AWS_IOTSITEWISE_API DescribeAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset, in UUID format.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    DescribeAssetResult& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the asset, if any.</p>
     */
    inline const Aws::String& GetAssetExternalId() const { return m_assetExternalId; }
    template<typename AssetExternalIdT = Aws::String>
    void SetAssetExternalId(AssetExternalIdT&& value) { m_assetExternalIdHasBeenSet = true; m_assetExternalId = std::forward<AssetExternalIdT>(value); }
    template<typename AssetExternalIdT = Aws::String>
    DescribeAssetResult& WithAssetExternalId(AssetExternalIdT&& value) { SetAssetExternalId(std::forward<AssetExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetArn() const { return m_assetArn; }
    template<typename AssetArnT = Aws::String>
    void SetAssetArn(AssetArnT&& value) { m_assetArnHasBeenSet = true; m_assetArn = std::forward<AssetArnT>(value); }
    template<typename AssetArnT = Aws::String>
    DescribeAssetResult& WithAssetArn(AssetArnT&& value) { SetAssetArn(std::forward<AssetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset.</p>
     */
    inline const Aws::String& GetAssetName() const { return m_assetName; }
    template<typename AssetNameT = Aws::String>
    void SetAssetName(AssetNameT&& value) { m_assetNameHasBeenSet = true; m_assetName = std::forward<AssetNameT>(value); }
    template<typename AssetNameT = Aws::String>
    DescribeAssetResult& WithAssetName(AssetNameT&& value) { SetAssetName(std::forward<AssetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset model that was used to create the asset.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    DescribeAssetResult& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of asset properties for the asset.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetCompositeModels</code> object.</p>
     */
    inline const Aws::Vector<AssetProperty>& GetAssetProperties() const { return m_assetProperties; }
    template<typename AssetPropertiesT = Aws::Vector<AssetProperty>>
    void SetAssetProperties(AssetPropertiesT&& value) { m_assetPropertiesHasBeenSet = true; m_assetProperties = std::forward<AssetPropertiesT>(value); }
    template<typename AssetPropertiesT = Aws::Vector<AssetProperty>>
    DescribeAssetResult& WithAssetProperties(AssetPropertiesT&& value) { SetAssetProperties(std::forward<AssetPropertiesT>(value)); return *this;}
    template<typename AssetPropertiesT = AssetProperty>
    DescribeAssetResult& AddAssetProperties(AssetPropertiesT&& value) { m_assetPropertiesHasBeenSet = true; m_assetProperties.emplace_back(std::forward<AssetPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline const Aws::Vector<AssetHierarchy>& GetAssetHierarchies() const { return m_assetHierarchies; }
    template<typename AssetHierarchiesT = Aws::Vector<AssetHierarchy>>
    void SetAssetHierarchies(AssetHierarchiesT&& value) { m_assetHierarchiesHasBeenSet = true; m_assetHierarchies = std::forward<AssetHierarchiesT>(value); }
    template<typename AssetHierarchiesT = Aws::Vector<AssetHierarchy>>
    DescribeAssetResult& WithAssetHierarchies(AssetHierarchiesT&& value) { SetAssetHierarchies(std::forward<AssetHierarchiesT>(value)); return *this;}
    template<typename AssetHierarchiesT = AssetHierarchy>
    DescribeAssetResult& AddAssetHierarchies(AssetHierarchiesT&& value) { m_assetHierarchiesHasBeenSet = true; m_assetHierarchies.emplace_back(std::forward<AssetHierarchiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The composite models for the asset.</p>
     */
    inline const Aws::Vector<AssetCompositeModel>& GetAssetCompositeModels() const { return m_assetCompositeModels; }
    template<typename AssetCompositeModelsT = Aws::Vector<AssetCompositeModel>>
    void SetAssetCompositeModels(AssetCompositeModelsT&& value) { m_assetCompositeModelsHasBeenSet = true; m_assetCompositeModels = std::forward<AssetCompositeModelsT>(value); }
    template<typename AssetCompositeModelsT = Aws::Vector<AssetCompositeModel>>
    DescribeAssetResult& WithAssetCompositeModels(AssetCompositeModelsT&& value) { SetAssetCompositeModels(std::forward<AssetCompositeModelsT>(value)); return *this;}
    template<typename AssetCompositeModelsT = AssetCompositeModel>
    DescribeAssetResult& AddAssetCompositeModels(AssetCompositeModelsT&& value) { m_assetCompositeModelsHasBeenSet = true; m_assetCompositeModels.emplace_back(std::forward<AssetCompositeModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAssetCreationDate() const { return m_assetCreationDate; }
    template<typename AssetCreationDateT = Aws::Utils::DateTime>
    void SetAssetCreationDate(AssetCreationDateT&& value) { m_assetCreationDateHasBeenSet = true; m_assetCreationDate = std::forward<AssetCreationDateT>(value); }
    template<typename AssetCreationDateT = Aws::Utils::DateTime>
    DescribeAssetResult& WithAssetCreationDate(AssetCreationDateT&& value) { SetAssetCreationDate(std::forward<AssetCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAssetLastUpdateDate() const { return m_assetLastUpdateDate; }
    template<typename AssetLastUpdateDateT = Aws::Utils::DateTime>
    void SetAssetLastUpdateDate(AssetLastUpdateDateT&& value) { m_assetLastUpdateDateHasBeenSet = true; m_assetLastUpdateDate = std::forward<AssetLastUpdateDateT>(value); }
    template<typename AssetLastUpdateDateT = Aws::Utils::DateTime>
    DescribeAssetResult& WithAssetLastUpdateDate(AssetLastUpdateDateT&& value) { SetAssetLastUpdateDate(std::forward<AssetLastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the asset, which contains a state and any error
     * message.</p>
     */
    inline const AssetStatus& GetAssetStatus() const { return m_assetStatus; }
    template<typename AssetStatusT = AssetStatus>
    void SetAssetStatus(AssetStatusT&& value) { m_assetStatusHasBeenSet = true; m_assetStatus = std::forward<AssetStatusT>(value); }
    template<typename AssetStatusT = AssetStatus>
    DescribeAssetResult& WithAssetStatus(AssetStatusT&& value) { SetAssetStatus(std::forward<AssetStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the asset.</p>
     */
    inline const Aws::String& GetAssetDescription() const { return m_assetDescription; }
    template<typename AssetDescriptionT = Aws::String>
    void SetAssetDescription(AssetDescriptionT&& value) { m_assetDescriptionHasBeenSet = true; m_assetDescription = std::forward<AssetDescriptionT>(value); }
    template<typename AssetDescriptionT = Aws::String>
    DescribeAssetResult& WithAssetDescription(AssetDescriptionT&& value) { SetAssetDescription(std::forward<AssetDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the immediate child custom composite model summaries for the
     * asset.</p>
     */
    inline const Aws::Vector<AssetCompositeModelSummary>& GetAssetCompositeModelSummaries() const { return m_assetCompositeModelSummaries; }
    template<typename AssetCompositeModelSummariesT = Aws::Vector<AssetCompositeModelSummary>>
    void SetAssetCompositeModelSummaries(AssetCompositeModelSummariesT&& value) { m_assetCompositeModelSummariesHasBeenSet = true; m_assetCompositeModelSummaries = std::forward<AssetCompositeModelSummariesT>(value); }
    template<typename AssetCompositeModelSummariesT = Aws::Vector<AssetCompositeModelSummary>>
    DescribeAssetResult& WithAssetCompositeModelSummaries(AssetCompositeModelSummariesT&& value) { SetAssetCompositeModelSummaries(std::forward<AssetCompositeModelSummariesT>(value)); return *this;}
    template<typename AssetCompositeModelSummariesT = AssetCompositeModelSummary>
    DescribeAssetResult& AddAssetCompositeModelSummaries(AssetCompositeModelSummariesT&& value) { m_assetCompositeModelSummariesHasBeenSet = true; m_assetCompositeModelSummaries.emplace_back(std::forward<AssetCompositeModelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetExternalId;
    bool m_assetExternalIdHasBeenSet = false;

    Aws::String m_assetArn;
    bool m_assetArnHasBeenSet = false;

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::Vector<AssetProperty> m_assetProperties;
    bool m_assetPropertiesHasBeenSet = false;

    Aws::Vector<AssetHierarchy> m_assetHierarchies;
    bool m_assetHierarchiesHasBeenSet = false;

    Aws::Vector<AssetCompositeModel> m_assetCompositeModels;
    bool m_assetCompositeModelsHasBeenSet = false;

    Aws::Utils::DateTime m_assetCreationDate{};
    bool m_assetCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_assetLastUpdateDate{};
    bool m_assetLastUpdateDateHasBeenSet = false;

    AssetStatus m_assetStatus;
    bool m_assetStatusHasBeenSet = false;

    Aws::String m_assetDescription;
    bool m_assetDescriptionHasBeenSet = false;

    Aws::Vector<AssetCompositeModelSummary> m_assetCompositeModelSummaries;
    bool m_assetCompositeModelSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
