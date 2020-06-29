/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/ExportAssetToSignedUrlRequestDetails.h>
#include <aws/dataexchange/model/ExportAssetsToS3RequestDetails.h>
#include <aws/dataexchange/model/ImportAssetFromSignedUrlRequestDetails.h>
#include <aws/dataexchange/model/ImportAssetsFromS3RequestDetails.h>
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
   * <p>The details for the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/RequestDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DATAEXCHANGE_API RequestDetails
  {
  public:
    RequestDetails();
    RequestDetails(Aws::Utils::Json::JsonView jsonValue);
    RequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the export to signed URL request.</p>
     */
    inline const ExportAssetToSignedUrlRequestDetails& GetExportAssetToSignedUrl() const{ return m_exportAssetToSignedUrl; }

    /**
     * <p>Details about the export to signed URL request.</p>
     */
    inline bool ExportAssetToSignedUrlHasBeenSet() const { return m_exportAssetToSignedUrlHasBeenSet; }

    /**
     * <p>Details about the export to signed URL request.</p>
     */
    inline void SetExportAssetToSignedUrl(const ExportAssetToSignedUrlRequestDetails& value) { m_exportAssetToSignedUrlHasBeenSet = true; m_exportAssetToSignedUrl = value; }

    /**
     * <p>Details about the export to signed URL request.</p>
     */
    inline void SetExportAssetToSignedUrl(ExportAssetToSignedUrlRequestDetails&& value) { m_exportAssetToSignedUrlHasBeenSet = true; m_exportAssetToSignedUrl = std::move(value); }

    /**
     * <p>Details about the export to signed URL request.</p>
     */
    inline RequestDetails& WithExportAssetToSignedUrl(const ExportAssetToSignedUrlRequestDetails& value) { SetExportAssetToSignedUrl(value); return *this;}

    /**
     * <p>Details about the export to signed URL request.</p>
     */
    inline RequestDetails& WithExportAssetToSignedUrl(ExportAssetToSignedUrlRequestDetails&& value) { SetExportAssetToSignedUrl(std::move(value)); return *this;}


    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline const ExportAssetsToS3RequestDetails& GetExportAssetsToS3() const{ return m_exportAssetsToS3; }

    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline bool ExportAssetsToS3HasBeenSet() const { return m_exportAssetsToS3HasBeenSet; }

    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline void SetExportAssetsToS3(const ExportAssetsToS3RequestDetails& value) { m_exportAssetsToS3HasBeenSet = true; m_exportAssetsToS3 = value; }

    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline void SetExportAssetsToS3(ExportAssetsToS3RequestDetails&& value) { m_exportAssetsToS3HasBeenSet = true; m_exportAssetsToS3 = std::move(value); }

    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline RequestDetails& WithExportAssetsToS3(const ExportAssetsToS3RequestDetails& value) { SetExportAssetsToS3(value); return *this;}

    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline RequestDetails& WithExportAssetsToS3(ExportAssetsToS3RequestDetails&& value) { SetExportAssetsToS3(std::move(value)); return *this;}


    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline const ImportAssetFromSignedUrlRequestDetails& GetImportAssetFromSignedUrl() const{ return m_importAssetFromSignedUrl; }

    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline bool ImportAssetFromSignedUrlHasBeenSet() const { return m_importAssetFromSignedUrlHasBeenSet; }

    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline void SetImportAssetFromSignedUrl(const ImportAssetFromSignedUrlRequestDetails& value) { m_importAssetFromSignedUrlHasBeenSet = true; m_importAssetFromSignedUrl = value; }

    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline void SetImportAssetFromSignedUrl(ImportAssetFromSignedUrlRequestDetails&& value) { m_importAssetFromSignedUrlHasBeenSet = true; m_importAssetFromSignedUrl = std::move(value); }

    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline RequestDetails& WithImportAssetFromSignedUrl(const ImportAssetFromSignedUrlRequestDetails& value) { SetImportAssetFromSignedUrl(value); return *this;}

    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline RequestDetails& WithImportAssetFromSignedUrl(ImportAssetFromSignedUrlRequestDetails&& value) { SetImportAssetFromSignedUrl(std::move(value)); return *this;}


    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline const ImportAssetsFromS3RequestDetails& GetImportAssetsFromS3() const{ return m_importAssetsFromS3; }

    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline bool ImportAssetsFromS3HasBeenSet() const { return m_importAssetsFromS3HasBeenSet; }

    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline void SetImportAssetsFromS3(const ImportAssetsFromS3RequestDetails& value) { m_importAssetsFromS3HasBeenSet = true; m_importAssetsFromS3 = value; }

    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline void SetImportAssetsFromS3(ImportAssetsFromS3RequestDetails&& value) { m_importAssetsFromS3HasBeenSet = true; m_importAssetsFromS3 = std::move(value); }

    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline RequestDetails& WithImportAssetsFromS3(const ImportAssetsFromS3RequestDetails& value) { SetImportAssetsFromS3(value); return *this;}

    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline RequestDetails& WithImportAssetsFromS3(ImportAssetsFromS3RequestDetails&& value) { SetImportAssetsFromS3(std::move(value)); return *this;}

  private:

    ExportAssetToSignedUrlRequestDetails m_exportAssetToSignedUrl;
    bool m_exportAssetToSignedUrlHasBeenSet;

    ExportAssetsToS3RequestDetails m_exportAssetsToS3;
    bool m_exportAssetsToS3HasBeenSet;

    ImportAssetFromSignedUrlRequestDetails m_importAssetFromSignedUrl;
    bool m_importAssetFromSignedUrlHasBeenSet;

    ImportAssetsFromS3RequestDetails m_importAssetsFromS3;
    bool m_importAssetsFromS3HasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
