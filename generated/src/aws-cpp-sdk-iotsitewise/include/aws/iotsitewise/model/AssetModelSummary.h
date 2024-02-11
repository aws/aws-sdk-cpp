/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/AssetModelStatus.h>
#include <aws/iotsitewise/model/AssetModelType.h>
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
   * <p>Contains a summary of an asset model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelSummary">AWS
   * API Reference</a></p>
   */
  class AssetModelSummary
  {
  public:
    AWS_IOTSITEWISE_API AssetModelSummary();
    AWS_IOTSITEWISE_API AssetModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the asset model (used with IoT SiteWise API operations).</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the asset model (used with IoT SiteWise API operations).</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the asset model (used with IoT SiteWise API operations).</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the asset model (used with IoT SiteWise API operations).</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the asset model (used with IoT SiteWise API operations).</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the asset model (used with IoT SiteWise API operations).</p>
     */
    inline AssetModelSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the asset model (used with IoT SiteWise API operations).</p>
     */
    inline AssetModelSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model (used with IoT SiteWise API operations).</p>
     */
    inline AssetModelSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline AssetModelSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline AssetModelSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline AssetModelSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the asset model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the asset model.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the asset model.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the asset model.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the asset model.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the asset model.</p>
     */
    inline AssetModelSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the asset model.</p>
     */
    inline AssetModelSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset model.</p>
     */
    inline AssetModelSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The asset model description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The asset model description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The asset model description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The asset model description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The asset model description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The asset model description.</p>
     */
    inline AssetModelSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The asset model description.</p>
     */
    inline AssetModelSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The asset model description.</p>
     */
    inline AssetModelSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline AssetModelSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the asset model was created, in Unix epoch time.</p>
     */
    inline AssetModelSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }

    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }

    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = value; }

    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::move(value); }

    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline AssetModelSummary& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}

    /**
     * <p>The date the asset model was last updated, in Unix epoch time.</p>
     */
    inline AssetModelSummary& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}


    /**
     * <p>The current status of the asset model.</p>
     */
    inline const AssetModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the asset model.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the asset model.</p>
     */
    inline void SetStatus(const AssetModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the asset model.</p>
     */
    inline void SetStatus(AssetModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the asset model.</p>
     */
    inline AssetModelSummary& WithStatus(const AssetModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the asset model.</p>
     */
    inline AssetModelSummary& WithStatus(AssetModelStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline bool AssetModelTypeHasBeenSet() const { return m_assetModelTypeHasBeenSet; }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline void SetAssetModelType(const AssetModelType& value) { m_assetModelTypeHasBeenSet = true; m_assetModelType = value; }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline void SetAssetModelType(AssetModelType&& value) { m_assetModelTypeHasBeenSet = true; m_assetModelType = std::move(value); }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline AssetModelSummary& WithAssetModelType(const AssetModelType& value) { SetAssetModelType(value); return *this;}

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline AssetModelSummary& WithAssetModelType(AssetModelType&& value) { SetAssetModelType(std::move(value)); return *this;}


    /**
     * <p>The external ID of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssetModelSummary& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssetModelSummary& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssetModelSummary& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDate;
    bool m_lastUpdateDateHasBeenSet = false;

    AssetModelStatus m_status;
    bool m_statusHasBeenSet = false;

    AssetModelType m_assetModelType;
    bool m_assetModelTypeHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
