/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/AssetType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dataexchange/model/Origin.h>
#include <aws/dataexchange/model/OriginDetails.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>A data set is an AWS resource with one or more revisions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DataSetEntry">AWS
   * API Reference</a></p>
   */
  class DataSetEntry
  {
  public:
    AWS_DATAEXCHANGE_API DataSetEntry();
    AWS_DATAEXCHANGE_API DataSetEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API DataSetEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the data set.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the data set.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN for the data set.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the data set.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the data set.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the data set.</p>
     */
    inline DataSetEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the data set.</p>
     */
    inline DataSetEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the data set.</p>
     */
    inline DataSetEntry& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline const AssetType& GetAssetType() const{ return m_assetType; }

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline void SetAssetType(const AssetType& value) { m_assetTypeHasBeenSet = true; m_assetType = value; }

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline void SetAssetType(AssetType&& value) { m_assetTypeHasBeenSet = true; m_assetType = std::move(value); }

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline DataSetEntry& WithAssetType(const AssetType& value) { SetAssetType(value); return *this;}

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline DataSetEntry& WithAssetType(AssetType&& value) { SetAssetType(std::move(value)); return *this;}


    /**
     * <p>The date and time that the data set was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the data set was created, in ISO 8601 format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the data set was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the data set was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the data set was created, in ISO 8601 format.</p>
     */
    inline DataSetEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the data set was created, in ISO 8601 format.</p>
     */
    inline DataSetEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description for the data set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the data set.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the data set.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the data set.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the data set.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the data set.</p>
     */
    inline DataSetEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the data set.</p>
     */
    inline DataSetEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the data set.</p>
     */
    inline DataSetEntry& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier for the data set.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the data set.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the data set.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the data set.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the data set.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the data set.</p>
     */
    inline DataSetEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set.</p>
     */
    inline DataSetEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set.</p>
     */
    inline DataSetEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data set.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline DataSetEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline DataSetEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline DataSetEntry& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline const Origin& GetOrigin() const{ return m_origin; }

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline void SetOrigin(const Origin& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline void SetOrigin(Origin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline DataSetEntry& WithOrigin(const Origin& value) { SetOrigin(value); return *this;}

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline DataSetEntry& WithOrigin(Origin&& value) { SetOrigin(std::move(value)); return *this;}


    /**
     * <p>If the origin of this data set is ENTITLED, includes the details for the
     * product on AWS Marketplace.</p>
     */
    inline const OriginDetails& GetOriginDetails() const{ return m_originDetails; }

    /**
     * <p>If the origin of this data set is ENTITLED, includes the details for the
     * product on AWS Marketplace.</p>
     */
    inline bool OriginDetailsHasBeenSet() const { return m_originDetailsHasBeenSet; }

    /**
     * <p>If the origin of this data set is ENTITLED, includes the details for the
     * product on AWS Marketplace.</p>
     */
    inline void SetOriginDetails(const OriginDetails& value) { m_originDetailsHasBeenSet = true; m_originDetails = value; }

    /**
     * <p>If the origin of this data set is ENTITLED, includes the details for the
     * product on AWS Marketplace.</p>
     */
    inline void SetOriginDetails(OriginDetails&& value) { m_originDetailsHasBeenSet = true; m_originDetails = std::move(value); }

    /**
     * <p>If the origin of this data set is ENTITLED, includes the details for the
     * product on AWS Marketplace.</p>
     */
    inline DataSetEntry& WithOriginDetails(const OriginDetails& value) { SetOriginDetails(value); return *this;}

    /**
     * <p>If the origin of this data set is ENTITLED, includes the details for the
     * product on AWS Marketplace.</p>
     */
    inline DataSetEntry& WithOriginDetails(OriginDetails&& value) { SetOriginDetails(std::move(value)); return *this;}


    /**
     * <p>The data set ID of the owned data set corresponding to the entitled data set
     * being viewed. This parameter is returned when a data set owner is viewing the
     * entitled copy of its owned data set.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }

    /**
     * <p>The data set ID of the owned data set corresponding to the entitled data set
     * being viewed. This parameter is returned when a data set owner is viewing the
     * entitled copy of its owned data set.</p>
     */
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }

    /**
     * <p>The data set ID of the owned data set corresponding to the entitled data set
     * being viewed. This parameter is returned when a data set owner is viewing the
     * entitled copy of its owned data set.</p>
     */
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }

    /**
     * <p>The data set ID of the owned data set corresponding to the entitled data set
     * being viewed. This parameter is returned when a data set owner is viewing the
     * entitled copy of its owned data set.</p>
     */
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }

    /**
     * <p>The data set ID of the owned data set corresponding to the entitled data set
     * being viewed. This parameter is returned when a data set owner is viewing the
     * entitled copy of its owned data set.</p>
     */
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }

    /**
     * <p>The data set ID of the owned data set corresponding to the entitled data set
     * being viewed. This parameter is returned when a data set owner is viewing the
     * entitled copy of its owned data set.</p>
     */
    inline DataSetEntry& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}

    /**
     * <p>The data set ID of the owned data set corresponding to the entitled data set
     * being viewed. This parameter is returned when a data set owner is viewing the
     * entitled copy of its owned data set.</p>
     */
    inline DataSetEntry& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}

    /**
     * <p>The data set ID of the owned data set corresponding to the entitled data set
     * being viewed. This parameter is returned when a data set owner is viewing the
     * entitled copy of its owned data set.</p>
     */
    inline DataSetEntry& WithSourceId(const char* value) { SetSourceId(value); return *this;}


    /**
     * <p>The date and time that the data set was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time that the data set was last updated, in ISO 8601 format.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time that the data set was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time that the data set was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time that the data set was last updated, in ISO 8601 format.</p>
     */
    inline DataSetEntry& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the data set was last updated, in ISO 8601 format.</p>
     */
    inline DataSetEntry& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AssetType m_assetType;
    bool m_assetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Origin m_origin;
    bool m_originHasBeenSet = false;

    OriginDetails m_originDetails;
    bool m_originDetailsHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
