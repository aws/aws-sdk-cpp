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
#include <aws/compute-optimizer/model/RecommendationPreferences.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/RDSDBRecommendationFilter.h>
#include <aws/compute-optimizer/model/ExportableRDSDBField.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class ExportRDSDatabaseRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExportRDSDatabaseRecommendationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportRDSDatabaseRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The Amazon Web Services account IDs for the export Amazon Aurora and RDS
     * database recommendations. </p> <p>If your account is the management account or
     * the delegated administrator of an organization, use this parameter to specify
     * the member account you want to export recommendations to.</p> <p>This parameter
     * can't be specified together with the include member accounts parameter. The
     * parameters are mutually exclusive.</p> <p>If this parameter or the include
     * member accounts parameter is omitted, the recommendations for member accounts
     * aren't included in the export.</p> <p>You can specify multiple account IDs per
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    ExportRDSDatabaseRecommendationsRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    ExportRDSDatabaseRecommendationsRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects to specify a filter that exports a more specific set of
     * Amazon Aurora and RDS recommendations. </p>
     */
    inline const Aws::Vector<RDSDBRecommendationFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<RDSDBRecommendationFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<RDSDBRecommendationFilter>>
    ExportRDSDatabaseRecommendationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = RDSDBRecommendationFilter>
    ExportRDSDatabaseRecommendationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const Aws::Vector<ExportableRDSDBField>& GetFieldsToExport() const { return m_fieldsToExport; }
    inline bool FieldsToExportHasBeenSet() const { return m_fieldsToExportHasBeenSet; }
    template<typename FieldsToExportT = Aws::Vector<ExportableRDSDBField>>
    void SetFieldsToExport(FieldsToExportT&& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport = std::forward<FieldsToExportT>(value); }
    template<typename FieldsToExportT = Aws::Vector<ExportableRDSDBField>>
    ExportRDSDatabaseRecommendationsRequest& WithFieldsToExport(FieldsToExportT&& value) { SetFieldsToExport(std::forward<FieldsToExportT>(value)); return *this;}
    inline ExportRDSDatabaseRecommendationsRequest& AddFieldsToExport(ExportableRDSDBField value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const S3DestinationConfig& GetS3DestinationConfig() const { return m_s3DestinationConfig; }
    inline bool S3DestinationConfigHasBeenSet() const { return m_s3DestinationConfigHasBeenSet; }
    template<typename S3DestinationConfigT = S3DestinationConfig>
    void SetS3DestinationConfig(S3DestinationConfigT&& value) { m_s3DestinationConfigHasBeenSet = true; m_s3DestinationConfig = std::forward<S3DestinationConfigT>(value); }
    template<typename S3DestinationConfigT = S3DestinationConfig>
    ExportRDSDatabaseRecommendationsRequest& WithS3DestinationConfig(S3DestinationConfigT&& value) { SetS3DestinationConfig(std::forward<S3DestinationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format of the export file. </p> <p>The CSV file is the only export file
     * format currently supported.</p>
     */
    inline FileFormat GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(FileFormat value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline ExportRDSDatabaseRecommendationsRequest& WithFileFormat(FileFormat value) { SetFileFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your account is the management account or the delegated administrator of
     * an organization, this parameter indicates whether to include recommendations for
     * resources in all member accounts of the organization.</p> <p>The member accounts
     * must also be opted in to Compute Optimizer, and trusted access for Compute
     * Optimizer must be enabled in the organization account. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/security-iam.html#trusted-service-access">Compute
     * Optimizer and Amazon Web Services Organizations trusted access</a> in the
     * <i>Compute Optimizer User Guide</i>.</p> <p>If this parameter is omitted,
     * recommendations for member accounts of the organization aren't included in the
     * export file.</p> <p>If this parameter or the account ID parameter is omitted,
     * recommendations for member accounts aren't included in the export.</p>
     */
    inline bool GetIncludeMemberAccounts() const { return m_includeMemberAccounts; }
    inline bool IncludeMemberAccountsHasBeenSet() const { return m_includeMemberAccountsHasBeenSet; }
    inline void SetIncludeMemberAccounts(bool value) { m_includeMemberAccountsHasBeenSet = true; m_includeMemberAccounts = value; }
    inline ExportRDSDatabaseRecommendationsRequest& WithIncludeMemberAccounts(bool value) { SetIncludeMemberAccounts(value); return *this;}
    ///@}

    ///@{
    
    inline const RecommendationPreferences& GetRecommendationPreferences() const { return m_recommendationPreferences; }
    inline bool RecommendationPreferencesHasBeenSet() const { return m_recommendationPreferencesHasBeenSet; }
    template<typename RecommendationPreferencesT = RecommendationPreferences>
    void SetRecommendationPreferences(RecommendationPreferencesT&& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = std::forward<RecommendationPreferencesT>(value); }
    template<typename RecommendationPreferencesT = RecommendationPreferences>
    ExportRDSDatabaseRecommendationsRequest& WithRecommendationPreferences(RecommendationPreferencesT&& value) { SetRecommendationPreferences(std::forward<RecommendationPreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<RDSDBRecommendationFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<ExportableRDSDBField> m_fieldsToExport;
    bool m_fieldsToExportHasBeenSet = false;

    S3DestinationConfig m_s3DestinationConfig;
    bool m_s3DestinationConfigHasBeenSet = false;

    FileFormat m_fileFormat{FileFormat::NOT_SET};
    bool m_fileFormatHasBeenSet = false;

    bool m_includeMemberAccounts{false};
    bool m_includeMemberAccountsHasBeenSet = false;

    RecommendationPreferences m_recommendationPreferences;
    bool m_recommendationPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
