/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/ExportAssetToSignedUrlRequestDetails.h>
#include <aws/dataexchange/model/ExportAssetsToS3RequestDetails.h>
#include <aws/dataexchange/model/ExportRevisionsToS3RequestDetails.h>
#include <aws/dataexchange/model/ImportAssetFromSignedUrlRequestDetails.h>
#include <aws/dataexchange/model/ImportAssetsFromS3RequestDetails.h>
#include <aws/dataexchange/model/ImportAssetsFromRedshiftDataSharesRequestDetails.h>
#include <aws/dataexchange/model/ImportAssetFromApiGatewayApiRequestDetails.h>
#include <aws/dataexchange/model/CreateS3DataAccessFromS3BucketRequestDetails.h>
#include <aws/dataexchange/model/ImportAssetsFromLakeFormationTagPolicyRequestDetails.h>
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
  class RequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API RequestDetails();
    AWS_DATAEXCHANGE_API RequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API RequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline const ExportRevisionsToS3RequestDetails& GetExportRevisionsToS3() const{ return m_exportRevisionsToS3; }

    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline bool ExportRevisionsToS3HasBeenSet() const { return m_exportRevisionsToS3HasBeenSet; }

    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline void SetExportRevisionsToS3(const ExportRevisionsToS3RequestDetails& value) { m_exportRevisionsToS3HasBeenSet = true; m_exportRevisionsToS3 = value; }

    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline void SetExportRevisionsToS3(ExportRevisionsToS3RequestDetails&& value) { m_exportRevisionsToS3HasBeenSet = true; m_exportRevisionsToS3 = std::move(value); }

    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline RequestDetails& WithExportRevisionsToS3(const ExportRevisionsToS3RequestDetails& value) { SetExportRevisionsToS3(value); return *this;}

    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline RequestDetails& WithExportRevisionsToS3(ExportRevisionsToS3RequestDetails&& value) { SetExportRevisionsToS3(std::move(value)); return *this;}


    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline const ImportAssetFromSignedUrlRequestDetails& GetImportAssetFromSignedUrl() const{ return m_importAssetFromSignedUrl; }

    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline bool ImportAssetFromSignedUrlHasBeenSet() const { return m_importAssetFromSignedUrlHasBeenSet; }

    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline void SetImportAssetFromSignedUrl(const ImportAssetFromSignedUrlRequestDetails& value) { m_importAssetFromSignedUrlHasBeenSet = true; m_importAssetFromSignedUrl = value; }

    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline void SetImportAssetFromSignedUrl(ImportAssetFromSignedUrlRequestDetails&& value) { m_importAssetFromSignedUrlHasBeenSet = true; m_importAssetFromSignedUrl = std::move(value); }

    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline RequestDetails& WithImportAssetFromSignedUrl(const ImportAssetFromSignedUrlRequestDetails& value) { SetImportAssetFromSignedUrl(value); return *this;}

    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline RequestDetails& WithImportAssetFromSignedUrl(ImportAssetFromSignedUrlRequestDetails&& value) { SetImportAssetFromSignedUrl(std::move(value)); return *this;}


    /**
     * <p>Details about the import asset from API Gateway API request.</p>
     */
    inline const ImportAssetsFromS3RequestDetails& GetImportAssetsFromS3() const{ return m_importAssetsFromS3; }

    /**
     * <p>Details about the import asset from API Gateway API request.</p>
     */
    inline bool ImportAssetsFromS3HasBeenSet() const { return m_importAssetsFromS3HasBeenSet; }

    /**
     * <p>Details about the import asset from API Gateway API request.</p>
     */
    inline void SetImportAssetsFromS3(const ImportAssetsFromS3RequestDetails& value) { m_importAssetsFromS3HasBeenSet = true; m_importAssetsFromS3 = value; }

    /**
     * <p>Details about the import asset from API Gateway API request.</p>
     */
    inline void SetImportAssetsFromS3(ImportAssetsFromS3RequestDetails&& value) { m_importAssetsFromS3HasBeenSet = true; m_importAssetsFromS3 = std::move(value); }

    /**
     * <p>Details about the import asset from API Gateway API request.</p>
     */
    inline RequestDetails& WithImportAssetsFromS3(const ImportAssetsFromS3RequestDetails& value) { SetImportAssetsFromS3(value); return *this;}

    /**
     * <p>Details about the import asset from API Gateway API request.</p>
     */
    inline RequestDetails& WithImportAssetsFromS3(ImportAssetsFromS3RequestDetails&& value) { SetImportAssetsFromS3(std::move(value)); return *this;}


    /**
     * <p>Details from an import from Amazon Redshift datashare request.</p>
     */
    inline const ImportAssetsFromRedshiftDataSharesRequestDetails& GetImportAssetsFromRedshiftDataShares() const{ return m_importAssetsFromRedshiftDataShares; }

    /**
     * <p>Details from an import from Amazon Redshift datashare request.</p>
     */
    inline bool ImportAssetsFromRedshiftDataSharesHasBeenSet() const { return m_importAssetsFromRedshiftDataSharesHasBeenSet; }

    /**
     * <p>Details from an import from Amazon Redshift datashare request.</p>
     */
    inline void SetImportAssetsFromRedshiftDataShares(const ImportAssetsFromRedshiftDataSharesRequestDetails& value) { m_importAssetsFromRedshiftDataSharesHasBeenSet = true; m_importAssetsFromRedshiftDataShares = value; }

    /**
     * <p>Details from an import from Amazon Redshift datashare request.</p>
     */
    inline void SetImportAssetsFromRedshiftDataShares(ImportAssetsFromRedshiftDataSharesRequestDetails&& value) { m_importAssetsFromRedshiftDataSharesHasBeenSet = true; m_importAssetsFromRedshiftDataShares = std::move(value); }

    /**
     * <p>Details from an import from Amazon Redshift datashare request.</p>
     */
    inline RequestDetails& WithImportAssetsFromRedshiftDataShares(const ImportAssetsFromRedshiftDataSharesRequestDetails& value) { SetImportAssetsFromRedshiftDataShares(value); return *this;}

    /**
     * <p>Details from an import from Amazon Redshift datashare request.</p>
     */
    inline RequestDetails& WithImportAssetsFromRedshiftDataShares(ImportAssetsFromRedshiftDataSharesRequestDetails&& value) { SetImportAssetsFromRedshiftDataShares(std::move(value)); return *this;}


    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline const ImportAssetFromApiGatewayApiRequestDetails& GetImportAssetFromApiGatewayApi() const{ return m_importAssetFromApiGatewayApi; }

    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline bool ImportAssetFromApiGatewayApiHasBeenSet() const { return m_importAssetFromApiGatewayApiHasBeenSet; }

    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline void SetImportAssetFromApiGatewayApi(const ImportAssetFromApiGatewayApiRequestDetails& value) { m_importAssetFromApiGatewayApiHasBeenSet = true; m_importAssetFromApiGatewayApi = value; }

    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline void SetImportAssetFromApiGatewayApi(ImportAssetFromApiGatewayApiRequestDetails&& value) { m_importAssetFromApiGatewayApiHasBeenSet = true; m_importAssetFromApiGatewayApi = std::move(value); }

    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline RequestDetails& WithImportAssetFromApiGatewayApi(const ImportAssetFromApiGatewayApiRequestDetails& value) { SetImportAssetFromApiGatewayApi(value); return *this;}

    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline RequestDetails& WithImportAssetFromApiGatewayApi(ImportAssetFromApiGatewayApiRequestDetails&& value) { SetImportAssetFromApiGatewayApi(std::move(value)); return *this;}


    /**
     * <p>Details of the request to create S3 data access from the Amazon S3
     * bucket.</p>
     */
    inline const CreateS3DataAccessFromS3BucketRequestDetails& GetCreateS3DataAccessFromS3Bucket() const{ return m_createS3DataAccessFromS3Bucket; }

    /**
     * <p>Details of the request to create S3 data access from the Amazon S3
     * bucket.</p>
     */
    inline bool CreateS3DataAccessFromS3BucketHasBeenSet() const { return m_createS3DataAccessFromS3BucketHasBeenSet; }

    /**
     * <p>Details of the request to create S3 data access from the Amazon S3
     * bucket.</p>
     */
    inline void SetCreateS3DataAccessFromS3Bucket(const CreateS3DataAccessFromS3BucketRequestDetails& value) { m_createS3DataAccessFromS3BucketHasBeenSet = true; m_createS3DataAccessFromS3Bucket = value; }

    /**
     * <p>Details of the request to create S3 data access from the Amazon S3
     * bucket.</p>
     */
    inline void SetCreateS3DataAccessFromS3Bucket(CreateS3DataAccessFromS3BucketRequestDetails&& value) { m_createS3DataAccessFromS3BucketHasBeenSet = true; m_createS3DataAccessFromS3Bucket = std::move(value); }

    /**
     * <p>Details of the request to create S3 data access from the Amazon S3
     * bucket.</p>
     */
    inline RequestDetails& WithCreateS3DataAccessFromS3Bucket(const CreateS3DataAccessFromS3BucketRequestDetails& value) { SetCreateS3DataAccessFromS3Bucket(value); return *this;}

    /**
     * <p>Details of the request to create S3 data access from the Amazon S3
     * bucket.</p>
     */
    inline RequestDetails& WithCreateS3DataAccessFromS3Bucket(CreateS3DataAccessFromS3BucketRequestDetails&& value) { SetCreateS3DataAccessFromS3Bucket(std::move(value)); return *this;}


    /**
     * <p>Request details for the ImportAssetsFromLakeFormationTagPolicy job.</p>
     */
    inline const ImportAssetsFromLakeFormationTagPolicyRequestDetails& GetImportAssetsFromLakeFormationTagPolicy() const{ return m_importAssetsFromLakeFormationTagPolicy; }

    /**
     * <p>Request details for the ImportAssetsFromLakeFormationTagPolicy job.</p>
     */
    inline bool ImportAssetsFromLakeFormationTagPolicyHasBeenSet() const { return m_importAssetsFromLakeFormationTagPolicyHasBeenSet; }

    /**
     * <p>Request details for the ImportAssetsFromLakeFormationTagPolicy job.</p>
     */
    inline void SetImportAssetsFromLakeFormationTagPolicy(const ImportAssetsFromLakeFormationTagPolicyRequestDetails& value) { m_importAssetsFromLakeFormationTagPolicyHasBeenSet = true; m_importAssetsFromLakeFormationTagPolicy = value; }

    /**
     * <p>Request details for the ImportAssetsFromLakeFormationTagPolicy job.</p>
     */
    inline void SetImportAssetsFromLakeFormationTagPolicy(ImportAssetsFromLakeFormationTagPolicyRequestDetails&& value) { m_importAssetsFromLakeFormationTagPolicyHasBeenSet = true; m_importAssetsFromLakeFormationTagPolicy = std::move(value); }

    /**
     * <p>Request details for the ImportAssetsFromLakeFormationTagPolicy job.</p>
     */
    inline RequestDetails& WithImportAssetsFromLakeFormationTagPolicy(const ImportAssetsFromLakeFormationTagPolicyRequestDetails& value) { SetImportAssetsFromLakeFormationTagPolicy(value); return *this;}

    /**
     * <p>Request details for the ImportAssetsFromLakeFormationTagPolicy job.</p>
     */
    inline RequestDetails& WithImportAssetsFromLakeFormationTagPolicy(ImportAssetsFromLakeFormationTagPolicyRequestDetails&& value) { SetImportAssetsFromLakeFormationTagPolicy(std::move(value)); return *this;}

  private:

    ExportAssetToSignedUrlRequestDetails m_exportAssetToSignedUrl;
    bool m_exportAssetToSignedUrlHasBeenSet = false;

    ExportAssetsToS3RequestDetails m_exportAssetsToS3;
    bool m_exportAssetsToS3HasBeenSet = false;

    ExportRevisionsToS3RequestDetails m_exportRevisionsToS3;
    bool m_exportRevisionsToS3HasBeenSet = false;

    ImportAssetFromSignedUrlRequestDetails m_importAssetFromSignedUrl;
    bool m_importAssetFromSignedUrlHasBeenSet = false;

    ImportAssetsFromS3RequestDetails m_importAssetsFromS3;
    bool m_importAssetsFromS3HasBeenSet = false;

    ImportAssetsFromRedshiftDataSharesRequestDetails m_importAssetsFromRedshiftDataShares;
    bool m_importAssetsFromRedshiftDataSharesHasBeenSet = false;

    ImportAssetFromApiGatewayApiRequestDetails m_importAssetFromApiGatewayApi;
    bool m_importAssetFromApiGatewayApiHasBeenSet = false;

    CreateS3DataAccessFromS3BucketRequestDetails m_createS3DataAccessFromS3Bucket;
    bool m_createS3DataAccessFromS3BucketHasBeenSet = false;

    ImportAssetsFromLakeFormationTagPolicyRequestDetails m_importAssetsFromLakeFormationTagPolicy;
    bool m_importAssetsFromLakeFormationTagPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
