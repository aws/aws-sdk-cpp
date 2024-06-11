﻿/**
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
   * <p>Contains a summary of an associated asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssociatedAssetsSummary">AWS
   * API Reference</a></p>
   */
  class AssociatedAssetsSummary
  {
  public:
    AWS_IOTSITEWISE_API AssociatedAssetsSummary();
    AWS_IOTSITEWISE_API AssociatedAssetsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssociatedAssetsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the asset, in UUID format.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssociatedAssetsSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssociatedAssetsSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssociatedAssetsSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AssociatedAssetsSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AssociatedAssetsSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AssociatedAssetsSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssociatedAssetsSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssociatedAssetsSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssociatedAssetsSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset model used to create the asset.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }
    inline AssociatedAssetsSummary& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}
    inline AssociatedAssetsSummary& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}
    inline AssociatedAssetsSummary& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the asset was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline AssociatedAssetsSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline AssociatedAssetsSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the asset was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = value; }
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::move(value); }
    inline AssociatedAssetsSummary& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}
    inline AssociatedAssetsSummary& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the asset.</p>
     */
    inline const AssetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AssetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AssetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AssociatedAssetsSummary& WithStatus(const AssetStatus& value) { SetStatus(value); return *this;}
    inline AssociatedAssetsSummary& WithStatus(AssetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of asset hierarchies that each contain a <code>hierarchyId</code>. A
     * hierarchy specifies allowed parent/child asset relationships.</p>
     */
    inline const Aws::Vector<AssetHierarchy>& GetHierarchies() const{ return m_hierarchies; }
    inline bool HierarchiesHasBeenSet() const { return m_hierarchiesHasBeenSet; }
    inline void SetHierarchies(const Aws::Vector<AssetHierarchy>& value) { m_hierarchiesHasBeenSet = true; m_hierarchies = value; }
    inline void SetHierarchies(Aws::Vector<AssetHierarchy>&& value) { m_hierarchiesHasBeenSet = true; m_hierarchies = std::move(value); }
    inline AssociatedAssetsSummary& WithHierarchies(const Aws::Vector<AssetHierarchy>& value) { SetHierarchies(value); return *this;}
    inline AssociatedAssetsSummary& WithHierarchies(Aws::Vector<AssetHierarchy>&& value) { SetHierarchies(std::move(value)); return *this;}
    inline AssociatedAssetsSummary& AddHierarchies(const AssetHierarchy& value) { m_hierarchiesHasBeenSet = true; m_hierarchies.push_back(value); return *this; }
    inline AssociatedAssetsSummary& AddHierarchies(AssetHierarchy&& value) { m_hierarchiesHasBeenSet = true; m_hierarchies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description for the asset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AssociatedAssetsSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AssociatedAssetsSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AssociatedAssetsSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the asset. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline AssociatedAssetsSummary& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline AssociatedAssetsSummary& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline AssociatedAssetsSummary& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}
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

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
