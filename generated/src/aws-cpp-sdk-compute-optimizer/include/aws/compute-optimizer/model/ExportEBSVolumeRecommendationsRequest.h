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
#include <aws/compute-optimizer/model/EBSFilter.h>
#include <aws/compute-optimizer/model/ExportableVolumeField.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class ExportEBSVolumeRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExportEBSVolumeRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportEBSVolumeRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Amazon EBS
     * volume recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Amazon EBS
     * volume recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Amazon EBS
     * volume recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Amazon EBS
     * volume recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Amazon EBS
     * volume recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Amazon EBS
     * volume recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Amazon EBS
     * volume recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Amazon EBS
     * volume recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Amazon EBS
     * volume recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Amazon EBS volume recommendations.</p>
     */
    inline const Aws::Vector<EBSFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Amazon EBS volume recommendations.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Amazon EBS volume recommendations.</p>
     */
    inline void SetFilters(const Aws::Vector<EBSFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Amazon EBS volume recommendations.</p>
     */
    inline void SetFilters(Aws::Vector<EBSFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Amazon EBS volume recommendations.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& WithFilters(const Aws::Vector<EBSFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Amazon EBS volume recommendations.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& WithFilters(Aws::Vector<EBSFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Amazon EBS volume recommendations.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& AddFilters(const EBSFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Amazon EBS volume recommendations.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& AddFilters(EBSFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const Aws::Vector<ExportableVolumeField>& GetFieldsToExport() const{ return m_fieldsToExport; }

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
    inline void SetFieldsToExport(const Aws::Vector<ExportableVolumeField>& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport = value; }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetFieldsToExport(Aws::Vector<ExportableVolumeField>&& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport = std::move(value); }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& WithFieldsToExport(const Aws::Vector<ExportableVolumeField>& value) { SetFieldsToExport(value); return *this;}

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& WithFieldsToExport(Aws::Vector<ExportableVolumeField>&& value) { SetFieldsToExport(std::move(value)); return *this;}

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& AddFieldsToExport(const ExportableVolumeField& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport.push_back(value); return *this; }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& AddFieldsToExport(ExportableVolumeField&& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport.push_back(std::move(value)); return *this; }


    
    inline const S3DestinationConfig& GetS3DestinationConfig() const{ return m_s3DestinationConfig; }

    
    inline bool S3DestinationConfigHasBeenSet() const { return m_s3DestinationConfigHasBeenSet; }

    
    inline void SetS3DestinationConfig(const S3DestinationConfig& value) { m_s3DestinationConfigHasBeenSet = true; m_s3DestinationConfig = value; }

    
    inline void SetS3DestinationConfig(S3DestinationConfig&& value) { m_s3DestinationConfigHasBeenSet = true; m_s3DestinationConfig = std::move(value); }

    
    inline ExportEBSVolumeRecommendationsRequest& WithS3DestinationConfig(const S3DestinationConfig& value) { SetS3DestinationConfig(value); return *this;}

    
    inline ExportEBSVolumeRecommendationsRequest& WithS3DestinationConfig(S3DestinationConfig&& value) { SetS3DestinationConfig(std::move(value)); return *this;}


    /**
     * <p>The format of the export file.</p> <p>The only export file format currently
     * supported is <code>Csv</code>.</p>
     */
    inline const FileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>The format of the export file.</p> <p>The only export file format currently
     * supported is <code>Csv</code>.</p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>The format of the export file.</p> <p>The only export file format currently
     * supported is <code>Csv</code>.</p>
     */
    inline void SetFileFormat(const FileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>The format of the export file.</p> <p>The only export file format currently
     * supported is <code>Csv</code>.</p>
     */
    inline void SetFileFormat(FileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>The format of the export file.</p> <p>The only export file format currently
     * supported is <code>Csv</code>.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The format of the export file.</p> <p>The only export file format currently
     * supported is <code>Csv</code>.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to include recommendations for resources in all member
     * accounts of the organization if your account is the management account of an
     * organization.</p> <p>The member accounts must also be opted in to Compute
     * Optimizer, and trusted access for Compute Optimizer must be enabled in the
     * organization account. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/security-iam.html#trusted-service-access">Compute
     * Optimizer and Amazon Web Services Organizations trusted access</a> in the
     * <i>Compute Optimizer User Guide</i>.</p> <p>Recommendations for member accounts
     * of the organization are not included in the export file if this parameter is
     * omitted.</p> <p>This parameter cannot be specified together with the account IDs
     * parameter. The parameters are mutually exclusive.</p> <p>Recommendations for
     * member accounts are not included in the export if this parameter, or the account
     * IDs parameter, is omitted.</p>
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
     * <i>Compute Optimizer User Guide</i>.</p> <p>Recommendations for member accounts
     * of the organization are not included in the export file if this parameter is
     * omitted.</p> <p>This parameter cannot be specified together with the account IDs
     * parameter. The parameters are mutually exclusive.</p> <p>Recommendations for
     * member accounts are not included in the export if this parameter, or the account
     * IDs parameter, is omitted.</p>
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
     * <i>Compute Optimizer User Guide</i>.</p> <p>Recommendations for member accounts
     * of the organization are not included in the export file if this parameter is
     * omitted.</p> <p>This parameter cannot be specified together with the account IDs
     * parameter. The parameters are mutually exclusive.</p> <p>Recommendations for
     * member accounts are not included in the export if this parameter, or the account
     * IDs parameter, is omitted.</p>
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
     * <i>Compute Optimizer User Guide</i>.</p> <p>Recommendations for member accounts
     * of the organization are not included in the export file if this parameter is
     * omitted.</p> <p>This parameter cannot be specified together with the account IDs
     * parameter. The parameters are mutually exclusive.</p> <p>Recommendations for
     * member accounts are not included in the export if this parameter, or the account
     * IDs parameter, is omitted.</p>
     */
    inline ExportEBSVolumeRecommendationsRequest& WithIncludeMemberAccounts(bool value) { SetIncludeMemberAccounts(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<EBSFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<ExportableVolumeField> m_fieldsToExport;
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
