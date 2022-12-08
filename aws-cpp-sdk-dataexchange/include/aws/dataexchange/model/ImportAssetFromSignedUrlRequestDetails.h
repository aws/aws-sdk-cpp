/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Details of the operation to be performed by the job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetFromSignedUrlRequestDetails">AWS
   * API Reference</a></p>
   */
  class ImportAssetFromSignedUrlRequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlRequestDetails();
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name.</p>
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name.</p>
     */
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name.</p>
     */
    inline void SetAssetName(const Aws::String& value) { m_assetNameHasBeenSet = true; m_assetName = value; }

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name.</p>
     */
    inline void SetAssetName(Aws::String&& value) { m_assetNameHasBeenSet = true; m_assetName = std::move(value); }

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name.</p>
     */
    inline void SetAssetName(const char* value) { m_assetNameHasBeenSet = true; m_assetName.assign(value); }

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithAssetName(const char* value) { SetAssetName(value); return *this;}


    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline const Aws::String& GetMd5Hash() const{ return m_md5Hash; }

    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline bool Md5HashHasBeenSet() const { return m_md5HashHasBeenSet; }

    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline void SetMd5Hash(const Aws::String& value) { m_md5HashHasBeenSet = true; m_md5Hash = value; }

    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline void SetMd5Hash(Aws::String&& value) { m_md5HashHasBeenSet = true; m_md5Hash = std::move(value); }

    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline void SetMd5Hash(const char* value) { m_md5HashHasBeenSet = true; m_md5Hash.assign(value); }

    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithMd5Hash(const Aws::String& value) { SetMd5Hash(value); return *this;}

    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithMd5Hash(Aws::String&& value) { SetMd5Hash(std::move(value)); return *this;}

    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithMd5Hash(const char* value) { SetMd5Hash(value); return *this;}


    /**
     * <p>The unique identifier for the revision associated with this import
     * request.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for the revision associated with this import
     * request.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the revision associated with this import
     * request.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for the revision associated with this import
     * request.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for the revision associated with this import
     * request.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for the revision associated with this import
     * request.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this import
     * request.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this import
     * request.</p>
     */
    inline ImportAssetFromSignedUrlRequestDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_md5Hash;
    bool m_md5HashHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
