/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/S3DestinationConfig.h>
#include <aws/compute-optimizer/model/FileFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/LicenseRecommendationFilter.h>
#include <aws/compute-optimizer/model/ExportableLicenseField.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class ExportLicenseRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExportLicenseRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportLicenseRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter can't be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>If this parameter is omitted, recommendations for member
     * accounts aren't included in the export.</p> <p>You can specify multiple account
     * IDs per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter can't be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>If this parameter is omitted, recommendations for member
     * accounts aren't included in the export.</p> <p>You can specify multiple account
     * IDs per request.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter can't be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>If this parameter is omitted, recommendations for member
     * accounts aren't included in the export.</p> <p>You can specify multiple account
     * IDs per request.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter can't be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>If this parameter is omitted, recommendations for member
     * accounts aren't included in the export.</p> <p>You can specify multiple account
     * IDs per request.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter can't be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>If this parameter is omitted, recommendations for member
     * accounts aren't included in the export.</p> <p>You can specify multiple account
     * IDs per request.</p>
     */
    inline ExportLicenseRecommendationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter can't be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>If this parameter is omitted, recommendations for member
     * accounts aren't included in the export.</p> <p>You can specify multiple account
     * IDs per request.</p>
     */
    inline ExportLicenseRecommendationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter can't be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>If this parameter is omitted, recommendations for member
     * accounts aren't included in the export.</p> <p>You can specify multiple account
     * IDs per request.</p>
     */
    inline ExportLicenseRecommendationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter can't be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>If this parameter is omitted, recommendations for member
     * accounts aren't included in the export.</p> <p>You can specify multiple account
     * IDs per request.</p>
     */
    inline ExportLicenseRecommendationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter can't be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>If this parameter is omitted, recommendations for member
     * accounts aren't included in the export.</p> <p>You can specify multiple account
     * IDs per request.</p>
     */
    inline ExportLicenseRecommendationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p> An array of objects to specify a filter that exports a more specific set of
     * license recommendations. </p>
     */
    inline const Aws::Vector<LicenseRecommendationFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p> An array of objects to specify a filter that exports a more specific set of
     * license recommendations. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p> An array of objects to specify a filter that exports a more specific set of
     * license recommendations. </p>
     */
    inline void SetFilters(const Aws::Vector<LicenseRecommendationFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p> An array of objects to specify a filter that exports a more specific set of
     * license recommendations. </p>
     */
    inline void SetFilters(Aws::Vector<LicenseRecommendationFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p> An array of objects to specify a filter that exports a more specific set of
     * license recommendations. </p>
     */
    inline ExportLicenseRecommendationsRequest& WithFilters(const Aws::Vector<LicenseRecommendationFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p> An array of objects to specify a filter that exports a more specific set of
     * license recommendations. </p>
     */
    inline ExportLicenseRecommendationsRequest& WithFilters(Aws::Vector<LicenseRecommendationFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p> An array of objects to specify a filter that exports a more specific set of
     * license recommendations. </p>
     */
    inline ExportLicenseRecommendationsRequest& AddFilters(const LicenseRecommendationFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p> An array of objects to specify a filter that exports a more specific set of
     * license recommendations. </p>
     */
    inline ExportLicenseRecommendationsRequest& AddFilters(LicenseRecommendationFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const Aws::Vector<ExportableLicenseField>& GetFieldsToExport() const{ return m_fieldsToExport; }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline bool FieldsToExportHasBeenSet() const { return m_fieldsToExportHasBeenSet; }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetFieldsToExport(const Aws::Vector<ExportableLicenseField>& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport = value; }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetFieldsToExport(Aws::Vector<ExportableLicenseField>&& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport = std::move(value); }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportLicenseRecommendationsRequest& WithFieldsToExport(const Aws::Vector<ExportableLicenseField>& value) { SetFieldsToExport(value); return *this;}

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportLicenseRecommendationsRequest& WithFieldsToExport(Aws::Vector<ExportableLicenseField>&& value) { SetFieldsToExport(std::move(value)); return *this;}

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportLicenseRecommendationsRequest& AddFieldsToExport(const ExportableLicenseField& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport.push_back(value); return *this; }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportLicenseRecommendationsRequest& AddFieldsToExport(ExportableLicenseField&& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport.push_back(std::move(value)); return *this; }


    
    inline const S3DestinationConfig& GetS3DestinationConfig() const{ return m_s3DestinationConfig; }

    
    inline bool S3DestinationConfigHasBeenSet() const { return m_s3DestinationConfigHasBeenSet; }

    
    inline void SetS3DestinationConfig(const S3DestinationConfig& value) { m_s3DestinationConfigHasBeenSet = true; m_s3DestinationConfig = value; }

    
    inline void SetS3DestinationConfig(S3DestinationConfig&& value) { m_s3DestinationConfigHasBeenSet = true; m_s3DestinationConfig = std::move(value); }

    
    inline ExportLicenseRecommendationsRequest& WithS3DestinationConfig(const S3DestinationConfig& value) { SetS3DestinationConfig(value); return *this;}

    
    inline ExportLicenseRecommendationsRequest& WithS3DestinationConfig(S3DestinationConfig&& value) { SetS3DestinationConfig(std::move(value)); return *this;}


    /**
     * <p>The format of the export file.</p> <p>A CSV file is the only export format
     * currently supported.</p>
     */
    inline const FileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>The format of the export file.</p> <p>A CSV file is the only export format
     * currently supported.</p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>The format of the export file.</p> <p>A CSV file is the only export format
     * currently supported.</p>
     */
    inline void SetFileFormat(const FileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>The format of the export file.</p> <p>A CSV file is the only export format
     * currently supported.</p>
     */
    inline void SetFileFormat(FileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>The format of the export file.</p> <p>A CSV file is the only export format
     * currently supported.</p>
     */
    inline ExportLicenseRecommendationsRequest& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The format of the export file.</p> <p>A CSV file is the only export format
     * currently supported.</p>
     */
    inline ExportLicenseRecommendationsRequest& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to include recommendations for resources in all member
     * accounts of the organization if your account is the management account of an
     * organization.</p> <p>The member accounts must also be opted in to Compute
     * Optimizer, and trusted access for Compute Optimizer must be enabled in the
     * organization account. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/security-iam.html#trusted-service-access">Compute
     * Optimizer and Amazon Web Services Organizations trusted access</a> in the
     * <i>Compute Optimizer User Guide</i>.</p> <p>If this parameter is omitted,
     * recommendations for member accounts of the organization aren't included in the
     * export file .</p> <p>This parameter cannot be specified together with the
     * account IDs parameter. The parameters are mutually exclusive.</p>
     */
    inline bool GetIncludeMemberAccounts() const{ return m_includeMemberAccounts; }

    /**
     * <p>Indicates whether to include recommendations for resources in all member
     * accounts of the organization if your account is the management account of an
     * organization.</p> <p>The member accounts must also be opted in to Compute
     * Optimizer, and trusted access for Compute Optimizer must be enabled in the
     * organization account. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/security-iam.html#trusted-service-access">Compute
     * Optimizer and Amazon Web Services Organizations trusted access</a> in the
     * <i>Compute Optimizer User Guide</i>.</p> <p>If this parameter is omitted,
     * recommendations for member accounts of the organization aren't included in the
     * export file .</p> <p>This parameter cannot be specified together with the
     * account IDs parameter. The parameters are mutually exclusive.</p>
     */
    inline bool IncludeMemberAccountsHasBeenSet() const { return m_includeMemberAccountsHasBeenSet; }

    /**
     * <p>Indicates whether to include recommendations for resources in all member
     * accounts of the organization if your account is the management account of an
     * organization.</p> <p>The member accounts must also be opted in to Compute
     * Optimizer, and trusted access for Compute Optimizer must be enabled in the
     * organization account. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/security-iam.html#trusted-service-access">Compute
     * Optimizer and Amazon Web Services Organizations trusted access</a> in the
     * <i>Compute Optimizer User Guide</i>.</p> <p>If this parameter is omitted,
     * recommendations for member accounts of the organization aren't included in the
     * export file .</p> <p>This parameter cannot be specified together with the
     * account IDs parameter. The parameters are mutually exclusive.</p>
     */
    inline void SetIncludeMemberAccounts(bool value) { m_includeMemberAccountsHasBeenSet = true; m_includeMemberAccounts = value; }

    /**
     * <p>Indicates whether to include recommendations for resources in all member
     * accounts of the organization if your account is the management account of an
     * organization.</p> <p>The member accounts must also be opted in to Compute
     * Optimizer, and trusted access for Compute Optimizer must be enabled in the
     * organization account. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/security-iam.html#trusted-service-access">Compute
     * Optimizer and Amazon Web Services Organizations trusted access</a> in the
     * <i>Compute Optimizer User Guide</i>.</p> <p>If this parameter is omitted,
     * recommendations for member accounts of the organization aren't included in the
     * export file .</p> <p>This parameter cannot be specified together with the
     * account IDs parameter. The parameters are mutually exclusive.</p>
     */
    inline ExportLicenseRecommendationsRequest& WithIncludeMemberAccounts(bool value) { SetIncludeMemberAccounts(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<LicenseRecommendationFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<ExportableLicenseField> m_fieldsToExport;
    bool m_fieldsToExportHasBeenSet = false;

    S3DestinationConfig m_s3DestinationConfig;
    bool m_s3DestinationConfigHasBeenSet = false;

    FileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;

    bool m_includeMemberAccounts;
    bool m_includeMemberAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
