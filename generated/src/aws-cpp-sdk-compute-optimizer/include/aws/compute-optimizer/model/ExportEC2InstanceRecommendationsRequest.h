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
#include <aws/compute-optimizer/model/Filter.h>
#include <aws/compute-optimizer/model/ExportableInstanceField.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class ExportEC2InstanceRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExportEC2InstanceRecommendationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportEC2InstanceRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export instance
     * recommendations.</p> <p>If your account is the management account of an
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
    ExportEC2InstanceRecommendationsRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    ExportEC2InstanceRecommendationsRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * instance recommendations.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ExportEC2InstanceRecommendationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ExportEC2InstanceRecommendationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const Aws::Vector<ExportableInstanceField>& GetFieldsToExport() const { return m_fieldsToExport; }
    inline bool FieldsToExportHasBeenSet() const { return m_fieldsToExportHasBeenSet; }
    template<typename FieldsToExportT = Aws::Vector<ExportableInstanceField>>
    void SetFieldsToExport(FieldsToExportT&& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport = std::forward<FieldsToExportT>(value); }
    template<typename FieldsToExportT = Aws::Vector<ExportableInstanceField>>
    ExportEC2InstanceRecommendationsRequest& WithFieldsToExport(FieldsToExportT&& value) { SetFieldsToExport(std::forward<FieldsToExportT>(value)); return *this;}
    inline ExportEC2InstanceRecommendationsRequest& AddFieldsToExport(ExportableInstanceField value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object to specify the destination Amazon Simple Storage Service (Amazon
     * S3) bucket name and key prefix for the export job.</p> <p>You must create the
     * destination Amazon S3 bucket for your recommendations export before you create
     * the export job. Compute Optimizer does not create the S3 bucket for you. After
     * you create the S3 bucket, ensure that it has the required permissions policy to
     * allow Compute Optimizer to write the export file to it. If you plan to specify
     * an object prefix when you create the export job, you must include the object
     * prefix in the policy that you add to the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/create-s3-bucket-policy-for-compute-optimizer.html">Amazon
     * S3 Bucket Policy for Compute Optimizer</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline const S3DestinationConfig& GetS3DestinationConfig() const { return m_s3DestinationConfig; }
    inline bool S3DestinationConfigHasBeenSet() const { return m_s3DestinationConfigHasBeenSet; }
    template<typename S3DestinationConfigT = S3DestinationConfig>
    void SetS3DestinationConfig(S3DestinationConfigT&& value) { m_s3DestinationConfigHasBeenSet = true; m_s3DestinationConfig = std::forward<S3DestinationConfigT>(value); }
    template<typename S3DestinationConfigT = S3DestinationConfig>
    ExportEC2InstanceRecommendationsRequest& WithS3DestinationConfig(S3DestinationConfigT&& value) { SetS3DestinationConfig(std::forward<S3DestinationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the export file.</p> <p>The only export file format currently
     * supported is <code>Csv</code>.</p>
     */
    inline FileFormat GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(FileFormat value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline ExportEC2InstanceRecommendationsRequest& WithFileFormat(FileFormat value) { SetFileFormat(value); return *this;}
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
     * omitted.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the account IDs parameter, is omitted.</p>
     */
    inline bool GetIncludeMemberAccounts() const { return m_includeMemberAccounts; }
    inline bool IncludeMemberAccountsHasBeenSet() const { return m_includeMemberAccountsHasBeenSet; }
    inline void SetIncludeMemberAccounts(bool value) { m_includeMemberAccountsHasBeenSet = true; m_includeMemberAccounts = value; }
    inline ExportEC2InstanceRecommendationsRequest& WithIncludeMemberAccounts(bool value) { SetIncludeMemberAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to specify the preferences for the Amazon EC2 instance
     * recommendations to export.</p>
     */
    inline const RecommendationPreferences& GetRecommendationPreferences() const { return m_recommendationPreferences; }
    inline bool RecommendationPreferencesHasBeenSet() const { return m_recommendationPreferencesHasBeenSet; }
    template<typename RecommendationPreferencesT = RecommendationPreferences>
    void SetRecommendationPreferences(RecommendationPreferencesT&& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = std::forward<RecommendationPreferencesT>(value); }
    template<typename RecommendationPreferencesT = RecommendationPreferences>
    ExportEC2InstanceRecommendationsRequest& WithRecommendationPreferences(RecommendationPreferencesT&& value) { SetRecommendationPreferences(std::forward<RecommendationPreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<ExportableInstanceField> m_fieldsToExport;
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
