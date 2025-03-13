/**
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
    AWS_DATAEXCHANGE_API ResponseDetails() = default;
    AWS_DATAEXCHANGE_API ResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details for the export to signed URL response.</p>
     */
    inline const ExportAssetToSignedUrlResponseDetails& GetExportAssetToSignedUrl() const { return m_exportAssetToSignedUrl; }
    inline bool ExportAssetToSignedUrlHasBeenSet() const { return m_exportAssetToSignedUrlHasBeenSet; }
    template<typename ExportAssetToSignedUrlT = ExportAssetToSignedUrlResponseDetails>
    void SetExportAssetToSignedUrl(ExportAssetToSignedUrlT&& value) { m_exportAssetToSignedUrlHasBeenSet = true; m_exportAssetToSignedUrl = std::forward<ExportAssetToSignedUrlT>(value); }
    template<typename ExportAssetToSignedUrlT = ExportAssetToSignedUrlResponseDetails>
    ResponseDetails& WithExportAssetToSignedUrl(ExportAssetToSignedUrlT&& value) { SetExportAssetToSignedUrl(std::forward<ExportAssetToSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the export to Amazon S3 response.</p>
     */
    inline const ExportAssetsToS3ResponseDetails& GetExportAssetsToS3() const { return m_exportAssetsToS3; }
    inline bool ExportAssetsToS3HasBeenSet() const { return m_exportAssetsToS3HasBeenSet; }
    template<typename ExportAssetsToS3T = ExportAssetsToS3ResponseDetails>
    void SetExportAssetsToS3(ExportAssetsToS3T&& value) { m_exportAssetsToS3HasBeenSet = true; m_exportAssetsToS3 = std::forward<ExportAssetsToS3T>(value); }
    template<typename ExportAssetsToS3T = ExportAssetsToS3ResponseDetails>
    ResponseDetails& WithExportAssetsToS3(ExportAssetsToS3T&& value) { SetExportAssetsToS3(std::forward<ExportAssetsToS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the export revisions to Amazon S3 response.</p>
     */
    inline const ExportRevisionsToS3ResponseDetails& GetExportRevisionsToS3() const { return m_exportRevisionsToS3; }
    inline bool ExportRevisionsToS3HasBeenSet() const { return m_exportRevisionsToS3HasBeenSet; }
    template<typename ExportRevisionsToS3T = ExportRevisionsToS3ResponseDetails>
    void SetExportRevisionsToS3(ExportRevisionsToS3T&& value) { m_exportRevisionsToS3HasBeenSet = true; m_exportRevisionsToS3 = std::forward<ExportRevisionsToS3T>(value); }
    template<typename ExportRevisionsToS3T = ExportRevisionsToS3ResponseDetails>
    ResponseDetails& WithExportRevisionsToS3(ExportRevisionsToS3T&& value) { SetExportRevisionsToS3(std::forward<ExportRevisionsToS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the import from signed URL response.</p>
     */
    inline const ImportAssetFromSignedUrlResponseDetails& GetImportAssetFromSignedUrl() const { return m_importAssetFromSignedUrl; }
    inline bool ImportAssetFromSignedUrlHasBeenSet() const { return m_importAssetFromSignedUrlHasBeenSet; }
    template<typename ImportAssetFromSignedUrlT = ImportAssetFromSignedUrlResponseDetails>
    void SetImportAssetFromSignedUrl(ImportAssetFromSignedUrlT&& value) { m_importAssetFromSignedUrlHasBeenSet = true; m_importAssetFromSignedUrl = std::forward<ImportAssetFromSignedUrlT>(value); }
    template<typename ImportAssetFromSignedUrlT = ImportAssetFromSignedUrlResponseDetails>
    ResponseDetails& WithImportAssetFromSignedUrl(ImportAssetFromSignedUrlT&& value) { SetImportAssetFromSignedUrl(std::forward<ImportAssetFromSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the import from Amazon S3 response.</p>
     */
    inline const ImportAssetsFromS3ResponseDetails& GetImportAssetsFromS3() const { return m_importAssetsFromS3; }
    inline bool ImportAssetsFromS3HasBeenSet() const { return m_importAssetsFromS3HasBeenSet; }
    template<typename ImportAssetsFromS3T = ImportAssetsFromS3ResponseDetails>
    void SetImportAssetsFromS3(ImportAssetsFromS3T&& value) { m_importAssetsFromS3HasBeenSet = true; m_importAssetsFromS3 = std::forward<ImportAssetsFromS3T>(value); }
    template<typename ImportAssetsFromS3T = ImportAssetsFromS3ResponseDetails>
    ResponseDetails& WithImportAssetsFromS3(ImportAssetsFromS3T&& value) { SetImportAssetsFromS3(std::forward<ImportAssetsFromS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details from an import from Amazon Redshift datashare response.</p>
     */
    inline const ImportAssetsFromRedshiftDataSharesResponseDetails& GetImportAssetsFromRedshiftDataShares() const { return m_importAssetsFromRedshiftDataShares; }
    inline bool ImportAssetsFromRedshiftDataSharesHasBeenSet() const { return m_importAssetsFromRedshiftDataSharesHasBeenSet; }
    template<typename ImportAssetsFromRedshiftDataSharesT = ImportAssetsFromRedshiftDataSharesResponseDetails>
    void SetImportAssetsFromRedshiftDataShares(ImportAssetsFromRedshiftDataSharesT&& value) { m_importAssetsFromRedshiftDataSharesHasBeenSet = true; m_importAssetsFromRedshiftDataShares = std::forward<ImportAssetsFromRedshiftDataSharesT>(value); }
    template<typename ImportAssetsFromRedshiftDataSharesT = ImportAssetsFromRedshiftDataSharesResponseDetails>
    ResponseDetails& WithImportAssetsFromRedshiftDataShares(ImportAssetsFromRedshiftDataSharesT&& value) { SetImportAssetsFromRedshiftDataShares(std::forward<ImportAssetsFromRedshiftDataSharesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response details.</p>
     */
    inline const ImportAssetFromApiGatewayApiResponseDetails& GetImportAssetFromApiGatewayApi() const { return m_importAssetFromApiGatewayApi; }
    inline bool ImportAssetFromApiGatewayApiHasBeenSet() const { return m_importAssetFromApiGatewayApiHasBeenSet; }
    template<typename ImportAssetFromApiGatewayApiT = ImportAssetFromApiGatewayApiResponseDetails>
    void SetImportAssetFromApiGatewayApi(ImportAssetFromApiGatewayApiT&& value) { m_importAssetFromApiGatewayApiHasBeenSet = true; m_importAssetFromApiGatewayApi = std::forward<ImportAssetFromApiGatewayApiT>(value); }
    template<typename ImportAssetFromApiGatewayApiT = ImportAssetFromApiGatewayApiResponseDetails>
    ResponseDetails& WithImportAssetFromApiGatewayApi(ImportAssetFromApiGatewayApiT&& value) { SetImportAssetFromApiGatewayApi(std::forward<ImportAssetFromApiGatewayApiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response details from the CreateS3DataAccessFromS3Bucket job.</p>
     */
    inline const CreateS3DataAccessFromS3BucketResponseDetails& GetCreateS3DataAccessFromS3Bucket() const { return m_createS3DataAccessFromS3Bucket; }
    inline bool CreateS3DataAccessFromS3BucketHasBeenSet() const { return m_createS3DataAccessFromS3BucketHasBeenSet; }
    template<typename CreateS3DataAccessFromS3BucketT = CreateS3DataAccessFromS3BucketResponseDetails>
    void SetCreateS3DataAccessFromS3Bucket(CreateS3DataAccessFromS3BucketT&& value) { m_createS3DataAccessFromS3BucketHasBeenSet = true; m_createS3DataAccessFromS3Bucket = std::forward<CreateS3DataAccessFromS3BucketT>(value); }
    template<typename CreateS3DataAccessFromS3BucketT = CreateS3DataAccessFromS3BucketResponseDetails>
    ResponseDetails& WithCreateS3DataAccessFromS3Bucket(CreateS3DataAccessFromS3BucketT&& value) { SetCreateS3DataAccessFromS3Bucket(std::forward<CreateS3DataAccessFromS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response details from the ImportAssetsFromLakeFormationTagPolicy job.</p>
     */
    inline const ImportAssetsFromLakeFormationTagPolicyResponseDetails& GetImportAssetsFromLakeFormationTagPolicy() const { return m_importAssetsFromLakeFormationTagPolicy; }
    inline bool ImportAssetsFromLakeFormationTagPolicyHasBeenSet() const { return m_importAssetsFromLakeFormationTagPolicyHasBeenSet; }
    template<typename ImportAssetsFromLakeFormationTagPolicyT = ImportAssetsFromLakeFormationTagPolicyResponseDetails>
    void SetImportAssetsFromLakeFormationTagPolicy(ImportAssetsFromLakeFormationTagPolicyT&& value) { m_importAssetsFromLakeFormationTagPolicyHasBeenSet = true; m_importAssetsFromLakeFormationTagPolicy = std::forward<ImportAssetsFromLakeFormationTagPolicyT>(value); }
    template<typename ImportAssetsFromLakeFormationTagPolicyT = ImportAssetsFromLakeFormationTagPolicyResponseDetails>
    ResponseDetails& WithImportAssetsFromLakeFormationTagPolicy(ImportAssetsFromLakeFormationTagPolicyT&& value) { SetImportAssetsFromLakeFormationTagPolicy(std::forward<ImportAssetsFromLakeFormationTagPolicyT>(value)); return *this;}
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
