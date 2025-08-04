/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetModelType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/AssetModelStatus.h>
#include <aws/iotsitewise/model/AssetModelProperty.h>
#include <aws/iotsitewise/model/AssetModelHierarchy.h>
#include <aws/iotsitewise/model/AssetModelCompositeModel.h>
#include <aws/iotsitewise/model/AssetModelCompositeModelSummary.h>
#include <aws/iotsitewise/model/InterfaceRelationship.h>
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
  class DescribeAssetModelResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeAssetModelResult() = default;
    AWS_IOTSITEWISE_API DescribeAssetModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    DescribeAssetModelResult& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the asset model, if any.</p>
     */
    inline const Aws::String& GetAssetModelExternalId() const { return m_assetModelExternalId; }
    template<typename AssetModelExternalIdT = Aws::String>
    void SetAssetModelExternalId(AssetModelExternalIdT&& value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId = std::forward<AssetModelExternalIdT>(value); }
    template<typename AssetModelExternalIdT = Aws::String>
    DescribeAssetModelResult& WithAssetModelExternalId(AssetModelExternalIdT&& value) { SetAssetModelExternalId(std::forward<AssetModelExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetModelArn() const { return m_assetModelArn; }
    template<typename AssetModelArnT = Aws::String>
    void SetAssetModelArn(AssetModelArnT&& value) { m_assetModelArnHasBeenSet = true; m_assetModelArn = std::forward<AssetModelArnT>(value); }
    template<typename AssetModelArnT = Aws::String>
    DescribeAssetModelResult& WithAssetModelArn(AssetModelArnT&& value) { SetAssetModelArn(std::forward<AssetModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset model.</p>
     */
    inline const Aws::String& GetAssetModelName() const { return m_assetModelName; }
    template<typename AssetModelNameT = Aws::String>
    void SetAssetModelName(AssetModelNameT&& value) { m_assetModelNameHasBeenSet = true; m_assetModelName = std::forward<AssetModelNameT>(value); }
    template<typename AssetModelNameT = Aws::String>
    DescribeAssetModelResult& WithAssetModelName(AssetModelNameT&& value) { SetAssetModelName(std::forward<AssetModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline AssetModelType GetAssetModelType() const { return m_assetModelType; }
    inline void SetAssetModelType(AssetModelType value) { m_assetModelTypeHasBeenSet = true; m_assetModelType = value; }
    inline DescribeAssetModelResult& WithAssetModelType(AssetModelType value) { SetAssetModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset model's description.</p>
     */
    inline const Aws::String& GetAssetModelDescription() const { return m_assetModelDescription; }
    template<typename AssetModelDescriptionT = Aws::String>
    void SetAssetModelDescription(AssetModelDescriptionT&& value) { m_assetModelDescriptionHasBeenSet = true; m_assetModelDescription = std::forward<AssetModelDescriptionT>(value); }
    template<typename AssetModelDescriptionT = Aws::String>
    DescribeAssetModelResult& WithAssetModelDescription(AssetModelDescriptionT&& value) { SetAssetModelDescription(std::forward<AssetModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of asset properties for the asset model.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetModelCompositeModels</code> object.</p>
     */
    inline const Aws::Vector<AssetModelProperty>& GetAssetModelProperties() const { return m_assetModelProperties; }
    template<typename AssetModelPropertiesT = Aws::Vector<AssetModelProperty>>
    void SetAssetModelProperties(AssetModelPropertiesT&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties = std::forward<AssetModelPropertiesT>(value); }
    template<typename AssetModelPropertiesT = Aws::Vector<AssetModelProperty>>
    DescribeAssetModelResult& WithAssetModelProperties(AssetModelPropertiesT&& value) { SetAssetModelProperties(std::forward<AssetModelPropertiesT>(value)); return *this;}
    template<typename AssetModelPropertiesT = AssetModelProperty>
    DescribeAssetModelResult& AddAssetModelProperties(AssetModelPropertiesT&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties.emplace_back(std::forward<AssetModelPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of asset model hierarchies that each contain a
     * <code>childAssetModelId</code> and a <code>hierarchyId</code> (named
     * <code>id</code>). A hierarchy specifies allowed parent/child asset relationships
     * for an asset model.</p>
     */
    inline const Aws::Vector<AssetModelHierarchy>& GetAssetModelHierarchies() const { return m_assetModelHierarchies; }
    template<typename AssetModelHierarchiesT = Aws::Vector<AssetModelHierarchy>>
    void SetAssetModelHierarchies(AssetModelHierarchiesT&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies = std::forward<AssetModelHierarchiesT>(value); }
    template<typename AssetModelHierarchiesT = Aws::Vector<AssetModelHierarchy>>
    DescribeAssetModelResult& WithAssetModelHierarchies(AssetModelHierarchiesT&& value) { SetAssetModelHierarchies(std::forward<AssetModelHierarchiesT>(value)); return *this;}
    template<typename AssetModelHierarchiesT = AssetModelHierarchy>
    DescribeAssetModelResult& AddAssetModelHierarchies(AssetModelHierarchiesT&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies.emplace_back(std::forward<AssetModelHierarchiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of built-in composite models for the asset model, such as those with
     * those of type <code>AWS/ALARMS</code>.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModel>& GetAssetModelCompositeModels() const { return m_assetModelCompositeModels; }
    template<typename AssetModelCompositeModelsT = Aws::Vector<AssetModelCompositeModel>>
    void SetAssetModelCompositeModels(AssetModelCompositeModelsT&& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels = std::forward<AssetModelCompositeModelsT>(value); }
    template<typename AssetModelCompositeModelsT = Aws::Vector<AssetModelCompositeModel>>
    DescribeAssetModelResult& WithAssetModelCompositeModels(AssetModelCompositeModelsT&& value) { SetAssetModelCompositeModels(std::forward<AssetModelCompositeModelsT>(value)); return *this;}
    template<typename AssetModelCompositeModelsT = AssetModelCompositeModel>
    DescribeAssetModelResult& AddAssetModelCompositeModels(AssetModelCompositeModelsT&& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels.emplace_back(std::forward<AssetModelCompositeModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of the immediate child custom composite model summaries for the
     * asset model.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelSummary>& GetAssetModelCompositeModelSummaries() const { return m_assetModelCompositeModelSummaries; }
    template<typename AssetModelCompositeModelSummariesT = Aws::Vector<AssetModelCompositeModelSummary>>
    void SetAssetModelCompositeModelSummaries(AssetModelCompositeModelSummariesT&& value) { m_assetModelCompositeModelSummariesHasBeenSet = true; m_assetModelCompositeModelSummaries = std::forward<AssetModelCompositeModelSummariesT>(value); }
    template<typename AssetModelCompositeModelSummariesT = Aws::Vector<AssetModelCompositeModelSummary>>
    DescribeAssetModelResult& WithAssetModelCompositeModelSummaries(AssetModelCompositeModelSummariesT&& value) { SetAssetModelCompositeModelSummaries(std::forward<AssetModelCompositeModelSummariesT>(value)); return *this;}
    template<typename AssetModelCompositeModelSummariesT = AssetModelCompositeModelSummary>
    DescribeAssetModelResult& AddAssetModelCompositeModelSummaries(AssetModelCompositeModelSummariesT&& value) { m_assetModelCompositeModelSummariesHasBeenSet = true; m_assetModelCompositeModelSummaries.emplace_back(std::forward<AssetModelCompositeModelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAssetModelCreationDate() const { return m_assetModelCreationDate; }
    template<typename AssetModelCreationDateT = Aws::Utils::DateTime>
    void SetAssetModelCreationDate(AssetModelCreationDateT&& value) { m_assetModelCreationDateHasBeenSet = true; m_assetModelCreationDate = std::forward<AssetModelCreationDateT>(value); }
    template<typename AssetModelCreationDateT = Aws::Utils::DateTime>
    DescribeAssetModelResult& WithAssetModelCreationDate(AssetModelCreationDateT&& value) { SetAssetModelCreationDate(std::forward<AssetModelCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAssetModelLastUpdateDate() const { return m_assetModelLastUpdateDate; }
    template<typename AssetModelLastUpdateDateT = Aws::Utils::DateTime>
    void SetAssetModelLastUpdateDate(AssetModelLastUpdateDateT&& value) { m_assetModelLastUpdateDateHasBeenSet = true; m_assetModelLastUpdateDate = std::forward<AssetModelLastUpdateDateT>(value); }
    template<typename AssetModelLastUpdateDateT = Aws::Utils::DateTime>
    DescribeAssetModelResult& WithAssetModelLastUpdateDate(AssetModelLastUpdateDateT&& value) { SetAssetModelLastUpdateDate(std::forward<AssetModelLastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the asset model, which contains a state and any error
     * message.</p>
     */
    inline const AssetModelStatus& GetAssetModelStatus() const { return m_assetModelStatus; }
    template<typename AssetModelStatusT = AssetModelStatus>
    void SetAssetModelStatus(AssetModelStatusT&& value) { m_assetModelStatusHasBeenSet = true; m_assetModelStatus = std::forward<AssetModelStatusT>(value); }
    template<typename AssetModelStatusT = AssetModelStatus>
    DescribeAssetModelResult& WithAssetModelStatus(AssetModelStatusT&& value) { SetAssetModelStatus(std::forward<AssetModelStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the asset model. See <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/model-active-version.html">
     * Asset model versions</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelVersion() const { return m_assetModelVersion; }
    template<typename AssetModelVersionT = Aws::String>
    void SetAssetModelVersion(AssetModelVersionT&& value) { m_assetModelVersionHasBeenSet = true; m_assetModelVersion = std::forward<AssetModelVersionT>(value); }
    template<typename AssetModelVersionT = Aws::String>
    DescribeAssetModelResult& WithAssetModelVersion(AssetModelVersionT&& value) { SetAssetModelVersion(std::forward<AssetModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of interface details that describe the interfaces implemented by this
     * asset model, including interface asset model IDs and property mappings.</p>
     */
    inline const Aws::Vector<InterfaceRelationship>& GetInterfaceDetails() const { return m_interfaceDetails; }
    template<typename InterfaceDetailsT = Aws::Vector<InterfaceRelationship>>
    void SetInterfaceDetails(InterfaceDetailsT&& value) { m_interfaceDetailsHasBeenSet = true; m_interfaceDetails = std::forward<InterfaceDetailsT>(value); }
    template<typename InterfaceDetailsT = Aws::Vector<InterfaceRelationship>>
    DescribeAssetModelResult& WithInterfaceDetails(InterfaceDetailsT&& value) { SetInterfaceDetails(std::forward<InterfaceDetailsT>(value)); return *this;}
    template<typename InterfaceDetailsT = InterfaceRelationship>
    DescribeAssetModelResult& AddInterfaceDetails(InterfaceDetailsT&& value) { m_interfaceDetailsHasBeenSet = true; m_interfaceDetails.emplace_back(std::forward<InterfaceDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entity tag (ETag) is a hash of the retrieved version of the asset model.
     * It's used to make concurrent updates safely to the resource. See <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/opt-locking-for-model.html">Optimistic
     * locking for asset model writes</a> in the <i>IoT SiteWise User Guide</i>. </p>
     * <p>See <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/opt-locking-for-model.html">
     * Optimistic locking for asset model writes</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    DescribeAssetModelResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssetModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelExternalId;
    bool m_assetModelExternalIdHasBeenSet = false;

    Aws::String m_assetModelArn;
    bool m_assetModelArnHasBeenSet = false;

    Aws::String m_assetModelName;
    bool m_assetModelNameHasBeenSet = false;

    AssetModelType m_assetModelType{AssetModelType::NOT_SET};
    bool m_assetModelTypeHasBeenSet = false;

    Aws::String m_assetModelDescription;
    bool m_assetModelDescriptionHasBeenSet = false;

    Aws::Vector<AssetModelProperty> m_assetModelProperties;
    bool m_assetModelPropertiesHasBeenSet = false;

    Aws::Vector<AssetModelHierarchy> m_assetModelHierarchies;
    bool m_assetModelHierarchiesHasBeenSet = false;

    Aws::Vector<AssetModelCompositeModel> m_assetModelCompositeModels;
    bool m_assetModelCompositeModelsHasBeenSet = false;

    Aws::Vector<AssetModelCompositeModelSummary> m_assetModelCompositeModelSummaries;
    bool m_assetModelCompositeModelSummariesHasBeenSet = false;

    Aws::Utils::DateTime m_assetModelCreationDate{};
    bool m_assetModelCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_assetModelLastUpdateDate{};
    bool m_assetModelLastUpdateDateHasBeenSet = false;

    AssetModelStatus m_assetModelStatus;
    bool m_assetModelStatusHasBeenSet = false;

    Aws::String m_assetModelVersion;
    bool m_assetModelVersionHasBeenSet = false;

    Aws::Vector<InterfaceRelationship> m_interfaceDetails;
    bool m_interfaceDetailsHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
