/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/AssetDetails.h>
#include <aws/dataexchange/model/AssetType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An asset in AWS Data Exchange is a piece of data (Amazon S3 object) or a
   * means of fulfilling data (Amazon Redshift datashare or Amazon API Gateway API,
   * AWS Lake Formation data permission, or Amazon S3 data access). The asset can be
   * a structured data file, an image file, or some other data file that can be
   * stored as an Amazon S3 object, an Amazon API Gateway API, or an Amazon Redshift
   * datashare, an AWS Lake Formation data permission, or an Amazon S3 data access.
   * When you create an import job for your files, API Gateway APIs, Amazon Redshift
   * datashares, AWS Lake Formation data permission, or Amazon S3 data access, you
   * create an asset in AWS Data Exchange.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/AssetEntry">AWS
   * API Reference</a></p>
   */
  class AssetEntry
  {
  public:
    AWS_DATAEXCHANGE_API AssetEntry();
    AWS_DATAEXCHANGE_API AssetEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API AssetEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the asset.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the asset.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN for the asset.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the asset.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the asset.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the asset.</p>
     */
    inline AssetEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the asset.</p>
     */
    inline AssetEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the asset.</p>
     */
    inline AssetEntry& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Details about the asset.</p>
     */
    inline const AssetDetails& GetAssetDetails() const{ return m_assetDetails; }

    /**
     * <p>Details about the asset.</p>
     */
    inline bool AssetDetailsHasBeenSet() const { return m_assetDetailsHasBeenSet; }

    /**
     * <p>Details about the asset.</p>
     */
    inline void SetAssetDetails(const AssetDetails& value) { m_assetDetailsHasBeenSet = true; m_assetDetails = value; }

    /**
     * <p>Details about the asset.</p>
     */
    inline void SetAssetDetails(AssetDetails&& value) { m_assetDetailsHasBeenSet = true; m_assetDetails = std::move(value); }

    /**
     * <p>Details about the asset.</p>
     */
    inline AssetEntry& WithAssetDetails(const AssetDetails& value) { SetAssetDetails(value); return *this;}

    /**
     * <p>Details about the asset.</p>
     */
    inline AssetEntry& WithAssetDetails(AssetDetails&& value) { SetAssetDetails(std::move(value)); return *this;}


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
    inline AssetEntry& WithAssetType(const AssetType& value) { SetAssetType(value); return *this;}

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline AssetEntry& WithAssetType(AssetType&& value) { SetAssetType(std::move(value)); return *this;}


    /**
     * <p>The date and time that the asset was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the asset was created, in ISO 8601 format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the asset was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the asset was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the asset was created, in ISO 8601 format.</p>
     */
    inline AssetEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the asset was created, in ISO 8601 format.</p>
     */
    inline AssetEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the data set associated with this asset.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for the data set associated with this asset.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the data set associated with this asset.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for the data set associated with this asset.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for the data set associated with this asset.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for the data set associated with this asset.</p>
     */
    inline AssetEntry& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this asset.</p>
     */
    inline AssetEntry& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this asset.</p>
     */
    inline AssetEntry& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline AssetEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline AssetEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline AssetEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name. When exporting to Amazon S3, the asset name is
     * used as default target Amazon S3 object key. When importing from Amazon API
     * Gateway API, the API name is used as the asset name. When importing from Amazon
     * Redshift, the datashare name is used as the asset name. When importing from AWS
     * Lake Formation, the static values of "Database(s) included in LF-tag policy" or
     * "Table(s) included in LF-tag policy" are used as the asset name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name. When exporting to Amazon S3, the asset name is
     * used as default target Amazon S3 object key. When importing from Amazon API
     * Gateway API, the API name is used as the asset name. When importing from Amazon
     * Redshift, the datashare name is used as the asset name. When importing from AWS
     * Lake Formation, the static values of "Database(s) included in LF-tag policy" or
     * "Table(s) included in LF-tag policy" are used as the asset name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name. When exporting to Amazon S3, the asset name is
     * used as default target Amazon S3 object key. When importing from Amazon API
     * Gateway API, the API name is used as the asset name. When importing from Amazon
     * Redshift, the datashare name is used as the asset name. When importing from AWS
     * Lake Formation, the static values of "Database(s) included in LF-tag policy" or
     * "Table(s) included in LF-tag policy" are used as the asset name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name. When exporting to Amazon S3, the asset name is
     * used as default target Amazon S3 object key. When importing from Amazon API
     * Gateway API, the API name is used as the asset name. When importing from Amazon
     * Redshift, the datashare name is used as the asset name. When importing from AWS
     * Lake Formation, the static values of "Database(s) included in LF-tag policy" or
     * "Table(s) included in LF-tag policy" are used as the asset name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name. When exporting to Amazon S3, the asset name is
     * used as default target Amazon S3 object key. When importing from Amazon API
     * Gateway API, the API name is used as the asset name. When importing from Amazon
     * Redshift, the datashare name is used as the asset name. When importing from AWS
     * Lake Formation, the static values of "Database(s) included in LF-tag policy" or
     * "Table(s) included in LF-tag policy" are used as the asset name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name. When exporting to Amazon S3, the asset name is
     * used as default target Amazon S3 object key. When importing from Amazon API
     * Gateway API, the API name is used as the asset name. When importing from Amazon
     * Redshift, the datashare name is used as the asset name. When importing from AWS
     * Lake Formation, the static values of "Database(s) included in LF-tag policy" or
     * "Table(s) included in LF-tag policy" are used as the asset name.</p>
     */
    inline AssetEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name. When exporting to Amazon S3, the asset name is
     * used as default target Amazon S3 object key. When importing from Amazon API
     * Gateway API, the API name is used as the asset name. When importing from Amazon
     * Redshift, the datashare name is used as the asset name. When importing from AWS
     * Lake Formation, the static values of "Database(s) included in LF-tag policy" or
     * "Table(s) included in LF-tag policy" are used as the asset name.</p>
     */
    inline AssetEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name. When exporting to Amazon S3, the asset name is
     * used as default target Amazon S3 object key. When importing from Amazon API
     * Gateway API, the API name is used as the asset name. When importing from Amazon
     * Redshift, the datashare name is used as the asset name. When importing from AWS
     * Lake Formation, the static values of "Database(s) included in LF-tag policy" or
     * "Table(s) included in LF-tag policy" are used as the asset name.</p>
     */
    inline AssetEntry& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier for the revision associated with this asset.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for the revision associated with this asset.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the revision associated with this asset.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for the revision associated with this asset.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for the revision associated with this asset.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for the revision associated with this asset.</p>
     */
    inline AssetEntry& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this asset.</p>
     */
    inline AssetEntry& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this asset.</p>
     */
    inline AssetEntry& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The asset ID of the owned asset corresponding to the entitled asset being
     * viewed. This parameter is returned when an asset owner is viewing the entitled
     * copy of its owned asset.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }

    /**
     * <p>The asset ID of the owned asset corresponding to the entitled asset being
     * viewed. This parameter is returned when an asset owner is viewing the entitled
     * copy of its owned asset.</p>
     */
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }

    /**
     * <p>The asset ID of the owned asset corresponding to the entitled asset being
     * viewed. This parameter is returned when an asset owner is viewing the entitled
     * copy of its owned asset.</p>
     */
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }

    /**
     * <p>The asset ID of the owned asset corresponding to the entitled asset being
     * viewed. This parameter is returned when an asset owner is viewing the entitled
     * copy of its owned asset.</p>
     */
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }

    /**
     * <p>The asset ID of the owned asset corresponding to the entitled asset being
     * viewed. This parameter is returned when an asset owner is viewing the entitled
     * copy of its owned asset.</p>
     */
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }

    /**
     * <p>The asset ID of the owned asset corresponding to the entitled asset being
     * viewed. This parameter is returned when an asset owner is viewing the entitled
     * copy of its owned asset.</p>
     */
    inline AssetEntry& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}

    /**
     * <p>The asset ID of the owned asset corresponding to the entitled asset being
     * viewed. This parameter is returned when an asset owner is viewing the entitled
     * copy of its owned asset.</p>
     */
    inline AssetEntry& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}

    /**
     * <p>The asset ID of the owned asset corresponding to the entitled asset being
     * viewed. This parameter is returned when an asset owner is viewing the entitled
     * copy of its owned asset.</p>
     */
    inline AssetEntry& WithSourceId(const char* value) { SetSourceId(value); return *this;}


    /**
     * <p>The date and time that the asset was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time that the asset was last updated, in ISO 8601 format.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time that the asset was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time that the asset was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time that the asset was last updated, in ISO 8601 format.</p>
     */
    inline AssetEntry& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the asset was last updated, in ISO 8601 format.</p>
     */
    inline AssetEntry& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AssetDetails m_assetDetails;
    bool m_assetDetailsHasBeenSet = false;

    AssetType m_assetType;
    bool m_assetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
