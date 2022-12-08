/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The details in the response for an import request, including the signed URL
   * and other information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetFromSignedUrlResponseDetails">AWS
   * API Reference</a></p>
   */
  class ImportAssetFromSignedUrlResponseDetails
  {
  public:
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlResponseDetails();
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for the asset associated with this import job.</p>
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    /**
     * <p>The name for the asset associated with this import job.</p>
     */
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }

    /**
     * <p>The name for the asset associated with this import job.</p>
     */
    inline void SetAssetName(const Aws::String& value) { m_assetNameHasBeenSet = true; m_assetName = value; }

    /**
     * <p>The name for the asset associated with this import job.</p>
     */
    inline void SetAssetName(Aws::String&& value) { m_assetNameHasBeenSet = true; m_assetName = std::move(value); }

    /**
     * <p>The name for the asset associated with this import job.</p>
     */
    inline void SetAssetName(const char* value) { m_assetNameHasBeenSet = true; m_assetName.assign(value); }

    /**
     * <p>The name for the asset associated with this import job.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    /**
     * <p>The name for the asset associated with this import job.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    /**
     * <p>The name for the asset associated with this import job.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithAssetName(const char* value) { SetAssetName(value); return *this;}


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
    inline ImportAssetFromSignedUrlResponseDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


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
    inline ImportAssetFromSignedUrlResponseDetails& WithMd5Hash(const Aws::String& value) { SetMd5Hash(value); return *this;}

    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithMd5Hash(Aws::String&& value) { SetMd5Hash(std::move(value)); return *this;}

    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithMd5Hash(const char* value) { SetMd5Hash(value); return *this;}


    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The signed URL.</p>
     */
    inline const Aws::String& GetSignedUrl() const{ return m_signedUrl; }

    /**
     * <p>The signed URL.</p>
     */
    inline bool SignedUrlHasBeenSet() const { return m_signedUrlHasBeenSet; }

    /**
     * <p>The signed URL.</p>
     */
    inline void SetSignedUrl(const Aws::String& value) { m_signedUrlHasBeenSet = true; m_signedUrl = value; }

    /**
     * <p>The signed URL.</p>
     */
    inline void SetSignedUrl(Aws::String&& value) { m_signedUrlHasBeenSet = true; m_signedUrl = std::move(value); }

    /**
     * <p>The signed URL.</p>
     */
    inline void SetSignedUrl(const char* value) { m_signedUrlHasBeenSet = true; m_signedUrl.assign(value); }

    /**
     * <p>The signed URL.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithSignedUrl(const Aws::String& value) { SetSignedUrl(value); return *this;}

    /**
     * <p>The signed URL.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithSignedUrl(Aws::String&& value) { SetSignedUrl(std::move(value)); return *this;}

    /**
     * <p>The signed URL.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithSignedUrl(const char* value) { SetSignedUrl(value); return *this;}


    /**
     * <p>The time and date at which the signed URL expires, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetSignedUrlExpiresAt() const{ return m_signedUrlExpiresAt; }

    /**
     * <p>The time and date at which the signed URL expires, in ISO 8601 format.</p>
     */
    inline bool SignedUrlExpiresAtHasBeenSet() const { return m_signedUrlExpiresAtHasBeenSet; }

    /**
     * <p>The time and date at which the signed URL expires, in ISO 8601 format.</p>
     */
    inline void SetSignedUrlExpiresAt(const Aws::Utils::DateTime& value) { m_signedUrlExpiresAtHasBeenSet = true; m_signedUrlExpiresAt = value; }

    /**
     * <p>The time and date at which the signed URL expires, in ISO 8601 format.</p>
     */
    inline void SetSignedUrlExpiresAt(Aws::Utils::DateTime&& value) { m_signedUrlExpiresAtHasBeenSet = true; m_signedUrlExpiresAt = std::move(value); }

    /**
     * <p>The time and date at which the signed URL expires, in ISO 8601 format.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithSignedUrlExpiresAt(const Aws::Utils::DateTime& value) { SetSignedUrlExpiresAt(value); return *this;}

    /**
     * <p>The time and date at which the signed URL expires, in ISO 8601 format.</p>
     */
    inline ImportAssetFromSignedUrlResponseDetails& WithSignedUrlExpiresAt(Aws::Utils::DateTime&& value) { SetSignedUrlExpiresAt(std::move(value)); return *this;}

  private:

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_md5Hash;
    bool m_md5HashHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_signedUrl;
    bool m_signedUrlHasBeenSet = false;

    Aws::Utils::DateTime m_signedUrlExpiresAt;
    bool m_signedUrlExpiresAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
