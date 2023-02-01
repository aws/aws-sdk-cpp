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
#include <aws/compute-optimizer/model/ExportableAutoScalingGroupField.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class ExportAutoScalingGroupRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExportAutoScalingGroupRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportAutoScalingGroupRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Auto Scaling
     * group recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Auto Scaling
     * group recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Auto Scaling
     * group recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Auto Scaling
     * group recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Auto Scaling
     * group recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Auto Scaling
     * group recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Auto Scaling
     * group recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Auto Scaling
     * group recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts for which to export Auto Scaling
     * group recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to export recommendations.</p> <p>This parameter cannot be specified
     * together with the include member accounts parameter. The parameters are mutually
     * exclusive.</p> <p>Recommendations for member accounts are not included in the
     * export if this parameter, or the include member accounts parameter, is
     * omitted.</p> <p>You can specify multiple account IDs per request.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Auto Scaling group recommendations.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Auto Scaling group recommendations.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Auto Scaling group recommendations.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Auto Scaling group recommendations.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Auto Scaling group recommendations.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Auto Scaling group recommendations.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Auto Scaling group recommendations.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of objects to specify a filter that exports a more specific set of
     * Auto Scaling group recommendations.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const Aws::Vector<ExportableAutoScalingGroupField>& GetFieldsToExport() const{ return m_fieldsToExport; }

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
    inline void SetFieldsToExport(const Aws::Vector<ExportableAutoScalingGroupField>& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport = value; }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetFieldsToExport(Aws::Vector<ExportableAutoScalingGroupField>&& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport = std::move(value); }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& WithFieldsToExport(const Aws::Vector<ExportableAutoScalingGroupField>& value) { SetFieldsToExport(value); return *this;}

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& WithFieldsToExport(Aws::Vector<ExportableAutoScalingGroupField>&& value) { SetFieldsToExport(std::move(value)); return *this;}

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& AddFieldsToExport(const ExportableAutoScalingGroupField& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport.push_back(value); return *this; }

    /**
     * <p>The recommendations data to include in the export file. For more information
     * about the fields that can be exported, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html#exported-files">Exported
     * files</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& AddFieldsToExport(ExportableAutoScalingGroupField&& value) { m_fieldsToExportHasBeenSet = true; m_fieldsToExport.push_back(std::move(value)); return *this; }


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
    inline const S3DestinationConfig& GetS3DestinationConfig() const{ return m_s3DestinationConfig; }

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
    inline bool S3DestinationConfigHasBeenSet() const { return m_s3DestinationConfigHasBeenSet; }

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
    inline void SetS3DestinationConfig(const S3DestinationConfig& value) { m_s3DestinationConfigHasBeenSet = true; m_s3DestinationConfig = value; }

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
    inline void SetS3DestinationConfig(S3DestinationConfig&& value) { m_s3DestinationConfigHasBeenSet = true; m_s3DestinationConfig = std::move(value); }

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
    inline ExportAutoScalingGroupRecommendationsRequest& WithS3DestinationConfig(const S3DestinationConfig& value) { SetS3DestinationConfig(value); return *this;}

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
    inline ExportAutoScalingGroupRecommendationsRequest& WithS3DestinationConfig(S3DestinationConfig&& value) { SetS3DestinationConfig(std::move(value)); return *this;}


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
    inline ExportAutoScalingGroupRecommendationsRequest& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The format of the export file.</p> <p>The only export file format currently
     * supported is <code>Csv</code>.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


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
    inline ExportAutoScalingGroupRecommendationsRequest& WithIncludeMemberAccounts(bool value) { SetIncludeMemberAccounts(value); return *this;}


    /**
     * <p>An object to specify the preferences for the Auto Scaling group
     * recommendations to export.</p>
     */
    inline const RecommendationPreferences& GetRecommendationPreferences() const{ return m_recommendationPreferences; }

    /**
     * <p>An object to specify the preferences for the Auto Scaling group
     * recommendations to export.</p>
     */
    inline bool RecommendationPreferencesHasBeenSet() const { return m_recommendationPreferencesHasBeenSet; }

    /**
     * <p>An object to specify the preferences for the Auto Scaling group
     * recommendations to export.</p>
     */
    inline void SetRecommendationPreferences(const RecommendationPreferences& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = value; }

    /**
     * <p>An object to specify the preferences for the Auto Scaling group
     * recommendations to export.</p>
     */
    inline void SetRecommendationPreferences(RecommendationPreferences&& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = std::move(value); }

    /**
     * <p>An object to specify the preferences for the Auto Scaling group
     * recommendations to export.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& WithRecommendationPreferences(const RecommendationPreferences& value) { SetRecommendationPreferences(value); return *this;}

    /**
     * <p>An object to specify the preferences for the Auto Scaling group
     * recommendations to export.</p>
     */
    inline ExportAutoScalingGroupRecommendationsRequest& WithRecommendationPreferences(RecommendationPreferences&& value) { SetRecommendationPreferences(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<ExportableAutoScalingGroupField> m_fieldsToExport;
    bool m_fieldsToExportHasBeenSet = false;

    S3DestinationConfig m_s3DestinationConfig;
    bool m_s3DestinationConfigHasBeenSet = false;

    FileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;

    bool m_includeMemberAccounts;
    bool m_includeMemberAccountsHasBeenSet = false;

    RecommendationPreferences m_recommendationPreferences;
    bool m_recommendationPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
