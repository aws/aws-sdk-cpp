/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/ResultConfiguration.h>
#include <aws/athena/model/ManagedQueryResultsConfiguration.h>
#include <aws/athena/model/EngineVersion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/CustomerContentEncryptionConfiguration.h>
#include <aws/athena/model/IdentityCenterConfiguration.h>
#include <aws/athena/model/QueryResultsS3AccessGrantsConfiguration.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The configuration of the workgroup, which includes the location in Amazon S3
   * where query and calculation results are stored, the encryption option, if any,
   * used for query and calculation results, whether the Amazon CloudWatch Metrics
   * are enabled for the workgroup and whether workgroup settings override query
   * settings, and the data usage limits for the amount of data scanned per query or
   * per workgroup. The workgroup settings override is specified in
   * <code>EnforceWorkGroupConfiguration</code> (true/false) in the
   * <code>WorkGroupConfiguration</code>. See
   * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/WorkGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class WorkGroupConfiguration
  {
  public:
    AWS_ATHENA_API WorkGroupConfiguration() = default;
    AWS_ATHENA_API WorkGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API WorkGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query and calculation results are stored and the encryption option, if
     * any, used for query and calculation results. To run the query, you must specify
     * the query results location using one of the ways: either in the workgroup using
     * this setting, or for individual queries (client-side), using
     * <a>ResultConfiguration$OutputLocation</a>. If none of them is set, Athena issues
     * an error that no output location is provided.</p>
     */
    inline const ResultConfiguration& GetResultConfiguration() const { return m_resultConfiguration; }
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
    template<typename ResultConfigurationT = ResultConfiguration>
    void SetResultConfiguration(ResultConfigurationT&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::forward<ResultConfigurationT>(value); }
    template<typename ResultConfigurationT = ResultConfiguration>
    WorkGroupConfiguration& WithResultConfiguration(ResultConfigurationT&& value) { SetResultConfiguration(std::forward<ResultConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration for storing results in Athena owned storage, which
     * includes whether this feature is enabled; whether encryption configuration, if
     * any, is used for encrypting query results. </p>
     */
    inline const ManagedQueryResultsConfiguration& GetManagedQueryResultsConfiguration() const { return m_managedQueryResultsConfiguration; }
    inline bool ManagedQueryResultsConfigurationHasBeenSet() const { return m_managedQueryResultsConfigurationHasBeenSet; }
    template<typename ManagedQueryResultsConfigurationT = ManagedQueryResultsConfiguration>
    void SetManagedQueryResultsConfiguration(ManagedQueryResultsConfigurationT&& value) { m_managedQueryResultsConfigurationHasBeenSet = true; m_managedQueryResultsConfiguration = std::forward<ManagedQueryResultsConfigurationT>(value); }
    template<typename ManagedQueryResultsConfigurationT = ManagedQueryResultsConfiguration>
    WorkGroupConfiguration& WithManagedQueryResultsConfiguration(ManagedQueryResultsConfigurationT&& value) { SetManagedQueryResultsConfiguration(std::forward<ManagedQueryResultsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to "true", the settings for the workgroup override client-side
     * settings. If set to "false", client-side settings are used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool GetEnforceWorkGroupConfiguration() const { return m_enforceWorkGroupConfiguration; }
    inline bool EnforceWorkGroupConfigurationHasBeenSet() const { return m_enforceWorkGroupConfigurationHasBeenSet; }
    inline void SetEnforceWorkGroupConfiguration(bool value) { m_enforceWorkGroupConfigurationHasBeenSet = true; m_enforceWorkGroupConfiguration = value; }
    inline WorkGroupConfiguration& WithEnforceWorkGroupConfiguration(bool value) { SetEnforceWorkGroupConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the Amazon CloudWatch metrics are enabled for the
     * workgroup.</p>
     */
    inline bool GetPublishCloudWatchMetricsEnabled() const { return m_publishCloudWatchMetricsEnabled; }
    inline bool PublishCloudWatchMetricsEnabledHasBeenSet() const { return m_publishCloudWatchMetricsEnabledHasBeenSet; }
    inline void SetPublishCloudWatchMetricsEnabled(bool value) { m_publishCloudWatchMetricsEnabledHasBeenSet = true; m_publishCloudWatchMetricsEnabled = value; }
    inline WorkGroupConfiguration& WithPublishCloudWatchMetricsEnabled(bool value) { SetPublishCloudWatchMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper data usage limit (cutoff) for the amount of bytes a single query in
     * a workgroup is allowed to scan.</p>
     */
    inline long long GetBytesScannedCutoffPerQuery() const { return m_bytesScannedCutoffPerQuery; }
    inline bool BytesScannedCutoffPerQueryHasBeenSet() const { return m_bytesScannedCutoffPerQueryHasBeenSet; }
    inline void SetBytesScannedCutoffPerQuery(long long value) { m_bytesScannedCutoffPerQueryHasBeenSet = true; m_bytesScannedCutoffPerQuery = value; }
    inline WorkGroupConfiguration& WithBytesScannedCutoffPerQuery(long long value) { SetBytesScannedCutoffPerQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, allows members assigned to a workgroup to
     * reference Amazon S3 Requester Pays buckets in queries. If set to
     * <code>false</code>, workgroup members cannot query data from Requester Pays
     * buckets, and queries that retrieve data from Requester Pays buckets cause an
     * error. The default is <code>false</code>. For more information about Requester
     * Pays buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html">Requester
     * Pays Buckets</a> in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p>
     */
    inline bool GetRequesterPaysEnabled() const { return m_requesterPaysEnabled; }
    inline bool RequesterPaysEnabledHasBeenSet() const { return m_requesterPaysEnabledHasBeenSet; }
    inline void SetRequesterPaysEnabled(bool value) { m_requesterPaysEnabledHasBeenSet = true; m_requesterPaysEnabled = value; }
    inline WorkGroupConfiguration& WithRequesterPaysEnabled(bool value) { SetRequesterPaysEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version that all queries running on the workgroup use. Queries on
     * the <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline const EngineVersion& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = EngineVersion>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = EngineVersion>
    WorkGroupConfiguration& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a user defined JSON string that is passed to the notebook
     * engine.</p>
     */
    inline const Aws::String& GetAdditionalConfiguration() const { return m_additionalConfiguration; }
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }
    template<typename AdditionalConfigurationT = Aws::String>
    void SetAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::forward<AdditionalConfigurationT>(value); }
    template<typename AdditionalConfigurationT = Aws::String>
    WorkGroupConfiguration& WithAdditionalConfiguration(AdditionalConfigurationT&& value) { SetAdditionalConfiguration(std::forward<AdditionalConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the execution role used to access user resources for Spark
     * sessions and IAM Identity Center enabled workgroups. This property applies only
     * to Spark enabled workgroups and IAM Identity Center enabled workgroups. The
     * property is required for IAM Identity Center enabled workgroups.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    WorkGroupConfiguration& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key that is used to encrypt the user's data stores in
     * Athena. This setting does not apply to Athena SQL workgroups.</p>
     */
    inline const CustomerContentEncryptionConfiguration& GetCustomerContentEncryptionConfiguration() const { return m_customerContentEncryptionConfiguration; }
    inline bool CustomerContentEncryptionConfigurationHasBeenSet() const { return m_customerContentEncryptionConfigurationHasBeenSet; }
    template<typename CustomerContentEncryptionConfigurationT = CustomerContentEncryptionConfiguration>
    void SetCustomerContentEncryptionConfiguration(CustomerContentEncryptionConfigurationT&& value) { m_customerContentEncryptionConfigurationHasBeenSet = true; m_customerContentEncryptionConfiguration = std::forward<CustomerContentEncryptionConfigurationT>(value); }
    template<typename CustomerContentEncryptionConfigurationT = CustomerContentEncryptionConfiguration>
    WorkGroupConfiguration& WithCustomerContentEncryptionConfiguration(CustomerContentEncryptionConfigurationT&& value) { SetCustomerContentEncryptionConfiguration(std::forward<CustomerContentEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enforces a minimal level of encryption for the workgroup for query and
     * calculation results that are written to Amazon S3. When enabled, workgroup users
     * can set encryption only to the minimum level set by the administrator or higher
     * when they submit queries.</p> <p>The <code>EnforceWorkGroupConfiguration</code>
     * setting takes precedence over the
     * <code>EnableMinimumEncryptionConfiguration</code> flag. This means that if
     * <code>EnforceWorkGroupConfiguration</code> is true, the
     * <code>EnableMinimumEncryptionConfiguration</code> flag is ignored, and the
     * workgroup configuration for encryption is used.</p>
     */
    inline bool GetEnableMinimumEncryptionConfiguration() const { return m_enableMinimumEncryptionConfiguration; }
    inline bool EnableMinimumEncryptionConfigurationHasBeenSet() const { return m_enableMinimumEncryptionConfigurationHasBeenSet; }
    inline void SetEnableMinimumEncryptionConfiguration(bool value) { m_enableMinimumEncryptionConfigurationHasBeenSet = true; m_enableMinimumEncryptionConfiguration = value; }
    inline WorkGroupConfiguration& WithEnableMinimumEncryptionConfiguration(bool value) { SetEnableMinimumEncryptionConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the workgroup is IAM Identity Center supported.</p>
     */
    inline const IdentityCenterConfiguration& GetIdentityCenterConfiguration() const { return m_identityCenterConfiguration; }
    inline bool IdentityCenterConfigurationHasBeenSet() const { return m_identityCenterConfigurationHasBeenSet; }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    void SetIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { m_identityCenterConfigurationHasBeenSet = true; m_identityCenterConfiguration = std::forward<IdentityCenterConfigurationT>(value); }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    WorkGroupConfiguration& WithIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { SetIdentityCenterConfiguration(std::forward<IdentityCenterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 access grants are enabled for query results.</p>
     */
    inline const QueryResultsS3AccessGrantsConfiguration& GetQueryResultsS3AccessGrantsConfiguration() const { return m_queryResultsS3AccessGrantsConfiguration; }
    inline bool QueryResultsS3AccessGrantsConfigurationHasBeenSet() const { return m_queryResultsS3AccessGrantsConfigurationHasBeenSet; }
    template<typename QueryResultsS3AccessGrantsConfigurationT = QueryResultsS3AccessGrantsConfiguration>
    void SetQueryResultsS3AccessGrantsConfiguration(QueryResultsS3AccessGrantsConfigurationT&& value) { m_queryResultsS3AccessGrantsConfigurationHasBeenSet = true; m_queryResultsS3AccessGrantsConfiguration = std::forward<QueryResultsS3AccessGrantsConfigurationT>(value); }
    template<typename QueryResultsS3AccessGrantsConfigurationT = QueryResultsS3AccessGrantsConfiguration>
    WorkGroupConfiguration& WithQueryResultsS3AccessGrantsConfiguration(QueryResultsS3AccessGrantsConfigurationT&& value) { SetQueryResultsS3AccessGrantsConfiguration(std::forward<QueryResultsS3AccessGrantsConfigurationT>(value)); return *this;}
    ///@}
  private:

    ResultConfiguration m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;

    ManagedQueryResultsConfiguration m_managedQueryResultsConfiguration;
    bool m_managedQueryResultsConfigurationHasBeenSet = false;

    bool m_enforceWorkGroupConfiguration{false};
    bool m_enforceWorkGroupConfigurationHasBeenSet = false;

    bool m_publishCloudWatchMetricsEnabled{false};
    bool m_publishCloudWatchMetricsEnabledHasBeenSet = false;

    long long m_bytesScannedCutoffPerQuery{0};
    bool m_bytesScannedCutoffPerQueryHasBeenSet = false;

    bool m_requesterPaysEnabled{false};
    bool m_requesterPaysEnabledHasBeenSet = false;

    EngineVersion m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    CustomerContentEncryptionConfiguration m_customerContentEncryptionConfiguration;
    bool m_customerContentEncryptionConfigurationHasBeenSet = false;

    bool m_enableMinimumEncryptionConfiguration{false};
    bool m_enableMinimumEncryptionConfigurationHasBeenSet = false;

    IdentityCenterConfiguration m_identityCenterConfiguration;
    bool m_identityCenterConfigurationHasBeenSet = false;

    QueryResultsS3AccessGrantsConfiguration m_queryResultsS3AccessGrantsConfiguration;
    bool m_queryResultsS3AccessGrantsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
