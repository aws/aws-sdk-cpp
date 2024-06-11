﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/ExportAssetToSignedUrlResponseDetails.h>
#include <aws/dataexchange/model/ExportAssetsToS3ResponseDetails.h>
#include <aws/dataexchange/model/ExportRevisionsToS3ResponseDetails.h>
#include <aws/dataexchange/model/ImportAssetFromSignedUrlResponseDetails.h>
#include <aws/dataexchange/model/ImportAssetsFromS3ResponseDetails.h>
#include <aws/dataexchange/model/ImportAssetsFromRedshiftDataSharesResponseDetails.h>
#include <aws/dataexchange/model/ImportAssetFromApiGatewayApiResponseDetails.h>
#include <aws/dataexchange/model/CreateS3DataAccessFromS3BucketResponseDetails.h>
#include <aws/dataexchange/model/ImportAssetsFromLakeFormationTagPolicyResponseDetails.h>
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
  class ResponseDetails
  {
  public:
    AWS_DATAEXCHANGE_API ResponseDetails();
    AWS_DATAEXCHANGE_API ResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details for the export to signed URL response.</p>
     */
    inline const ExportAssetToSignedUrlResponseDetails& GetExportAssetToSignedUrl() const{ return m_exportAssetToSignedUrl; }
    inline bool ExportAssetToSignedUrlHasBeenSet() const { return m_exportAssetToSignedUrlHasBeenSet; }
    inline void SetExportAssetToSignedUrl(const ExportAssetToSignedUrlResponseDetails& value) { m_exportAssetToSignedUrlHasBeenSet = true; m_exportAssetToSignedUrl = value; }
    inline void SetExportAssetToSignedUrl(ExportAssetToSignedUrlResponseDetails&& value) { m_exportAssetToSignedUrlHasBeenSet = true; m_exportAssetToSignedUrl = std::move(value); }
    inline ResponseDetails& WithExportAssetToSignedUrl(const ExportAssetToSignedUrlResponseDetails& value) { SetExportAssetToSignedUrl(value); return *this;}
    inline ResponseDetails& WithExportAssetToSignedUrl(ExportAssetToSignedUrlResponseDetails&& value) { SetExportAssetToSignedUrl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the export to Amazon S3 response.</p>
     */
    inline const ExportAssetsToS3ResponseDetails& GetExportAssetsToS3() const{ return m_exportAssetsToS3; }
    inline bool ExportAssetsToS3HasBeenSet() const { return m_exportAssetsToS3HasBeenSet; }
    inline void SetExportAssetsToS3(const ExportAssetsToS3ResponseDetails& value) { m_exportAssetsToS3HasBeenSet = true; m_exportAssetsToS3 = value; }
    inline void SetExportAssetsToS3(ExportAssetsToS3ResponseDetails&& value) { m_exportAssetsToS3HasBeenSet = true; m_exportAssetsToS3 = std::move(value); }
    inline ResponseDetails& WithExportAssetsToS3(const ExportAssetsToS3ResponseDetails& value) { SetExportAssetsToS3(value); return *this;}
    inline ResponseDetails& WithExportAssetsToS3(ExportAssetsToS3ResponseDetails&& value) { SetExportAssetsToS3(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the export revisions to Amazon S3 response.</p>
     */
    inline const ExportRevisionsToS3ResponseDetails& GetExportRevisionsToS3() const{ return m_exportRevisionsToS3; }
    inline bool ExportRevisionsToS3HasBeenSet() const { return m_exportRevisionsToS3HasBeenSet; }
    inline void SetExportRevisionsToS3(const ExportRevisionsToS3ResponseDetails& value) { m_exportRevisionsToS3HasBeenSet = true; m_exportRevisionsToS3 = value; }
    inline void SetExportRevisionsToS3(ExportRevisionsToS3ResponseDetails&& value) { m_exportRevisionsToS3HasBeenSet = true; m_exportRevisionsToS3 = std::move(value); }
    inline ResponseDetails& WithExportRevisionsToS3(const ExportRevisionsToS3ResponseDetails& value) { SetExportRevisionsToS3(value); return *this;}
    inline ResponseDetails& WithExportRevisionsToS3(ExportRevisionsToS3ResponseDetails&& value) { SetExportRevisionsToS3(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the import from signed URL response.</p>
     */
    inline const ImportAssetFromSignedUrlResponseDetails& GetImportAssetFromSignedUrl() const{ return m_importAssetFromSignedUrl; }
    inline bool ImportAssetFromSignedUrlHasBeenSet() const { return m_importAssetFromSignedUrlHasBeenSet; }
    inline void SetImportAssetFromSignedUrl(const ImportAssetFromSignedUrlResponseDetails& value) { m_importAssetFromSignedUrlHasBeenSet = true; m_importAssetFromSignedUrl = value; }
    inline void SetImportAssetFromSignedUrl(ImportAssetFromSignedUrlResponseDetails&& value) { m_importAssetFromSignedUrlHasBeenSet = true; m_importAssetFromSignedUrl = std::move(value); }
    inline ResponseDetails& WithImportAssetFromSignedUrl(const ImportAssetFromSignedUrlResponseDetails& value) { SetImportAssetFromSignedUrl(value); return *this;}
    inline ResponseDetails& WithImportAssetFromSignedUrl(ImportAssetFromSignedUrlResponseDetails&& value) { SetImportAssetFromSignedUrl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the import from Amazon S3 response.</p>
     */
    inline const ImportAssetsFromS3ResponseDetails& GetImportAssetsFromS3() const{ return m_importAssetsFromS3; }
    inline bool ImportAssetsFromS3HasBeenSet() const { return m_importAssetsFromS3HasBeenSet; }
    inline void SetImportAssetsFromS3(const ImportAssetsFromS3ResponseDetails& value) { m_importAssetsFromS3HasBeenSet = true; m_importAssetsFromS3 = value; }
    inline void SetImportAssetsFromS3(ImportAssetsFromS3ResponseDetails&& value) { m_importAssetsFromS3HasBeenSet = true; m_importAssetsFromS3 = std::move(value); }
    inline ResponseDetails& WithImportAssetsFromS3(const ImportAssetsFromS3ResponseDetails& value) { SetImportAssetsFromS3(value); return *this;}
    inline ResponseDetails& WithImportAssetsFromS3(ImportAssetsFromS3ResponseDetails&& value) { SetImportAssetsFromS3(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details from an import from Amazon Redshift datashare response.</p>
     */
    inline const ImportAssetsFromRedshiftDataSharesResponseDetails& GetImportAssetsFromRedshiftDataShares() const{ return m_importAssetsFromRedshiftDataShares; }
    inline bool ImportAssetsFromRedshiftDataSharesHasBeenSet() const { return m_importAssetsFromRedshiftDataSharesHasBeenSet; }
    inline void SetImportAssetsFromRedshiftDataShares(const ImportAssetsFromRedshiftDataSharesResponseDetails& value) { m_importAssetsFromRedshiftDataSharesHasBeenSet = true; m_importAssetsFromRedshiftDataShares = value; }
    inline void SetImportAssetsFromRedshiftDataShares(ImportAssetsFromRedshiftDataSharesResponseDetails&& value) { m_importAssetsFromRedshiftDataSharesHasBeenSet = true; m_importAssetsFromRedshiftDataShares = std::move(value); }
    inline ResponseDetails& WithImportAssetsFromRedshiftDataShares(const ImportAssetsFromRedshiftDataSharesResponseDetails& value) { SetImportAssetsFromRedshiftDataShares(value); return *this;}
    inline ResponseDetails& WithImportAssetsFromRedshiftDataShares(ImportAssetsFromRedshiftDataSharesResponseDetails&& value) { SetImportAssetsFromRedshiftDataShares(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response details.</p>
     */
    inline const ImportAssetFromApiGatewayApiResponseDetails& GetImportAssetFromApiGatewayApi() const{ return m_importAssetFromApiGatewayApi; }
    inline bool ImportAssetFromApiGatewayApiHasBeenSet() const { return m_importAssetFromApiGatewayApiHasBeenSet; }
    inline void SetImportAssetFromApiGatewayApi(const ImportAssetFromApiGatewayApiResponseDetails& value) { m_importAssetFromApiGatewayApiHasBeenSet = true; m_importAssetFromApiGatewayApi = value; }
    inline void SetImportAssetFromApiGatewayApi(ImportAssetFromApiGatewayApiResponseDetails&& value) { m_importAssetFromApiGatewayApiHasBeenSet = true; m_importAssetFromApiGatewayApi = std::move(value); }
    inline ResponseDetails& WithImportAssetFromApiGatewayApi(const ImportAssetFromApiGatewayApiResponseDetails& value) { SetImportAssetFromApiGatewayApi(value); return *this;}
    inline ResponseDetails& WithImportAssetFromApiGatewayApi(ImportAssetFromApiGatewayApiResponseDetails&& value) { SetImportAssetFromApiGatewayApi(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response details from the CreateS3DataAccessFromS3Bucket job.</p>
     */
    inline const CreateS3DataAccessFromS3BucketResponseDetails& GetCreateS3DataAccessFromS3Bucket() const{ return m_createS3DataAccessFromS3Bucket; }
    inline bool CreateS3DataAccessFromS3BucketHasBeenSet() const { return m_createS3DataAccessFromS3BucketHasBeenSet; }
    inline void SetCreateS3DataAccessFromS3Bucket(const CreateS3DataAccessFromS3BucketResponseDetails& value) { m_createS3DataAccessFromS3BucketHasBeenSet = true; m_createS3DataAccessFromS3Bucket = value; }
    inline void SetCreateS3DataAccessFromS3Bucket(CreateS3DataAccessFromS3BucketResponseDetails&& value) { m_createS3DataAccessFromS3BucketHasBeenSet = true; m_createS3DataAccessFromS3Bucket = std::move(value); }
    inline ResponseDetails& WithCreateS3DataAccessFromS3Bucket(const CreateS3DataAccessFromS3BucketResponseDetails& value) { SetCreateS3DataAccessFromS3Bucket(value); return *this;}
    inline ResponseDetails& WithCreateS3DataAccessFromS3Bucket(CreateS3DataAccessFromS3BucketResponseDetails&& value) { SetCreateS3DataAccessFromS3Bucket(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response details from the ImportAssetsFromLakeFormationTagPolicy job.</p>
     */
    inline const ImportAssetsFromLakeFormationTagPolicyResponseDetails& GetImportAssetsFromLakeFormationTagPolicy() const{ return m_importAssetsFromLakeFormationTagPolicy; }
    inline bool ImportAssetsFromLakeFormationTagPolicyHasBeenSet() const { return m_importAssetsFromLakeFormationTagPolicyHasBeenSet; }
    inline void SetImportAssetsFromLakeFormationTagPolicy(const ImportAssetsFromLakeFormationTagPolicyResponseDetails& value) { m_importAssetsFromLakeFormationTagPolicyHasBeenSet = true; m_importAssetsFromLakeFormationTagPolicy = value; }
    inline void SetImportAssetsFromLakeFormationTagPolicy(ImportAssetsFromLakeFormationTagPolicyResponseDetails&& value) { m_importAssetsFromLakeFormationTagPolicyHasBeenSet = true; m_importAssetsFromLakeFormationTagPolicy = std::move(value); }
    inline ResponseDetails& WithImportAssetsFromLakeFormationTagPolicy(const ImportAssetsFromLakeFormationTagPolicyResponseDetails& value) { SetImportAssetsFromLakeFormationTagPolicy(value); return *this;}
    inline ResponseDetails& WithImportAssetsFromLakeFormationTagPolicy(ImportAssetsFromLakeFormationTagPolicyResponseDetails&& value) { SetImportAssetsFromLakeFormationTagPolicy(std::move(value)); return *this;}
    ///@}
  private:

    ExportAssetToSignedUrlResponseDetails m_exportAssetToSignedUrl;
    bool m_exportAssetToSignedUrlHasBeenSet = false;

    ExportAssetsToS3ResponseDetails m_exportAssetsToS3;
    bool m_exportAssetsToS3HasBeenSet = false;

    ExportRevisionsToS3ResponseDetails m_exportRevisionsToS3;
    bool m_exportRevisionsToS3HasBeenSet = false;

    ImportAssetFromSignedUrlResponseDetails m_importAssetFromSignedUrl;
    bool m_importAssetFromSignedUrlHasBeenSet = false;

    ImportAssetsFromS3ResponseDetails m_importAssetsFromS3;
    bool m_importAssetsFromS3HasBeenSet = false;

    ImportAssetsFromRedshiftDataSharesResponseDetails m_importAssetsFromRedshiftDataShares;
    bool m_importAssetsFromRedshiftDataSharesHasBeenSet = false;

    ImportAssetFromApiGatewayApiResponseDetails m_importAssetFromApiGatewayApi;
    bool m_importAssetFromApiGatewayApiHasBeenSet = false;

    CreateS3DataAccessFromS3BucketResponseDetails m_createS3DataAccessFromS3Bucket;
    bool m_createS3DataAccessFromS3BucketHasBeenSet = false;

    ImportAssetsFromLakeFormationTagPolicyResponseDetails m_importAssetsFromLakeFormationTagPolicy;
    bool m_importAssetsFromLakeFormationTagPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
