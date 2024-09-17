/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/ResultConfigurationUpdates.h>
#include <aws/athena/model/EngineVersion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/CustomerContentEncryptionConfiguration.h>
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
   * <p>The configuration information that will be updated for this workgroup, which
   * includes the location in Amazon S3 where query and calculation results are
   * stored, the encryption option, if any, used for query results, whether the
   * Amazon CloudWatch Metrics are enabled for the workgroup, whether the workgroup
   * settings override the client-side settings, and the data usage limit for the
   * amount of bytes scanned per query, if it is specified.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/WorkGroupConfigurationUpdates">AWS
   * API Reference</a></p>
   */
  class WorkGroupConfigurationUpdates
  {
  public:
    AWS_ATHENA_API WorkGroupConfigurationUpdates();
    AWS_ATHENA_API WorkGroupConfigurationUpdates(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API WorkGroupConfigurationUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If set to "true", the settings for the workgroup override client-side
     * settings. If set to "false" client-side settings are used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool GetEnforceWorkGroupConfiguration() const{ return m_enforceWorkGroupConfiguration; }
    inline bool EnforceWorkGroupConfigurationHasBeenSet() const { return m_enforceWorkGroupConfigurationHasBeenSet; }
    inline void SetEnforceWorkGroupConfiguration(bool value) { m_enforceWorkGroupConfigurationHasBeenSet = true; m_enforceWorkGroupConfiguration = value; }
    inline WorkGroupConfigurationUpdates& WithEnforceWorkGroupConfiguration(bool value) { SetEnforceWorkGroupConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result configuration information about the queries in this workgroup that
     * will be updated. Includes the updated results location and an updated option for
     * encrypting query results.</p>
     */
    inline const ResultConfigurationUpdates& GetResultConfigurationUpdates() const{ return m_resultConfigurationUpdates; }
    inline bool ResultConfigurationUpdatesHasBeenSet() const { return m_resultConfigurationUpdatesHasBeenSet; }
    inline void SetResultConfigurationUpdates(const ResultConfigurationUpdates& value) { m_resultConfigurationUpdatesHasBeenSet = true; m_resultConfigurationUpdates = value; }
    inline void SetResultConfigurationUpdates(ResultConfigurationUpdates&& value) { m_resultConfigurationUpdatesHasBeenSet = true; m_resultConfigurationUpdates = std::move(value); }
    inline WorkGroupConfigurationUpdates& WithResultConfigurationUpdates(const ResultConfigurationUpdates& value) { SetResultConfigurationUpdates(value); return *this;}
    inline WorkGroupConfigurationUpdates& WithResultConfigurationUpdates(ResultConfigurationUpdates&& value) { SetResultConfigurationUpdates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this workgroup enables publishing metrics to Amazon
     * CloudWatch.</p>
     */
    inline bool GetPublishCloudWatchMetricsEnabled() const{ return m_publishCloudWatchMetricsEnabled; }
    inline bool PublishCloudWatchMetricsEnabledHasBeenSet() const { return m_publishCloudWatchMetricsEnabledHasBeenSet; }
    inline void SetPublishCloudWatchMetricsEnabled(bool value) { m_publishCloudWatchMetricsEnabledHasBeenSet = true; m_publishCloudWatchMetricsEnabled = value; }
    inline WorkGroupConfigurationUpdates& WithPublishCloudWatchMetricsEnabled(bool value) { SetPublishCloudWatchMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit (cutoff) for the amount of bytes a single query in a
     * workgroup is allowed to scan.</p>
     */
    inline long long GetBytesScannedCutoffPerQuery() const{ return m_bytesScannedCutoffPerQuery; }
    inline bool BytesScannedCutoffPerQueryHasBeenSet() const { return m_bytesScannedCutoffPerQueryHasBeenSet; }
    inline void SetBytesScannedCutoffPerQuery(long long value) { m_bytesScannedCutoffPerQueryHasBeenSet = true; m_bytesScannedCutoffPerQuery = value; }
    inline WorkGroupConfigurationUpdates& WithBytesScannedCutoffPerQuery(long long value) { SetBytesScannedCutoffPerQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the data usage control limit per query is removed.
     * <a>WorkGroupConfiguration$BytesScannedCutoffPerQuery</a> </p>
     */
    inline bool GetRemoveBytesScannedCutoffPerQuery() const{ return m_removeBytesScannedCutoffPerQuery; }
    inline bool RemoveBytesScannedCutoffPerQueryHasBeenSet() const { return m_removeBytesScannedCutoffPerQueryHasBeenSet; }
    inline void SetRemoveBytesScannedCutoffPerQuery(bool value) { m_removeBytesScannedCutoffPerQueryHasBeenSet = true; m_removeBytesScannedCutoffPerQuery = value; }
    inline WorkGroupConfigurationUpdates& WithRemoveBytesScannedCutoffPerQuery(bool value) { SetRemoveBytesScannedCutoffPerQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, allows members assigned to a workgroup to
     * specify Amazon S3 Requester Pays buckets in queries. If set to
     * <code>false</code>, workgroup members cannot query data from Requester Pays
     * buckets, and queries that retrieve data from Requester Pays buckets cause an
     * error. The default is <code>false</code>. For more information about Requester
     * Pays buckets, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html">Requester
     * Pays Buckets</a> in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p>
     */
    inline bool GetRequesterPaysEnabled() const{ return m_requesterPaysEnabled; }
    inline bool RequesterPaysEnabledHasBeenSet() const { return m_requesterPaysEnabledHasBeenSet; }
    inline void SetRequesterPaysEnabled(bool value) { m_requesterPaysEnabledHasBeenSet = true; m_requesterPaysEnabled = value; }
    inline WorkGroupConfigurationUpdates& WithRequesterPaysEnabled(bool value) { SetRequesterPaysEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version requested when a workgroup is updated. After the update,
     * all queries on the workgroup run on the requested engine version. If no value
     * was previously set, the default is Auto. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline const EngineVersion& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const EngineVersion& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(EngineVersion&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline WorkGroupConfigurationUpdates& WithEngineVersion(const EngineVersion& value) { SetEngineVersion(value); return *this;}
    inline WorkGroupConfigurationUpdates& WithEngineVersion(EngineVersion&& value) { SetEngineVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Removes content encryption configuration from an Apache Spark-enabled Athena
     * workgroup.</p>
     */
    inline bool GetRemoveCustomerContentEncryptionConfiguration() const{ return m_removeCustomerContentEncryptionConfiguration; }
    inline bool RemoveCustomerContentEncryptionConfigurationHasBeenSet() const { return m_removeCustomerContentEncryptionConfigurationHasBeenSet; }
    inline void SetRemoveCustomerContentEncryptionConfiguration(bool value) { m_removeCustomerContentEncryptionConfigurationHasBeenSet = true; m_removeCustomerContentEncryptionConfiguration = value; }
    inline WorkGroupConfigurationUpdates& WithRemoveCustomerContentEncryptionConfiguration(bool value) { SetRemoveCustomerContentEncryptionConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a user defined string in JSON format for a Spark-enabled
     * workgroup.</p>
     */
    inline const Aws::String& GetAdditionalConfiguration() const{ return m_additionalConfiguration; }
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }
    inline void SetAdditionalConfiguration(const Aws::String& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = value; }
    inline void SetAdditionalConfiguration(Aws::String&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::move(value); }
    inline void SetAdditionalConfiguration(const char* value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.assign(value); }
    inline WorkGroupConfigurationUpdates& WithAdditionalConfiguration(const Aws::String& value) { SetAdditionalConfiguration(value); return *this;}
    inline WorkGroupConfigurationUpdates& WithAdditionalConfiguration(Aws::String&& value) { SetAdditionalConfiguration(std::move(value)); return *this;}
    inline WorkGroupConfigurationUpdates& WithAdditionalConfiguration(const char* value) { SetAdditionalConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the execution role used to access user resources for Spark
     * sessions and Identity Center enabled workgroups. This property applies only to
     * Spark enabled workgroups and Identity Center enabled workgroups.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline WorkGroupConfigurationUpdates& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline WorkGroupConfigurationUpdates& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline WorkGroupConfigurationUpdates& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    
    inline const CustomerContentEncryptionConfiguration& GetCustomerContentEncryptionConfiguration() const{ return m_customerContentEncryptionConfiguration; }
    inline bool CustomerContentEncryptionConfigurationHasBeenSet() const { return m_customerContentEncryptionConfigurationHasBeenSet; }
    inline void SetCustomerContentEncryptionConfiguration(const CustomerContentEncryptionConfiguration& value) { m_customerContentEncryptionConfigurationHasBeenSet = true; m_customerContentEncryptionConfiguration = value; }
    inline void SetCustomerContentEncryptionConfiguration(CustomerContentEncryptionConfiguration&& value) { m_customerContentEncryptionConfigurationHasBeenSet = true; m_customerContentEncryptionConfiguration = std::move(value); }
    inline WorkGroupConfigurationUpdates& WithCustomerContentEncryptionConfiguration(const CustomerContentEncryptionConfiguration& value) { SetCustomerContentEncryptionConfiguration(value); return *this;}
    inline WorkGroupConfigurationUpdates& WithCustomerContentEncryptionConfiguration(CustomerContentEncryptionConfiguration&& value) { SetCustomerContentEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enforces a minimal level of encryption for the workgroup for query and
     * calculation results that are written to Amazon S3. When enabled, workgroup users
     * can set encryption only to the minimum level set by the administrator or higher
     * when they submit queries. This setting does not apply to Spark-enabled
     * workgroups.</p> <p>The <code>EnforceWorkGroupConfiguration</code> setting takes
     * precedence over the <code>EnableMinimumEncryptionConfiguration</code> flag. This
     * means that if <code>EnforceWorkGroupConfiguration</code> is true, the
     * <code>EnableMinimumEncryptionConfiguration</code> flag is ignored, and the
     * workgroup configuration for encryption is used.</p>
     */
    inline bool GetEnableMinimumEncryptionConfiguration() const{ return m_enableMinimumEncryptionConfiguration; }
    inline bool EnableMinimumEncryptionConfigurationHasBeenSet() const { return m_enableMinimumEncryptionConfigurationHasBeenSet; }
    inline void SetEnableMinimumEncryptionConfiguration(bool value) { m_enableMinimumEncryptionConfigurationHasBeenSet = true; m_enableMinimumEncryptionConfiguration = value; }
    inline WorkGroupConfigurationUpdates& WithEnableMinimumEncryptionConfiguration(bool value) { SetEnableMinimumEncryptionConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 access grants are enabled for query results.</p>
     */
    inline const QueryResultsS3AccessGrantsConfiguration& GetQueryResultsS3AccessGrantsConfiguration() const{ return m_queryResultsS3AccessGrantsConfiguration; }
    inline bool QueryResultsS3AccessGrantsConfigurationHasBeenSet() const { return m_queryResultsS3AccessGrantsConfigurationHasBeenSet; }
    inline void SetQueryResultsS3AccessGrantsConfiguration(const QueryResultsS3AccessGrantsConfiguration& value) { m_queryResultsS3AccessGrantsConfigurationHasBeenSet = true; m_queryResultsS3AccessGrantsConfiguration = value; }
    inline void SetQueryResultsS3AccessGrantsConfiguration(QueryResultsS3AccessGrantsConfiguration&& value) { m_queryResultsS3AccessGrantsConfigurationHasBeenSet = true; m_queryResultsS3AccessGrantsConfiguration = std::move(value); }
    inline WorkGroupConfigurationUpdates& WithQueryResultsS3AccessGrantsConfiguration(const QueryResultsS3AccessGrantsConfiguration& value) { SetQueryResultsS3AccessGrantsConfiguration(value); return *this;}
    inline WorkGroupConfigurationUpdates& WithQueryResultsS3AccessGrantsConfiguration(QueryResultsS3AccessGrantsConfiguration&& value) { SetQueryResultsS3AccessGrantsConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    bool m_enforceWorkGroupConfiguration;
    bool m_enforceWorkGroupConfigurationHasBeenSet = false;

    ResultConfigurationUpdates m_resultConfigurationUpdates;
    bool m_resultConfigurationUpdatesHasBeenSet = false;

    bool m_publishCloudWatchMetricsEnabled;
    bool m_publishCloudWatchMetricsEnabledHasBeenSet = false;

    long long m_bytesScannedCutoffPerQuery;
    bool m_bytesScannedCutoffPerQueryHasBeenSet = false;

    bool m_removeBytesScannedCutoffPerQuery;
    bool m_removeBytesScannedCutoffPerQueryHasBeenSet = false;

    bool m_requesterPaysEnabled;
    bool m_requesterPaysEnabledHasBeenSet = false;

    EngineVersion m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_removeCustomerContentEncryptionConfiguration;
    bool m_removeCustomerContentEncryptionConfigurationHasBeenSet = false;

    Aws::String m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    CustomerContentEncryptionConfiguration m_customerContentEncryptionConfiguration;
    bool m_customerContentEncryptionConfigurationHasBeenSet = false;

    bool m_enableMinimumEncryptionConfiguration;
    bool m_enableMinimumEncryptionConfigurationHasBeenSet = false;

    QueryResultsS3AccessGrantsConfiguration m_queryResultsS3AccessGrantsConfiguration;
    bool m_queryResultsS3AccessGrantsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
