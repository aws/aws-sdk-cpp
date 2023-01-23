/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/AssetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetHierarchy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a summary of an asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetSummary">AWS
   * API Reference</a></p>
   */
  class AssetSummary
  {
  public:
    AWS_IOTSITEWISE_API AssetSummary();
    AWS_IOTSITEWISE_API AssetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline AssetSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline AssetSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline AssetSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline AssetSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline AssetSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline AssetSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the asset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the asset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the asset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the asset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the asset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the asset.</p>
     */
    inline AssetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the asset.</p>
     */
    inline AssetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset.</p>
     */
    inline AssetSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the asset model used to create this asset.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID of the asset model used to create this asset.</p>
     */
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }

    /**
     * <p>The ID of the asset model used to create this asset.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }

    /**
     * <p>The ID of the asset model used to create this asset.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model used to create this asset.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }

    /**
     * <p>The ID of the asset model used to create this asset.</p>
     */
    inline AssetSummary& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model used to create this asset.</p>
     */
    inline AssetSummary& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model used to create this asset.</p>
     */
    inline AssetSummary& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline AssetSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline AssetSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }

    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }

    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = value; }

    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::move(value); }

    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline AssetSummary& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}

    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline AssetSummary& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}


    /**
     * <p>The current status of the asset.</p>
     */
    inline const AssetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the asset.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the asset.</p>
     */
    inline void SetStatus(const AssetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the asset.</p>
     */
    inline void SetStatus(AssetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the asset.</p>
     */
    inline AssetSummary& WithStatus(const AssetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the asset.</p>
     */
    inline AssetSummary& WithStatus(AssetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline const Aws::Vector<AssetHierarchy>& GetHierarchies() const{ return m_hierarchies; }

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline bool HierarchiesHasBeenSet() const { return m_hierarchiesHasBeenSet; }

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline void SetHierarchies(const Aws::Vector<AssetHierarchy>& value) { m_hierarchiesHasBeenSet = true; m_hierarchies = value; }

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline void SetHierarchies(Aws::Vector<AssetHierarchy>&& value) { m_hierarchiesHasBeenSet = true; m_hierarchies = std::move(value); }

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline AssetSummary& WithHierarchies(const Aws::Vector<AssetHierarchy>& value) { SetHierarchies(value); return *this;}

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline AssetSummary& WithHierarchies(Aws::Vector<AssetHierarchy>&& value) { SetHierarchies(std::move(value)); return *this;}

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline AssetSummary& AddHierarchies(const AssetHierarchy& value) { m_hierarchiesHasBeenSet = true; m_hierarchies.push_back(value); return *this; }

    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline AssetSummary& AddHierarchies(AssetHierarchy&& value) { m_hierarchiesHasBeenSet = true; m_hierarchies.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for the asset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the asset.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the asset.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the asset.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the asset.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the asset.</p>
     */
    inline AssetSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the asset.</p>
     */
    inline AssetSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the asset.</p>
     */
    inline AssetSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDate;
    bool m_lastUpdateDateHasBeenSet = false;

    AssetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<AssetHierarchy> m_hierarchies;
    bool m_hierarchiesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
