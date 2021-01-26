/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/ExportAssetToSignedUrlResponseDetails.h>
#include <aws/dataexchange/model/ExportAssetsToS3ResponseDetails.h>
#include <aws/dataexchange/model/ImportAssetFromSignedUrlResponseDetails.h>
#include <aws/dataexchange/model/ImportAssetsFromS3ResponseDetails.h>
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
   * <p>Details for the response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ResponseDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DATAEXCHANGE_API ResponseDetails
  {
  public:
    ResponseDetails();
    ResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    ResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details for the export to signed URL response.</p>
     */
    inline const ExportAssetToSignedUrlResponseDetails& GetExportAssetToSignedUrl() const{ return m_exportAssetToSignedUrl; }

    /**
     * <p>Details for the export to signed URL response.</p>
     */
    inline bool ExportAssetToSignedUrlHasBeenSet() const { return m_exportAssetToSignedUrlHasBeenSet; }

    /**
     * <p>Details for the export to signed URL response.</p>
     */
    inline void SetExportAssetToSignedUrl(const ExportAssetToSignedUrlResponseDetails& value) { m_exportAssetToSignedUrlHasBeenSet = true; m_exportAssetToSignedUrl = value; }

    /**
     * <p>Details for the export to signed URL response.</p>
     */
    inline void SetExportAssetToSignedUrl(ExportAssetToSignedUrlResponseDetails&& value) { m_exportAssetToSignedUrlHasBeenSet = true; m_exportAssetToSignedUrl = std::move(value); }

    /**
     * <p>Details for the export to signed URL response.</p>
     */
    inline ResponseDetails& WithExportAssetToSignedUrl(const ExportAssetToSignedUrlResponseDetails& value) { SetExportAssetToSignedUrl(value); return *this;}

    /**
     * <p>Details for the export to signed URL response.</p>
     */
    inline ResponseDetails& WithExportAssetToSignedUrl(ExportAssetToSignedUrlResponseDetails&& value) { SetExportAssetToSignedUrl(std::move(value)); return *this;}


    /**
     * <p>Details for the export to Amazon S3 response.</p>
     */
    inline const ExportAssetsToS3ResponseDetails& GetExportAssetsToS3() const{ return m_exportAssetsToS3; }

    /**
     * <p>Details for the export to Amazon S3 response.</p>
     */
    inline bool ExportAssetsToS3HasBeenSet() const { return m_exportAssetsToS3HasBeenSet; }

    /**
     * <p>Details for the export to Amazon S3 response.</p>
     */
    inline void SetExportAssetsToS3(const ExportAssetsToS3ResponseDetails& value) { m_exportAssetsToS3HasBeenSet = true; m_exportAssetsToS3 = value; }

    /**
     * <p>Details for the export to Amazon S3 response.</p>
     */
    inline void SetExportAssetsToS3(ExportAssetsToS3ResponseDetails&& value) { m_exportAssetsToS3HasBeenSet = true; m_exportAssetsToS3 = std::move(value); }

    /**
     * <p>Details for the export to Amazon S3 response.</p>
     */
    inline ResponseDetails& WithExportAssetsToS3(const ExportAssetsToS3ResponseDetails& value) { SetExportAssetsToS3(value); return *this;}

    /**
     * <p>Details for the export to Amazon S3 response.</p>
     */
    inline ResponseDetails& WithExportAssetsToS3(ExportAssetsToS3ResponseDetails&& value) { SetExportAssetsToS3(std::move(value)); return *this;}


    /**
     * <p>Details for the import from signed URL response.</p>
     */
    inline const ImportAssetFromSignedUrlResponseDetails& GetImportAssetFromSignedUrl() const{ return m_importAssetFromSignedUrl; }

    /**
     * <p>Details for the import from signed URL response.</p>
     */
    inline bool ImportAssetFromSignedUrlHasBeenSet() const { return m_importAssetFromSignedUrlHasBeenSet; }

    /**
     * <p>Details for the import from signed URL response.</p>
     */
    inline void SetImportAssetFromSignedUrl(const ImportAssetFromSignedUrlResponseDetails& value) { m_importAssetFromSignedUrlHasBeenSet = true; m_importAssetFromSignedUrl = value; }

    /**
     * <p>Details for the import from signed URL response.</p>
     */
    inline void SetImportAssetFromSignedUrl(ImportAssetFromSignedUrlResponseDetails&& value) { m_importAssetFromSignedUrlHasBeenSet = true; m_importAssetFromSignedUrl = std::move(value); }

    /**
     * <p>Details for the import from signed URL response.</p>
     */
    inline ResponseDetails& WithImportAssetFromSignedUrl(const ImportAssetFromSignedUrlResponseDetails& value) { SetImportAssetFromSignedUrl(value); return *this;}

    /**
     * <p>Details for the import from signed URL response.</p>
     */
    inline ResponseDetails& WithImportAssetFromSignedUrl(ImportAssetFromSignedUrlResponseDetails&& value) { SetImportAssetFromSignedUrl(std::move(value)); return *this;}


    /**
     * <p>Details for the import from Amazon S3 response.</p>
     */
    inline const ImportAssetsFromS3ResponseDetails& GetImportAssetsFromS3() const{ return m_importAssetsFromS3; }

    /**
     * <p>Details for the import from Amazon S3 response.</p>
     */
    inline bool ImportAssetsFromS3HasBeenSet() const { return m_importAssetsFromS3HasBeenSet; }

    /**
     * <p>Details for the import from Amazon S3 response.</p>
     */
    inline void SetImportAssetsFromS3(const ImportAssetsFromS3ResponseDetails& value) { m_importAssetsFromS3HasBeenSet = true; m_importAssetsFromS3 = value; }

    /**
     * <p>Details for the import from Amazon S3 response.</p>
     */
    inline void SetImportAssetsFromS3(ImportAssetsFromS3ResponseDetails&& value) { m_importAssetsFromS3HasBeenSet = true; m_importAssetsFromS3 = std::move(value); }

    /**
     * <p>Details for the import from Amazon S3 response.</p>
     */
    inline ResponseDetails& WithImportAssetsFromS3(const ImportAssetsFromS3ResponseDetails& value) { SetImportAssetsFromS3(value); return *this;}

    /**
     * <p>Details for the import from Amazon S3 response.</p>
     */
    inline ResponseDetails& WithImportAssetsFromS3(ImportAssetsFromS3ResponseDetails&& value) { SetImportAssetsFromS3(std::move(value)); return *this;}

  private:

    ExportAssetToSignedUrlResponseDetails m_exportAssetToSignedUrl;
    bool m_exportAssetToSignedUrlHasBeenSet;

    ExportAssetsToS3ResponseDetails m_exportAssetsToS3;
    bool m_exportAssetsToS3HasBeenSet;

    ImportAssetFromSignedUrlResponseDetails m_importAssetFromSignedUrl;
    bool m_importAssetFromSignedUrlHasBeenSet;

    ImportAssetsFromS3ResponseDetails m_importAssetsFromS3;
    bool m_importAssetsFromS3HasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
