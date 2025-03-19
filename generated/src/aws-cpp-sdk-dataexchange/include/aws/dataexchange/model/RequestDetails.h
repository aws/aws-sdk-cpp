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
    AWS_DATAEXCHANGE_API RequestDetails() = default;
    AWS_DATAEXCHANGE_API RequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API RequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the export to signed URL request.</p>
     */
    inline const ExportAssetToSignedUrlRequestDetails& GetExportAssetToSignedUrl() const { return m_exportAssetToSignedUrl; }
    inline bool ExportAssetToSignedUrlHasBeenSet() const { return m_exportAssetToSignedUrlHasBeenSet; }
    template<typename ExportAssetToSignedUrlT = ExportAssetToSignedUrlRequestDetails>
    void SetExportAssetToSignedUrl(ExportAssetToSignedUrlT&& value) { m_exportAssetToSignedUrlHasBeenSet = true; m_exportAssetToSignedUrl = std::forward<ExportAssetToSignedUrlT>(value); }
    template<typename ExportAssetToSignedUrlT = ExportAssetToSignedUrlRequestDetails>
    RequestDetails& WithExportAssetToSignedUrl(ExportAssetToSignedUrlT&& value) { SetExportAssetToSignedUrl(std::forward<ExportAssetToSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline const ExportAssetsToS3RequestDetails& GetExportAssetsToS3() const { return m_exportAssetsToS3; }
    inline bool ExportAssetsToS3HasBeenSet() const { return m_exportAssetsToS3HasBeenSet; }
    template<typename ExportAssetsToS3T = ExportAssetsToS3RequestDetails>
    void SetExportAssetsToS3(ExportAssetsToS3T&& value) { m_exportAssetsToS3HasBeenSet = true; m_exportAssetsToS3 = std::forward<ExportAssetsToS3T>(value); }
    template<typename ExportAssetsToS3T = ExportAssetsToS3RequestDetails>
    RequestDetails& WithExportAssetsToS3(ExportAssetsToS3T&& value) { SetExportAssetsToS3(std::forward<ExportAssetsToS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the export to Amazon S3 request.</p>
     */
    inline const ExportRevisionsToS3RequestDetails& GetExportRevisionsToS3() const { return m_exportRevisionsToS3; }
    inline bool ExportRevisionsToS3HasBeenSet() const { return m_exportRevisionsToS3HasBeenSet; }
    template<typename ExportRevisionsToS3T = ExportRevisionsToS3RequestDetails>
    void SetExportRevisionsToS3(ExportRevisionsToS3T&& value) { m_exportRevisionsToS3HasBeenSet = true; m_exportRevisionsToS3 = std::forward<ExportRevisionsToS3T>(value); }
    template<typename ExportRevisionsToS3T = ExportRevisionsToS3RequestDetails>
    RequestDetails& WithExportRevisionsToS3(ExportRevisionsToS3T&& value) { SetExportRevisionsToS3(std::forward<ExportRevisionsToS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the import from Amazon S3 request.</p>
     */
    inline const ImportAssetFromSignedUrlRequestDetails& GetImportAssetFromSignedUrl() const { return m_importAssetFromSignedUrl; }
    inline bool ImportAssetFromSignedUrlHasBeenSet() const { return m_importAssetFromSignedUrlHasBeenSet; }
    template<typename ImportAssetFromSignedUrlT = ImportAssetFromSignedUrlRequestDetails>
    void SetImportAssetFromSignedUrl(ImportAssetFromSignedUrlT&& value) { m_importAssetFromSignedUrlHasBeenSet = true; m_importAssetFromSignedUrl = std::forward<ImportAssetFromSignedUrlT>(value); }
    template<typename ImportAssetFromSignedUrlT = ImportAssetFromSignedUrlRequestDetails>
    RequestDetails& WithImportAssetFromSignedUrl(ImportAssetFromSignedUrlT&& value) { SetImportAssetFromSignedUrl(std::forward<ImportAssetFromSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the import asset from API Gateway API request.</p>
     */
    inline const ImportAssetsFromS3RequestDetails& GetImportAssetsFromS3() const { return m_importAssetsFromS3; }
    inline bool ImportAssetsFromS3HasBeenSet() const { return m_importAssetsFromS3HasBeenSet; }
    template<typename ImportAssetsFromS3T = ImportAssetsFromS3RequestDetails>
    void SetImportAssetsFromS3(ImportAssetsFromS3T&& value) { m_importAssetsFromS3HasBeenSet = true; m_importAssetsFromS3 = std::forward<ImportAssetsFromS3T>(value); }
    template<typename ImportAssetsFromS3T = ImportAssetsFromS3RequestDetails>
    RequestDetails& WithImportAssetsFromS3(ImportAssetsFromS3T&& value) { SetImportAssetsFromS3(std::forward<ImportAssetsFromS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details from an import from Amazon Redshift datashare request.</p>
     */
    inline const ImportAssetsFromRedshiftDataSharesRequestDetails& GetImportAssetsFromRedshiftDataShares() const { return m_importAssetsFromRedshiftDataShares; }
    inline bool ImportAssetsFromRedshiftDataSharesHasBeenSet() const { return m_importAssetsFromRedshiftDataSharesHasBeenSet; }
    template<typename ImportAssetsFromRedshiftDataSharesT = ImportAssetsFromRedshiftDataSharesRequestDetails>
    void SetImportAssetsFromRedshiftDataShares(ImportAssetsFromRedshiftDataSharesT&& value) { m_importAssetsFromRedshiftDataSharesHasBeenSet = true; m_importAssetsFromRedshiftDataShares = std::forward<ImportAssetsFromRedshiftDataSharesT>(value); }
    template<typename ImportAssetsFromRedshiftDataSharesT = ImportAssetsFromRedshiftDataSharesRequestDetails>
    RequestDetails& WithImportAssetsFromRedshiftDataShares(ImportAssetsFromRedshiftDataSharesT&& value) { SetImportAssetsFromRedshiftDataShares(std::forward<ImportAssetsFromRedshiftDataSharesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the import from signed URL request.</p>
     */
    inline const ImportAssetFromApiGatewayApiRequestDetails& GetImportAssetFromApiGatewayApi() const { return m_importAssetFromApiGatewayApi; }
    inline bool ImportAssetFromApiGatewayApiHasBeenSet() const { return m_importAssetFromApiGatewayApiHasBeenSet; }
    template<typename ImportAssetFromApiGatewayApiT = ImportAssetFromApiGatewayApiRequestDetails>
    void SetImportAssetFromApiGatewayApi(ImportAssetFromApiGatewayApiT&& value) { m_importAssetFromApiGatewayApiHasBeenSet = true; m_importAssetFromApiGatewayApi = std::forward<ImportAssetFromApiGatewayApiT>(value); }
    template<typename ImportAssetFromApiGatewayApiT = ImportAssetFromApiGatewayApiRequestDetails>
    RequestDetails& WithImportAssetFromApiGatewayApi(ImportAssetFromApiGatewayApiT&& value) { SetImportAssetFromApiGatewayApi(std::forward<ImportAssetFromApiGatewayApiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the request to create S3 data access from the Amazon S3
     * bucket.</p>
     */
    inline const CreateS3DataAccessFromS3BucketRequestDetails& GetCreateS3DataAccessFromS3Bucket() const { return m_createS3DataAccessFromS3Bucket; }
    inline bool CreateS3DataAccessFromS3BucketHasBeenSet() const { return m_createS3DataAccessFromS3BucketHasBeenSet; }
    template<typename CreateS3DataAccessFromS3BucketT = CreateS3DataAccessFromS3BucketRequestDetails>
    void SetCreateS3DataAccessFromS3Bucket(CreateS3DataAccessFromS3BucketT&& value) { m_createS3DataAccessFromS3BucketHasBeenSet = true; m_createS3DataAccessFromS3Bucket = std::forward<CreateS3DataAccessFromS3BucketT>(value); }
    template<typename CreateS3DataAccessFromS3BucketT = CreateS3DataAccessFromS3BucketRequestDetails>
    RequestDetails& WithCreateS3DataAccessFromS3Bucket(CreateS3DataAccessFromS3BucketT&& value) { SetCreateS3DataAccessFromS3Bucket(std::forward<CreateS3DataAccessFromS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request details for the ImportAssetsFromLakeFormationTagPolicy job.</p>
     */
    inline const ImportAssetsFromLakeFormationTagPolicyRequestDetails& GetImportAssetsFromLakeFormationTagPolicy() const { return m_importAssetsFromLakeFormationTagPolicy; }
    inline bool ImportAssetsFromLakeFormationTagPolicyHasBeenSet() const { return m_importAssetsFromLakeFormationTagPolicyHasBeenSet; }
    template<typename ImportAssetsFromLakeFormationTagPolicyT = ImportAssetsFromLakeFormationTagPolicyRequestDetails>
    void SetImportAssetsFromLakeFormationTagPolicy(ImportAssetsFromLakeFormationTagPolicyT&& value) { m_importAssetsFromLakeFormationTagPolicyHasBeenSet = true; m_importAssetsFromLakeFormationTagPolicy = std::forward<ImportAssetsFromLakeFormationTagPolicyT>(value); }
    template<typename ImportAssetsFromLakeFormationTagPolicyT = ImportAssetsFromLakeFormationTagPolicyRequestDetails>
    RequestDetails& WithImportAssetsFromLakeFormationTagPolicy(ImportAssetsFromLakeFormationTagPolicyT&& value) { SetImportAssetsFromLakeFormationTagPolicy(std::forward<ImportAssetsFromLakeFormationTagPolicyT>(value)); return *this;}
    ///@}
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
