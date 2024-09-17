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
    AWS_IOTSITEWISE_API DescribeAssetModelResult();
    AWS_IOTSITEWISE_API DescribeAssetModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelId = value; }
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelId = std::move(value); }
    inline void SetAssetModelId(const char* value) { m_assetModelId.assign(value); }
    inline DescribeAssetModelResult& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}
    inline DescribeAssetModelResult& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the asset model, if any.</p>
     */
    inline const Aws::String& GetAssetModelExternalId() const{ return m_assetModelExternalId; }
    inline void SetAssetModelExternalId(const Aws::String& value) { m_assetModelExternalId = value; }
    inline void SetAssetModelExternalId(Aws::String&& value) { m_assetModelExternalId = std::move(value); }
    inline void SetAssetModelExternalId(const char* value) { m_assetModelExternalId.assign(value); }
    inline DescribeAssetModelResult& WithAssetModelExternalId(const Aws::String& value) { SetAssetModelExternalId(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelExternalId(Aws::String&& value) { SetAssetModelExternalId(std::move(value)); return *this;}
    inline DescribeAssetModelResult& WithAssetModelExternalId(const char* value) { SetAssetModelExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetModelArn() const{ return m_assetModelArn; }
    inline void SetAssetModelArn(const Aws::String& value) { m_assetModelArn = value; }
    inline void SetAssetModelArn(Aws::String&& value) { m_assetModelArn = std::move(value); }
    inline void SetAssetModelArn(const char* value) { m_assetModelArn.assign(value); }
    inline DescribeAssetModelResult& WithAssetModelArn(const Aws::String& value) { SetAssetModelArn(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelArn(Aws::String&& value) { SetAssetModelArn(std::move(value)); return *this;}
    inline DescribeAssetModelResult& WithAssetModelArn(const char* value) { SetAssetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset model.</p>
     */
    inline const Aws::String& GetAssetModelName() const{ return m_assetModelName; }
    inline void SetAssetModelName(const Aws::String& value) { m_assetModelName = value; }
    inline void SetAssetModelName(Aws::String&& value) { m_assetModelName = std::move(value); }
    inline void SetAssetModelName(const char* value) { m_assetModelName.assign(value); }
    inline DescribeAssetModelResult& WithAssetModelName(const Aws::String& value) { SetAssetModelName(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelName(Aws::String&& value) { SetAssetModelName(std::move(value)); return *this;}
    inline DescribeAssetModelResult& WithAssetModelName(const char* value) { SetAssetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline const AssetModelType& GetAssetModelType() const{ return m_assetModelType; }
    inline void SetAssetModelType(const AssetModelType& value) { m_assetModelType = value; }
    inline void SetAssetModelType(AssetModelType&& value) { m_assetModelType = std::move(value); }
    inline DescribeAssetModelResult& WithAssetModelType(const AssetModelType& value) { SetAssetModelType(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelType(AssetModelType&& value) { SetAssetModelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset model's description.</p>
     */
    inline const Aws::String& GetAssetModelDescription() const{ return m_assetModelDescription; }
    inline void SetAssetModelDescription(const Aws::String& value) { m_assetModelDescription = value; }
    inline void SetAssetModelDescription(Aws::String&& value) { m_assetModelDescription = std::move(value); }
    inline void SetAssetModelDescription(const char* value) { m_assetModelDescription.assign(value); }
    inline DescribeAssetModelResult& WithAssetModelDescription(const Aws::String& value) { SetAssetModelDescription(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelDescription(Aws::String&& value) { SetAssetModelDescription(std::move(value)); return *this;}
    inline DescribeAssetModelResult& WithAssetModelDescription(const char* value) { SetAssetModelDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of asset properties for the asset model.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetModelCompositeModels</code> object.</p>
     */
    inline const Aws::Vector<AssetModelProperty>& GetAssetModelProperties() const{ return m_assetModelProperties; }
    inline void SetAssetModelProperties(const Aws::Vector<AssetModelProperty>& value) { m_assetModelProperties = value; }
    inline void SetAssetModelProperties(Aws::Vector<AssetModelProperty>&& value) { m_assetModelProperties = std::move(value); }
    inline DescribeAssetModelResult& WithAssetModelProperties(const Aws::Vector<AssetModelProperty>& value) { SetAssetModelProperties(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelProperties(Aws::Vector<AssetModelProperty>&& value) { SetAssetModelProperties(std::move(value)); return *this;}
    inline DescribeAssetModelResult& AddAssetModelProperties(const AssetModelProperty& value) { m_assetModelProperties.push_back(value); return *this; }
    inline DescribeAssetModelResult& AddAssetModelProperties(AssetModelProperty&& value) { m_assetModelProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of asset model hierarchies that each contain a
     * <code>childAssetModelId</code> and a <code>hierarchyId</code> (named
     * <code>id</code>). A hierarchy specifies allowed parent/child asset relationships
     * for an asset model.</p>
     */
    inline const Aws::Vector<AssetModelHierarchy>& GetAssetModelHierarchies() const{ return m_assetModelHierarchies; }
    inline void SetAssetModelHierarchies(const Aws::Vector<AssetModelHierarchy>& value) { m_assetModelHierarchies = value; }
    inline void SetAssetModelHierarchies(Aws::Vector<AssetModelHierarchy>&& value) { m_assetModelHierarchies = std::move(value); }
    inline DescribeAssetModelResult& WithAssetModelHierarchies(const Aws::Vector<AssetModelHierarchy>& value) { SetAssetModelHierarchies(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelHierarchies(Aws::Vector<AssetModelHierarchy>&& value) { SetAssetModelHierarchies(std::move(value)); return *this;}
    inline DescribeAssetModelResult& AddAssetModelHierarchies(const AssetModelHierarchy& value) { m_assetModelHierarchies.push_back(value); return *this; }
    inline DescribeAssetModelResult& AddAssetModelHierarchies(AssetModelHierarchy&& value) { m_assetModelHierarchies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of built-in composite models for the asset model, such as those with
     * those of type <code>AWS/ALARMS</code>.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModel>& GetAssetModelCompositeModels() const{ return m_assetModelCompositeModels; }
    inline void SetAssetModelCompositeModels(const Aws::Vector<AssetModelCompositeModel>& value) { m_assetModelCompositeModels = value; }
    inline void SetAssetModelCompositeModels(Aws::Vector<AssetModelCompositeModel>&& value) { m_assetModelCompositeModels = std::move(value); }
    inline DescribeAssetModelResult& WithAssetModelCompositeModels(const Aws::Vector<AssetModelCompositeModel>& value) { SetAssetModelCompositeModels(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelCompositeModels(Aws::Vector<AssetModelCompositeModel>&& value) { SetAssetModelCompositeModels(std::move(value)); return *this;}
    inline DescribeAssetModelResult& AddAssetModelCompositeModels(const AssetModelCompositeModel& value) { m_assetModelCompositeModels.push_back(value); return *this; }
    inline DescribeAssetModelResult& AddAssetModelCompositeModels(AssetModelCompositeModel&& value) { m_assetModelCompositeModels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of the immediate child custom composite model summaries for the
     * asset model.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelSummary>& GetAssetModelCompositeModelSummaries() const{ return m_assetModelCompositeModelSummaries; }
    inline void SetAssetModelCompositeModelSummaries(const Aws::Vector<AssetModelCompositeModelSummary>& value) { m_assetModelCompositeModelSummaries = value; }
    inline void SetAssetModelCompositeModelSummaries(Aws::Vector<AssetModelCompositeModelSummary>&& value) { m_assetModelCompositeModelSummaries = std::move(value); }
    inline DescribeAssetModelResult& WithAssetModelCompositeModelSummaries(const Aws::Vector<AssetModelCompositeModelSummary>& value) { SetAssetModelCompositeModelSummaries(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelCompositeModelSummaries(Aws::Vector<AssetModelCompositeModelSummary>&& value) { SetAssetModelCompositeModelSummaries(std::move(value)); return *this;}
    inline DescribeAssetModelResult& AddAssetModelCompositeModelSummaries(const AssetModelCompositeModelSummary& value) { m_assetModelCompositeModelSummaries.push_back(value); return *this; }
    inline DescribeAssetModelResult& AddAssetModelCompositeModelSummaries(AssetModelCompositeModelSummary&& value) { m_assetModelCompositeModelSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAssetModelCreationDate() const{ return m_assetModelCreationDate; }
    inline void SetAssetModelCreationDate(const Aws::Utils::DateTime& value) { m_assetModelCreationDate = value; }
    inline void SetAssetModelCreationDate(Aws::Utils::DateTime&& value) { m_assetModelCreationDate = std::move(value); }
    inline DescribeAssetModelResult& WithAssetModelCreationDate(const Aws::Utils::DateTime& value) { SetAssetModelCreationDate(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelCreationDate(Aws::Utils::DateTime&& value) { SetAssetModelCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAssetModelLastUpdateDate() const{ return m_assetModelLastUpdateDate; }
    inline void SetAssetModelLastUpdateDate(const Aws::Utils::DateTime& value) { m_assetModelLastUpdateDate = value; }
    inline void SetAssetModelLastUpdateDate(Aws::Utils::DateTime&& value) { m_assetModelLastUpdateDate = std::move(value); }
    inline DescribeAssetModelResult& WithAssetModelLastUpdateDate(const Aws::Utils::DateTime& value) { SetAssetModelLastUpdateDate(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelLastUpdateDate(Aws::Utils::DateTime&& value) { SetAssetModelLastUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the asset model, which contains a state and any error
     * message.</p>
     */
    inline const AssetModelStatus& GetAssetModelStatus() const{ return m_assetModelStatus; }
    inline void SetAssetModelStatus(const AssetModelStatus& value) { m_assetModelStatus = value; }
    inline void SetAssetModelStatus(AssetModelStatus&& value) { m_assetModelStatus = std::move(value); }
    inline DescribeAssetModelResult& WithAssetModelStatus(const AssetModelStatus& value) { SetAssetModelStatus(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelStatus(AssetModelStatus&& value) { SetAssetModelStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the asset model. See <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/model-active-version.html">
     * Asset model versions</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelVersion() const{ return m_assetModelVersion; }
    inline void SetAssetModelVersion(const Aws::String& value) { m_assetModelVersion = value; }
    inline void SetAssetModelVersion(Aws::String&& value) { m_assetModelVersion = std::move(value); }
    inline void SetAssetModelVersion(const char* value) { m_assetModelVersion.assign(value); }
    inline DescribeAssetModelResult& WithAssetModelVersion(const Aws::String& value) { SetAssetModelVersion(value); return *this;}
    inline DescribeAssetModelResult& WithAssetModelVersion(Aws::String&& value) { SetAssetModelVersion(std::move(value)); return *this;}
    inline DescribeAssetModelResult& WithAssetModelVersion(const char* value) { SetAssetModelVersion(value); return *this;}
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
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline DescribeAssetModelResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline DescribeAssetModelResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline DescribeAssetModelResult& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAssetModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAssetModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAssetModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;

    Aws::String m_assetModelExternalId;

    Aws::String m_assetModelArn;

    Aws::String m_assetModelName;

    AssetModelType m_assetModelType;

    Aws::String m_assetModelDescription;

    Aws::Vector<AssetModelProperty> m_assetModelProperties;

    Aws::Vector<AssetModelHierarchy> m_assetModelHierarchies;

    Aws::Vector<AssetModelCompositeModel> m_assetModelCompositeModels;

    Aws::Vector<AssetModelCompositeModelSummary> m_assetModelCompositeModelSummaries;

    Aws::Utils::DateTime m_assetModelCreationDate;

    Aws::Utils::DateTime m_assetModelLastUpdateDate;

    AssetModelStatus m_assetModelStatus;

    Aws::String m_assetModelVersion;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
