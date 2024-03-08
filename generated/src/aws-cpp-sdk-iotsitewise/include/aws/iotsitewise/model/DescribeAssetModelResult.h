/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/AssetModelStatus.h>
#include <aws/iotsitewise/model/AssetModelType.h>
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


    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelId = value; }

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelId.assign(value); }

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetModelArn() const{ return m_assetModelArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline void SetAssetModelArn(const Aws::String& value) { m_assetModelArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline void SetAssetModelArn(Aws::String&& value) { m_assetModelArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline void SetAssetModelArn(const char* value) { m_assetModelArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline DescribeAssetModelResult& WithAssetModelArn(const Aws::String& value) { SetAssetModelArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline DescribeAssetModelResult& WithAssetModelArn(Aws::String&& value) { SetAssetModelArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline DescribeAssetModelResult& WithAssetModelArn(const char* value) { SetAssetModelArn(value); return *this;}


    /**
     * <p>The name of the asset model.</p>
     */
    inline const Aws::String& GetAssetModelName() const{ return m_assetModelName; }

    /**
     * <p>The name of the asset model.</p>
     */
    inline void SetAssetModelName(const Aws::String& value) { m_assetModelName = value; }

    /**
     * <p>The name of the asset model.</p>
     */
    inline void SetAssetModelName(Aws::String&& value) { m_assetModelName = std::move(value); }

    /**
     * <p>The name of the asset model.</p>
     */
    inline void SetAssetModelName(const char* value) { m_assetModelName.assign(value); }

    /**
     * <p>The name of the asset model.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelName(const Aws::String& value) { SetAssetModelName(value); return *this;}

    /**
     * <p>The name of the asset model.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelName(Aws::String&& value) { SetAssetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset model.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelName(const char* value) { SetAssetModelName(value); return *this;}


    /**
     * <p>The asset model's description.</p>
     */
    inline const Aws::String& GetAssetModelDescription() const{ return m_assetModelDescription; }

    /**
     * <p>The asset model's description.</p>
     */
    inline void SetAssetModelDescription(const Aws::String& value) { m_assetModelDescription = value; }

    /**
     * <p>The asset model's description.</p>
     */
    inline void SetAssetModelDescription(Aws::String&& value) { m_assetModelDescription = std::move(value); }

    /**
     * <p>The asset model's description.</p>
     */
    inline void SetAssetModelDescription(const char* value) { m_assetModelDescription.assign(value); }

    /**
     * <p>The asset model's description.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelDescription(const Aws::String& value) { SetAssetModelDescription(value); return *this;}

    /**
     * <p>The asset model's description.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelDescription(Aws::String&& value) { SetAssetModelDescription(std::move(value)); return *this;}

    /**
     * <p>The asset model's description.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelDescription(const char* value) { SetAssetModelDescription(value); return *this;}


    /**
     * <p>The list of asset properties for the asset model.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetModelCompositeModels</code> object.</p>
     */
    inline const Aws::Vector<AssetModelProperty>& GetAssetModelProperties() const{ return m_assetModelProperties; }

    /**
     * <p>The list of asset properties for the asset model.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetModelCompositeModels</code> object.</p>
     */
    inline void SetAssetModelProperties(const Aws::Vector<AssetModelProperty>& value) { m_assetModelProperties = value; }

    /**
     * <p>The list of asset properties for the asset model.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetModelCompositeModels</code> object.</p>
     */
    inline void SetAssetModelProperties(Aws::Vector<AssetModelProperty>&& value) { m_assetModelProperties = std::move(value); }

    /**
     * <p>The list of asset properties for the asset model.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetModelCompositeModels</code> object.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelProperties(const Aws::Vector<AssetModelProperty>& value) { SetAssetModelProperties(value); return *this;}

    /**
     * <p>The list of asset properties for the asset model.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetModelCompositeModels</code> object.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelProperties(Aws::Vector<AssetModelProperty>&& value) { SetAssetModelProperties(std::move(value)); return *this;}

    /**
     * <p>The list of asset properties for the asset model.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetModelCompositeModels</code> object.</p>
     */
    inline DescribeAssetModelResult& AddAssetModelProperties(const AssetModelProperty& value) { m_assetModelProperties.push_back(value); return *this; }

    /**
     * <p>The list of asset properties for the asset model.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetModelCompositeModels</code> object.</p>
     */
    inline DescribeAssetModelResult& AddAssetModelProperties(AssetModelProperty&& value) { m_assetModelProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of asset model hierarchies that each contain a
     * <code>childAssetModelId</code> and a <code>hierarchyId</code> (named
     * <code>id</code>). A hierarchy specifies allowed parent/child asset relationships
     * for an asset model.</p>
     */
    inline const Aws::Vector<AssetModelHierarchy>& GetAssetModelHierarchies() const{ return m_assetModelHierarchies; }

    /**
     * <p>A list of asset model hierarchies that each contain a
     * <code>childAssetModelId</code> and a <code>hierarchyId</code> (named
     * <code>id</code>). A hierarchy specifies allowed parent/child asset relationships
     * for an asset model.</p>
     */
    inline void SetAssetModelHierarchies(const Aws::Vector<AssetModelHierarchy>& value) { m_assetModelHierarchies = value; }

    /**
     * <p>A list of asset model hierarchies that each contain a
     * <code>childAssetModelId</code> and a <code>hierarchyId</code> (named
     * <code>id</code>). A hierarchy specifies allowed parent/child asset relationships
     * for an asset model.</p>
     */
    inline void SetAssetModelHierarchies(Aws::Vector<AssetModelHierarchy>&& value) { m_assetModelHierarchies = std::move(value); }

    /**
     * <p>A list of asset model hierarchies that each contain a
     * <code>childAssetModelId</code> and a <code>hierarchyId</code> (named
     * <code>id</code>). A hierarchy specifies allowed parent/child asset relationships
     * for an asset model.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelHierarchies(const Aws::Vector<AssetModelHierarchy>& value) { SetAssetModelHierarchies(value); return *this;}

    /**
     * <p>A list of asset model hierarchies that each contain a
     * <code>childAssetModelId</code> and a <code>hierarchyId</code> (named
     * <code>id</code>). A hierarchy specifies allowed parent/child asset relationships
     * for an asset model.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelHierarchies(Aws::Vector<AssetModelHierarchy>&& value) { SetAssetModelHierarchies(std::move(value)); return *this;}

    /**
     * <p>A list of asset model hierarchies that each contain a
     * <code>childAssetModelId</code> and a <code>hierarchyId</code> (named
     * <code>id</code>). A hierarchy specifies allowed parent/child asset relationships
     * for an asset model.</p>
     */
    inline DescribeAssetModelResult& AddAssetModelHierarchies(const AssetModelHierarchy& value) { m_assetModelHierarchies.push_back(value); return *this; }

    /**
     * <p>A list of asset model hierarchies that each contain a
     * <code>childAssetModelId</code> and a <code>hierarchyId</code> (named
     * <code>id</code>). A hierarchy specifies allowed parent/child asset relationships
     * for an asset model.</p>
     */
    inline DescribeAssetModelResult& AddAssetModelHierarchies(AssetModelHierarchy&& value) { m_assetModelHierarchies.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of built-in composite models for the asset model, such as those with
     * those of type <code>AWS/ALARMS</code>.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModel>& GetAssetModelCompositeModels() const{ return m_assetModelCompositeModels; }

    /**
     * <p>The list of built-in composite models for the asset model, such as those with
     * those of type <code>AWS/ALARMS</code>.</p>
     */
    inline void SetAssetModelCompositeModels(const Aws::Vector<AssetModelCompositeModel>& value) { m_assetModelCompositeModels = value; }

    /**
     * <p>The list of built-in composite models for the asset model, such as those with
     * those of type <code>AWS/ALARMS</code>.</p>
     */
    inline void SetAssetModelCompositeModels(Aws::Vector<AssetModelCompositeModel>&& value) { m_assetModelCompositeModels = std::move(value); }

    /**
     * <p>The list of built-in composite models for the asset model, such as those with
     * those of type <code>AWS/ALARMS</code>.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelCompositeModels(const Aws::Vector<AssetModelCompositeModel>& value) { SetAssetModelCompositeModels(value); return *this;}

    /**
     * <p>The list of built-in composite models for the asset model, such as those with
     * those of type <code>AWS/ALARMS</code>.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelCompositeModels(Aws::Vector<AssetModelCompositeModel>&& value) { SetAssetModelCompositeModels(std::move(value)); return *this;}

    /**
     * <p>The list of built-in composite models for the asset model, such as those with
     * those of type <code>AWS/ALARMS</code>.</p>
     */
    inline DescribeAssetModelResult& AddAssetModelCompositeModels(const AssetModelCompositeModel& value) { m_assetModelCompositeModels.push_back(value); return *this; }

    /**
     * <p>The list of built-in composite models for the asset model, such as those with
     * those of type <code>AWS/ALARMS</code>.</p>
     */
    inline DescribeAssetModelResult& AddAssetModelCompositeModels(AssetModelCompositeModel&& value) { m_assetModelCompositeModels.push_back(std::move(value)); return *this; }


    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAssetModelCreationDate() const{ return m_assetModelCreationDate; }

    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline void SetAssetModelCreationDate(const Aws::Utils::DateTime& value) { m_assetModelCreationDate = value; }

    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline void SetAssetModelCreationDate(Aws::Utils::DateTime&& value) { m_assetModelCreationDate = std::move(value); }

    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelCreationDate(const Aws::Utils::DateTime& value) { SetAssetModelCreationDate(value); return *this;}

    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelCreationDate(Aws::Utils::DateTime&& value) { SetAssetModelCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAssetModelLastUpdateDate() const{ return m_assetModelLastUpdateDate; }

    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline void SetAssetModelLastUpdateDate(const Aws::Utils::DateTime& value) { m_assetModelLastUpdateDate = value; }

    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline void SetAssetModelLastUpdateDate(Aws::Utils::DateTime&& value) { m_assetModelLastUpdateDate = std::move(value); }

    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelLastUpdateDate(const Aws::Utils::DateTime& value) { SetAssetModelLastUpdateDate(value); return *this;}

    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelLastUpdateDate(Aws::Utils::DateTime&& value) { SetAssetModelLastUpdateDate(std::move(value)); return *this;}


    /**
     * <p>The current status of the asset model, which contains a state and any error
     * message.</p>
     */
    inline const AssetModelStatus& GetAssetModelStatus() const{ return m_assetModelStatus; }

    /**
     * <p>The current status of the asset model, which contains a state and any error
     * message.</p>
     */
    inline void SetAssetModelStatus(const AssetModelStatus& value) { m_assetModelStatus = value; }

    /**
     * <p>The current status of the asset model, which contains a state and any error
     * message.</p>
     */
    inline void SetAssetModelStatus(AssetModelStatus&& value) { m_assetModelStatus = std::move(value); }

    /**
     * <p>The current status of the asset model, which contains a state and any error
     * message.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelStatus(const AssetModelStatus& value) { SetAssetModelStatus(value); return *this;}

    /**
     * <p>The current status of the asset model, which contains a state and any error
     * message.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelStatus(AssetModelStatus&& value) { SetAssetModelStatus(std::move(value)); return *this;}


    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline const AssetModelType& GetAssetModelType() const{ return m_assetModelType; }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline void SetAssetModelType(const AssetModelType& value) { m_assetModelType = value; }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline void SetAssetModelType(AssetModelType&& value) { m_assetModelType = std::move(value); }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline DescribeAssetModelResult& WithAssetModelType(const AssetModelType& value) { SetAssetModelType(value); return *this;}

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline DescribeAssetModelResult& WithAssetModelType(AssetModelType&& value) { SetAssetModelType(std::move(value)); return *this;}


    /**
     * <p>The list of the immediate child custom composite model summaries for the
     * asset model.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelSummary>& GetAssetModelCompositeModelSummaries() const{ return m_assetModelCompositeModelSummaries; }

    /**
     * <p>The list of the immediate child custom composite model summaries for the
     * asset model.</p>
     */
    inline void SetAssetModelCompositeModelSummaries(const Aws::Vector<AssetModelCompositeModelSummary>& value) { m_assetModelCompositeModelSummaries = value; }

    /**
     * <p>The list of the immediate child custom composite model summaries for the
     * asset model.</p>
     */
    inline void SetAssetModelCompositeModelSummaries(Aws::Vector<AssetModelCompositeModelSummary>&& value) { m_assetModelCompositeModelSummaries = std::move(value); }

    /**
     * <p>The list of the immediate child custom composite model summaries for the
     * asset model.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelCompositeModelSummaries(const Aws::Vector<AssetModelCompositeModelSummary>& value) { SetAssetModelCompositeModelSummaries(value); return *this;}

    /**
     * <p>The list of the immediate child custom composite model summaries for the
     * asset model.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelCompositeModelSummaries(Aws::Vector<AssetModelCompositeModelSummary>&& value) { SetAssetModelCompositeModelSummaries(std::move(value)); return *this;}

    /**
     * <p>The list of the immediate child custom composite model summaries for the
     * asset model.</p>
     */
    inline DescribeAssetModelResult& AddAssetModelCompositeModelSummaries(const AssetModelCompositeModelSummary& value) { m_assetModelCompositeModelSummaries.push_back(value); return *this; }

    /**
     * <p>The list of the immediate child custom composite model summaries for the
     * asset model.</p>
     */
    inline DescribeAssetModelResult& AddAssetModelCompositeModelSummaries(AssetModelCompositeModelSummary&& value) { m_assetModelCompositeModelSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The external ID of the asset model, if any.</p>
     */
    inline const Aws::String& GetAssetModelExternalId() const{ return m_assetModelExternalId; }

    /**
     * <p>The external ID of the asset model, if any.</p>
     */
    inline void SetAssetModelExternalId(const Aws::String& value) { m_assetModelExternalId = value; }

    /**
     * <p>The external ID of the asset model, if any.</p>
     */
    inline void SetAssetModelExternalId(Aws::String&& value) { m_assetModelExternalId = std::move(value); }

    /**
     * <p>The external ID of the asset model, if any.</p>
     */
    inline void SetAssetModelExternalId(const char* value) { m_assetModelExternalId.assign(value); }

    /**
     * <p>The external ID of the asset model, if any.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelExternalId(const Aws::String& value) { SetAssetModelExternalId(value); return *this;}

    /**
     * <p>The external ID of the asset model, if any.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelExternalId(Aws::String&& value) { SetAssetModelExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID of the asset model, if any.</p>
     */
    inline DescribeAssetModelResult& WithAssetModelExternalId(const char* value) { SetAssetModelExternalId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAssetModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAssetModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAssetModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_assetModelId;

    Aws::String m_assetModelArn;

    Aws::String m_assetModelName;

    Aws::String m_assetModelDescription;

    Aws::Vector<AssetModelProperty> m_assetModelProperties;

    Aws::Vector<AssetModelHierarchy> m_assetModelHierarchies;

    Aws::Vector<AssetModelCompositeModel> m_assetModelCompositeModels;

    Aws::Utils::DateTime m_assetModelCreationDate;

    Aws::Utils::DateTime m_assetModelLastUpdateDate;

    AssetModelStatus m_assetModelStatus;

    AssetModelType m_assetModelType;

    Aws::Vector<AssetModelCompositeModelSummary> m_assetModelCompositeModelSummaries;

    Aws::String m_assetModelExternalId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
