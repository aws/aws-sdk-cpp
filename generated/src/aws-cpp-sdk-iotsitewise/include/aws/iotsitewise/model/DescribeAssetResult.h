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
    AWS_IOTSITEWISE_API DescribeAssetResult();
    AWS_IOTSITEWISE_API DescribeAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetId = value; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetId = std::move(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(const char* value) { m_assetId.assign(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline DescribeAssetResult& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline DescribeAssetResult& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline DescribeAssetResult& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetArn() const{ return m_assetArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline void SetAssetArn(const Aws::String& value) { m_assetArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline void SetAssetArn(Aws::String&& value) { m_assetArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline void SetAssetArn(const char* value) { m_assetArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline DescribeAssetResult& WithAssetArn(const Aws::String& value) { SetAssetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline DescribeAssetResult& WithAssetArn(Aws::String&& value) { SetAssetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline DescribeAssetResult& WithAssetArn(const char* value) { SetAssetArn(value); return *this;}


    /**
     * <p>The name of the asset.</p>
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    /**
     * <p>The name of the asset.</p>
     */
    inline void SetAssetName(const Aws::String& value) { m_assetName = value; }

    /**
     * <p>The name of the asset.</p>
     */
    inline void SetAssetName(Aws::String&& value) { m_assetName = std::move(value); }

    /**
     * <p>The name of the asset.</p>
     */
    inline void SetAssetName(const char* value) { m_assetName.assign(value); }

    /**
     * <p>The name of the asset.</p>
     */
    inline DescribeAssetResult& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    /**
     * <p>The name of the asset.</p>
     */
    inline DescribeAssetResult& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset.</p>
     */
    inline DescribeAssetResult& WithAssetName(const char* value) { SetAssetName(value); return *this;}


    /**
     * <p>The ID of the asset model that was used to create the asset.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID of the asset model that was used to create the asset.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelId = value; }

    /**
     * <p>The ID of the asset model that was used to create the asset.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model that was used to create the asset.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelId.assign(value); }

    /**
     * <p>The ID of the asset model that was used to create the asset.</p>
     */
    inline DescribeAssetResult& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model that was used to create the asset.</p>
     */
    inline DescribeAssetResult& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model that was used to create the asset.</p>
     */
    inline DescribeAssetResult& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>The list of asset properties for the asset.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetCompositeModels</code> object.</p>
     */
    inline const Aws::Vector<AssetProperty>& GetAssetProperties() const{ return m_assetProperties; }

    /**
     * <p>The list of asset properties for the asset.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetCompositeModels</code> object.</p>
     */
    inline void SetAssetProperties(const Aws::Vector<AssetProperty>& value) { m_assetProperties = value; }

    /**
     * <p>The list of asset properties for the asset.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetCompositeModels</code> object.</p>
     */
    inline void SetAssetProperties(Aws::Vector<AssetProperty>&& value) { m_assetProperties = std::move(value); }

    /**
     * <p>The list of asset properties for the asset.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetCompositeModels</code> object.</p>
     */
    inline DescribeAssetResult& WithAssetProperties(const Aws::Vector<AssetProperty>& value) { SetAssetProperties(value); return *this;}

    /**
     * <p>The list of asset properties for the asset.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetCompositeModels</code> object.</p>
     */
    inline DescribeAssetResult& WithAssetProperties(Aws::Vector<AssetProperty>&& value) { SetAssetProperties(std::move(value)); return *this;}

    /**
     * <p>The list of asset properties for the asset.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetCompositeModels</code> object.</p>
     */
    inline DescribeAssetResult& AddAssetProperties(const AssetProperty& value) { m_assetProperties.push_back(value); return *this; }

    /**
     * <p>The list of asset properties for the asset.</p> <p>This object doesn't
     * include properties that you define in composite models. You can find composite
     * model properties in the <code>assetCompositeModels</code> object.</p>
     */
    inline DescribeAssetResult& AddAssetProperties(AssetProperty&& value) { m_assetProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline const Aws::Vector<AssetHierarchy>& GetAssetHierarchies() const{ return m_assetHierarchies; }

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline void SetAssetHierarchies(const Aws::Vector<AssetHierarchy>& value) { m_assetHierarchies = value; }

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline void SetAssetHierarchies(Aws::Vector<AssetHierarchy>&& value) { m_assetHierarchies = std::move(value); }

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline DescribeAssetResult& WithAssetHierarchies(const Aws::Vector<AssetHierarchy>& value) { SetAssetHierarchies(value); return *this;}

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline DescribeAssetResult& WithAssetHierarchies(Aws::Vector<AssetHierarchy>&& value) { SetAssetHierarchies(std::move(value)); return *this;}

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline DescribeAssetResult& AddAssetHierarchies(const AssetHierarchy& value) { m_assetHierarchies.push_back(value); return *this; }

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline DescribeAssetResult& AddAssetHierarchies(AssetHierarchy&& value) { m_assetHierarchies.push_back(std::move(value)); return *this; }


    /**
     * <p>The composite models for the asset.</p>
     */
    inline const Aws::Vector<AssetCompositeModel>& GetAssetCompositeModels() const{ return m_assetCompositeModels; }

    /**
     * <p>The composite models for the asset.</p>
     */
    inline void SetAssetCompositeModels(const Aws::Vector<AssetCompositeModel>& value) { m_assetCompositeModels = value; }

    /**
     * <p>The composite models for the asset.</p>
     */
    inline void SetAssetCompositeModels(Aws::Vector<AssetCompositeModel>&& value) { m_assetCompositeModels = std::move(value); }

    /**
     * <p>The composite models for the asset.</p>
     */
    inline DescribeAssetResult& WithAssetCompositeModels(const Aws::Vector<AssetCompositeModel>& value) { SetAssetCompositeModels(value); return *this;}

    /**
     * <p>The composite models for the asset.</p>
     */
    inline DescribeAssetResult& WithAssetCompositeModels(Aws::Vector<AssetCompositeModel>&& value) { SetAssetCompositeModels(std::move(value)); return *this;}

    /**
     * <p>The composite models for the asset.</p>
     */
    inline DescribeAssetResult& AddAssetCompositeModels(const AssetCompositeModel& value) { m_assetCompositeModels.push_back(value); return *this; }

    /**
     * <p>The composite models for the asset.</p>
     */
    inline DescribeAssetResult& AddAssetCompositeModels(AssetCompositeModel&& value) { m_assetCompositeModels.push_back(std::move(value)); return *this; }


    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAssetCreationDate() const{ return m_assetCreationDate; }

    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline void SetAssetCreationDate(const Aws::Utils::DateTime& value) { m_assetCreationDate = value; }

    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline void SetAssetCreationDate(Aws::Utils::DateTime&& value) { m_assetCreationDate = std::move(value); }

    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline DescribeAssetResult& WithAssetCreationDate(const Aws::Utils::DateTime& value) { SetAssetCreationDate(value); return *this;}

    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline DescribeAssetResult& WithAssetCreationDate(Aws::Utils::DateTime&& value) { SetAssetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAssetLastUpdateDate() const{ return m_assetLastUpdateDate; }

    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline void SetAssetLastUpdateDate(const Aws::Utils::DateTime& value) { m_assetLastUpdateDate = value; }

    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline void SetAssetLastUpdateDate(Aws::Utils::DateTime&& value) { m_assetLastUpdateDate = std::move(value); }

    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline DescribeAssetResult& WithAssetLastUpdateDate(const Aws::Utils::DateTime& value) { SetAssetLastUpdateDate(value); return *this;}

    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline DescribeAssetResult& WithAssetLastUpdateDate(Aws::Utils::DateTime&& value) { SetAssetLastUpdateDate(std::move(value)); return *this;}


    /**
     * <p>The current status of the asset, which contains a state and any error
     * message.</p>
     */
    inline const AssetStatus& GetAssetStatus() const{ return m_assetStatus; }

    /**
     * <p>The current status of the asset, which contains a state and any error
     * message.</p>
     */
    inline void SetAssetStatus(const AssetStatus& value) { m_assetStatus = value; }

    /**
     * <p>The current status of the asset, which contains a state and any error
     * message.</p>
     */
    inline void SetAssetStatus(AssetStatus&& value) { m_assetStatus = std::move(value); }

    /**
     * <p>The current status of the asset, which contains a state and any error
     * message.</p>
     */
    inline DescribeAssetResult& WithAssetStatus(const AssetStatus& value) { SetAssetStatus(value); return *this;}

    /**
     * <p>The current status of the asset, which contains a state and any error
     * message.</p>
     */
    inline DescribeAssetResult& WithAssetStatus(AssetStatus&& value) { SetAssetStatus(std::move(value)); return *this;}


    /**
     * <p>A description for the asset.</p>
     */
    inline const Aws::String& GetAssetDescription() const{ return m_assetDescription; }

    /**
     * <p>A description for the asset.</p>
     */
    inline void SetAssetDescription(const Aws::String& value) { m_assetDescription = value; }

    /**
     * <p>A description for the asset.</p>
     */
    inline void SetAssetDescription(Aws::String&& value) { m_assetDescription = std::move(value); }

    /**
     * <p>A description for the asset.</p>
     */
    inline void SetAssetDescription(const char* value) { m_assetDescription.assign(value); }

    /**
     * <p>A description for the asset.</p>
     */
    inline DescribeAssetResult& WithAssetDescription(const Aws::String& value) { SetAssetDescription(value); return *this;}

    /**
     * <p>A description for the asset.</p>
     */
    inline DescribeAssetResult& WithAssetDescription(Aws::String&& value) { SetAssetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the asset.</p>
     */
    inline DescribeAssetResult& WithAssetDescription(const char* value) { SetAssetDescription(value); return *this;}

  private:

    Aws::String m_assetId;

    Aws::String m_assetArn;

    Aws::String m_assetName;

    Aws::String m_assetModelId;

    Aws::Vector<AssetProperty> m_assetProperties;

    Aws::Vector<AssetHierarchy> m_assetHierarchies;

    Aws::Vector<AssetCompositeModel> m_assetCompositeModels;

    Aws::Utils::DateTime m_assetCreationDate;

    Aws::Utils::DateTime m_assetLastUpdateDate;

    AssetStatus m_assetStatus;

    Aws::String m_assetDescription;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
