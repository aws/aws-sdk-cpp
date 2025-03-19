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
    AWS_COMPUTEOPTIMIZER_API ExportEBSVolumeRecommendationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportEBSVolumeRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
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
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    ExportEBSVolumeRecommendationsRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    ExportEBSVolumeRecommendationsRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Amazon EBS volume recommendations.</p>
     */
    inline const Aws::Vector<EBSFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<EBSFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<EBSFilter>>
    ExportEBSVolumeRecommendationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = EBSFilter>
    ExportEBSVolumeRecommendationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const Aws::Vector<ExportableVolumeField>& GetFieldsToExport() const { return m_fieldsToExport; }
    inline bool FieldsToExportHasBeenSet() const { return m_fieldsToExportHasBeenSet; }
    template<typename FieldsToExportT = Aws::Vector<ExportableVolumeField>>
    void SetFieldsToExport(FieldsToExportT&& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport = std::forward<FieldsToExportT>(value); }
    template<typename FieldsToExportT = Aws::Vector<ExportableVolumeField>>
    ExportEBSVolumeRecommendationsRequest& WithFieldsToExport(FieldsToExportT&& value) { SetFieldsToExport(std::forward<FieldsToExportT>(value)); return *this;}
    inline ExportEBSVolumeRecommendationsRequest& AddFieldsToExport(ExportableVolumeField value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const S3DestinationConfig& GetS3DestinationConfig() const { return m_s3DestinationConfig; }
    inline bool S3DestinationConfigHasBeenSet() const { return m_s3DestinationConfigHasBeenSet; }
    template<typename S3DestinationConfigT = S3DestinationConfig>
    void SetS3DestinationConfig(S3DestinationConfigT&& value) { m_s3DestinationConfigHasBeenSet = true; m_s3DestinationConfig = std::forward<S3DestinationConfigT>(value); }
    template<typename S3DestinationConfigT = S3DestinationConfig>
    ExportEBSVolumeRecommendationsRequest& WithS3DestinationConfig(S3DestinationConfigT&& value) { SetS3DestinationConfig(std::forward<S3DestinationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the export file.</p> <p>The only export file format currently
     * supported is <code>Csv</code>.</p>
     */
    inline FileFormat GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(FileFormat value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline ExportEBSVolumeRecommendationsRequest& WithFileFormat(FileFormat value) { SetFileFormat(value); return *this;}
    ///@}

    ///@{
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
    inline bool GetIncludeMemberAccounts() const { return m_includeMemberAccounts; }
    inline bool IncludeMemberAccountsHasBeenSet() const { return m_includeMemberAccountsHasBeenSet; }
    inline void SetIncludeMemberAccounts(bool value) { m_includeMemberAccountsHasBeenSet = true; m_includeMemberAccounts = value; }
    inline ExportEBSVolumeRecommendationsRequest& WithIncludeMemberAccounts(bool value) { SetIncludeMemberAccounts(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<EBSFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<ExportableVolumeField> m_fieldsToExport;
    bool m_fieldsToExportHasBeenSet = false;

    S3DestinationConfig m_s3DestinationConfig;
    bool m_s3DestinationConfigHasBeenSet = false;

    FileFormat m_fileFormat{FileFormat::NOT_SET};
    bool m_fileFormatHasBeenSet = false;

    bool m_includeMemberAccounts{false};
    bool m_includeMemberAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
