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
   * <p>The details of the export to signed URL response.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ExportAssetToSignedUrlResponseDetails">AWS
   * API Reference</a></p>
   */
  class ExportAssetToSignedUrlResponseDetails
  {
  public:
    AWS_DATAEXCHANGE_API ExportAssetToSignedUrlResponseDetails();
    AWS_DATAEXCHANGE_API ExportAssetToSignedUrlResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ExportAssetToSignedUrlResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the asset associated with this export job.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The unique identifier for the asset associated with this export job.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the asset associated with this export job.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The unique identifier for the asset associated with this export job.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The unique identifier for the asset associated with this export job.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The unique identifier for the asset associated with this export job.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The unique identifier for the asset associated with this export job.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the asset associated with this export job.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The unique identifier for the revision associated with this export
     * response.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for the revision associated with this export
     * response.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the revision associated with this export
     * response.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for the revision associated with this export
     * response.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for the revision associated with this export
     * response.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for the revision associated with this export
     * response.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this export
     * response.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision associated with this export
     * response.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The signed URL for the export request.</p>
     */
    inline const Aws::String& GetSignedUrl() const{ return m_signedUrl; }

    /**
     * <p>The signed URL for the export request.</p>
     */
    inline bool SignedUrlHasBeenSet() const { return m_signedUrlHasBeenSet; }

    /**
     * <p>The signed URL for the export request.</p>
     */
    inline void SetSignedUrl(const Aws::String& value) { m_signedUrlHasBeenSet = true; m_signedUrl = value; }

    /**
     * <p>The signed URL for the export request.</p>
     */
    inline void SetSignedUrl(Aws::String&& value) { m_signedUrlHasBeenSet = true; m_signedUrl = std::move(value); }

    /**
     * <p>The signed URL for the export request.</p>
     */
    inline void SetSignedUrl(const char* value) { m_signedUrlHasBeenSet = true; m_signedUrl.assign(value); }

    /**
     * <p>The signed URL for the export request.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithSignedUrl(const Aws::String& value) { SetSignedUrl(value); return *this;}

    /**
     * <p>The signed URL for the export request.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithSignedUrl(Aws::String&& value) { SetSignedUrl(std::move(value)); return *this;}

    /**
     * <p>The signed URL for the export request.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithSignedUrl(const char* value) { SetSignedUrl(value); return *this;}


    /**
     * <p>The date and time that the signed URL expires, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetSignedUrlExpiresAt() const{ return m_signedUrlExpiresAt; }

    /**
     * <p>The date and time that the signed URL expires, in ISO 8601 format.</p>
     */
    inline bool SignedUrlExpiresAtHasBeenSet() const { return m_signedUrlExpiresAtHasBeenSet; }

    /**
     * <p>The date and time that the signed URL expires, in ISO 8601 format.</p>
     */
    inline void SetSignedUrlExpiresAt(const Aws::Utils::DateTime& value) { m_signedUrlExpiresAtHasBeenSet = true; m_signedUrlExpiresAt = value; }

    /**
     * <p>The date and time that the signed URL expires, in ISO 8601 format.</p>
     */
    inline void SetSignedUrlExpiresAt(Aws::Utils::DateTime&& value) { m_signedUrlExpiresAtHasBeenSet = true; m_signedUrlExpiresAt = std::move(value); }

    /**
     * <p>The date and time that the signed URL expires, in ISO 8601 format.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithSignedUrlExpiresAt(const Aws::Utils::DateTime& value) { SetSignedUrlExpiresAt(value); return *this;}

    /**
     * <p>The date and time that the signed URL expires, in ISO 8601 format.</p>
     */
    inline ExportAssetToSignedUrlResponseDetails& WithSignedUrlExpiresAt(Aws::Utils::DateTime&& value) { SetSignedUrlExpiresAt(std::move(value)); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

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
