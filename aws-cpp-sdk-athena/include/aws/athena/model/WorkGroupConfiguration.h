/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/ResultConfiguration.h>
#include <aws/athena/model/EngineVersion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/CustomerContentEncryptionConfiguration.h>
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
   * where query results are stored, the encryption option, if any, used for query
   * results, whether the Amazon CloudWatch Metrics are enabled for the workgroup and
   * whether workgroup settings override query settings, and the data usage limits
   * for the amount of data scanned per query or per workgroup. The workgroup
   * settings override is specified in <code>EnforceWorkGroupConfiguration</code>
   * (true/false) in the <code>WorkGroupConfiguration</code>. See
   * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/WorkGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class WorkGroupConfiguration
  {
  public:
    AWS_ATHENA_API WorkGroupConfiguration();
    AWS_ATHENA_API WorkGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API WorkGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results. To run the query, you must specify the query results location using one
     * of the ways: either in the workgroup using this setting, or for individual
     * queries (client-side), using <a>ResultConfiguration$OutputLocation</a>. If none
     * of them is set, Athena issues an error that no output location is provided. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Query
     * Results</a>.</p>
     */
    inline const ResultConfiguration& GetResultConfiguration() const{ return m_resultConfiguration; }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results. To run the query, you must specify the query results location using one
     * of the ways: either in the workgroup using this setting, or for individual
     * queries (client-side), using <a>ResultConfiguration$OutputLocation</a>. If none
     * of them is set, Athena issues an error that no output location is provided. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Query
     * Results</a>.</p>
     */
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results. To run the query, you must specify the query results location using one
     * of the ways: either in the workgroup using this setting, or for individual
     * queries (client-side), using <a>ResultConfiguration$OutputLocation</a>. If none
     * of them is set, Athena issues an error that no output location is provided. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Query
     * Results</a>.</p>
     */
    inline void SetResultConfiguration(const ResultConfiguration& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results. To run the query, you must specify the query results location using one
     * of the ways: either in the workgroup using this setting, or for individual
     * queries (client-side), using <a>ResultConfiguration$OutputLocation</a>. If none
     * of them is set, Athena issues an error that no output location is provided. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Query
     * Results</a>.</p>
     */
    inline void SetResultConfiguration(ResultConfiguration&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results. To run the query, you must specify the query results location using one
     * of the ways: either in the workgroup using this setting, or for individual
     * queries (client-side), using <a>ResultConfiguration$OutputLocation</a>. If none
     * of them is set, Athena issues an error that no output location is provided. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Query
     * Results</a>.</p>
     */
    inline WorkGroupConfiguration& WithResultConfiguration(const ResultConfiguration& value) { SetResultConfiguration(value); return *this;}

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results. To run the query, you must specify the query results location using one
     * of the ways: either in the workgroup using this setting, or for individual
     * queries (client-side), using <a>ResultConfiguration$OutputLocation</a>. If none
     * of them is set, Athena issues an error that no output location is provided. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Query
     * Results</a>.</p>
     */
    inline WorkGroupConfiguration& WithResultConfiguration(ResultConfiguration&& value) { SetResultConfiguration(std::move(value)); return *this;}


    /**
     * <p>If set to "true", the settings for the workgroup override client-side
     * settings. If set to "false", client-side settings are used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool GetEnforceWorkGroupConfiguration() const{ return m_enforceWorkGroupConfiguration; }

    /**
     * <p>If set to "true", the settings for the workgroup override client-side
     * settings. If set to "false", client-side settings are used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool EnforceWorkGroupConfigurationHasBeenSet() const { return m_enforceWorkGroupConfigurationHasBeenSet; }

    /**
     * <p>If set to "true", the settings for the workgroup override client-side
     * settings. If set to "false", client-side settings are used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline void SetEnforceWorkGroupConfiguration(bool value) { m_enforceWorkGroupConfigurationHasBeenSet = true; m_enforceWorkGroupConfiguration = value; }

    /**
     * <p>If set to "true", the settings for the workgroup override client-side
     * settings. If set to "false", client-side settings are used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline WorkGroupConfiguration& WithEnforceWorkGroupConfiguration(bool value) { SetEnforceWorkGroupConfiguration(value); return *this;}


    /**
     * <p>Indicates that the Amazon CloudWatch metrics are enabled for the
     * workgroup.</p>
     */
    inline bool GetPublishCloudWatchMetricsEnabled() const{ return m_publishCloudWatchMetricsEnabled; }

    /**
     * <p>Indicates that the Amazon CloudWatch metrics are enabled for the
     * workgroup.</p>
     */
    inline bool PublishCloudWatchMetricsEnabledHasBeenSet() const { return m_publishCloudWatchMetricsEnabledHasBeenSet; }

    /**
     * <p>Indicates that the Amazon CloudWatch metrics are enabled for the
     * workgroup.</p>
     */
    inline void SetPublishCloudWatchMetricsEnabled(bool value) { m_publishCloudWatchMetricsEnabledHasBeenSet = true; m_publishCloudWatchMetricsEnabled = value; }

    /**
     * <p>Indicates that the Amazon CloudWatch metrics are enabled for the
     * workgroup.</p>
     */
    inline WorkGroupConfiguration& WithPublishCloudWatchMetricsEnabled(bool value) { SetPublishCloudWatchMetricsEnabled(value); return *this;}


    /**
     * <p>The upper data usage limit (cutoff) for the amount of bytes a single query in
     * a workgroup is allowed to scan.</p>
     */
    inline long long GetBytesScannedCutoffPerQuery() const{ return m_bytesScannedCutoffPerQuery; }

    /**
     * <p>The upper data usage limit (cutoff) for the amount of bytes a single query in
     * a workgroup is allowed to scan.</p>
     */
    inline bool BytesScannedCutoffPerQueryHasBeenSet() const { return m_bytesScannedCutoffPerQueryHasBeenSet; }

    /**
     * <p>The upper data usage limit (cutoff) for the amount of bytes a single query in
     * a workgroup is allowed to scan.</p>
     */
    inline void SetBytesScannedCutoffPerQuery(long long value) { m_bytesScannedCutoffPerQueryHasBeenSet = true; m_bytesScannedCutoffPerQuery = value; }

    /**
     * <p>The upper data usage limit (cutoff) for the amount of bytes a single query in
     * a workgroup is allowed to scan.</p>
     */
    inline WorkGroupConfiguration& WithBytesScannedCutoffPerQuery(long long value) { SetBytesScannedCutoffPerQuery(value); return *this;}


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
    inline bool GetRequesterPaysEnabled() const{ return m_requesterPaysEnabled; }

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
    inline bool RequesterPaysEnabledHasBeenSet() const { return m_requesterPaysEnabledHasBeenSet; }

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
    inline void SetRequesterPaysEnabled(bool value) { m_requesterPaysEnabledHasBeenSet = true; m_requesterPaysEnabled = value; }

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
    inline WorkGroupConfiguration& WithRequesterPaysEnabled(bool value) { SetRequesterPaysEnabled(value); return *this;}


    /**
     * <p>The engine version that all queries running on the workgroup use. Queries on
     * the <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline const EngineVersion& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version that all queries running on the workgroup use. Queries on
     * the <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version that all queries running on the workgroup use. Queries on
     * the <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline void SetEngineVersion(const EngineVersion& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version that all queries running on the workgroup use. Queries on
     * the <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline void SetEngineVersion(EngineVersion&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version that all queries running on the workgroup use. Queries on
     * the <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline WorkGroupConfiguration& WithEngineVersion(const EngineVersion& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version that all queries running on the workgroup use. Queries on
     * the <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline WorkGroupConfiguration& WithEngineVersion(EngineVersion&& value) { SetEngineVersion(std::move(value)); return *this;}


    /**
     * <p>Specifies a user defined JSON string that is passed to the notebook
     * engine.</p>
     */
    inline const Aws::String& GetAdditionalConfiguration() const{ return m_additionalConfiguration; }

    /**
     * <p>Specifies a user defined JSON string that is passed to the notebook
     * engine.</p>
     */
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }

    /**
     * <p>Specifies a user defined JSON string that is passed to the notebook
     * engine.</p>
     */
    inline void SetAdditionalConfiguration(const Aws::String& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = value; }

    /**
     * <p>Specifies a user defined JSON string that is passed to the notebook
     * engine.</p>
     */
    inline void SetAdditionalConfiguration(Aws::String&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::move(value); }

    /**
     * <p>Specifies a user defined JSON string that is passed to the notebook
     * engine.</p>
     */
    inline void SetAdditionalConfiguration(const char* value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.assign(value); }

    /**
     * <p>Specifies a user defined JSON string that is passed to the notebook
     * engine.</p>
     */
    inline WorkGroupConfiguration& WithAdditionalConfiguration(const Aws::String& value) { SetAdditionalConfiguration(value); return *this;}

    /**
     * <p>Specifies a user defined JSON string that is passed to the notebook
     * engine.</p>
     */
    inline WorkGroupConfiguration& WithAdditionalConfiguration(Aws::String&& value) { SetAdditionalConfiguration(std::move(value)); return *this;}

    /**
     * <p>Specifies a user defined JSON string that is passed to the notebook
     * engine.</p>
     */
    inline WorkGroupConfiguration& WithAdditionalConfiguration(const char* value) { SetAdditionalConfiguration(value); return *this;}


    /**
     * <p>Role used in a notebook session for accessing the user's resources.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>Role used in a notebook session for accessing the user's resources.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>Role used in a notebook session for accessing the user's resources.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>Role used in a notebook session for accessing the user's resources.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>Role used in a notebook session for accessing the user's resources.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>Role used in a notebook session for accessing the user's resources.</p>
     */
    inline WorkGroupConfiguration& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>Role used in a notebook session for accessing the user's resources.</p>
     */
    inline WorkGroupConfiguration& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>Role used in a notebook session for accessing the user's resources.</p>
     */
    inline WorkGroupConfiguration& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


    /**
     * <p>Specifies the KMS key that is used to encrypt the user's data stores in
     * Athena.</p>
     */
    inline const CustomerContentEncryptionConfiguration& GetCustomerContentEncryptionConfiguration() const{ return m_customerContentEncryptionConfiguration; }

    /**
     * <p>Specifies the KMS key that is used to encrypt the user's data stores in
     * Athena.</p>
     */
    inline bool CustomerContentEncryptionConfigurationHasBeenSet() const { return m_customerContentEncryptionConfigurationHasBeenSet; }

    /**
     * <p>Specifies the KMS key that is used to encrypt the user's data stores in
     * Athena.</p>
     */
    inline void SetCustomerContentEncryptionConfiguration(const CustomerContentEncryptionConfiguration& value) { m_customerContentEncryptionConfigurationHasBeenSet = true; m_customerContentEncryptionConfiguration = value; }

    /**
     * <p>Specifies the KMS key that is used to encrypt the user's data stores in
     * Athena.</p>
     */
    inline void SetCustomerContentEncryptionConfiguration(CustomerContentEncryptionConfiguration&& value) { m_customerContentEncryptionConfigurationHasBeenSet = true; m_customerContentEncryptionConfiguration = std::move(value); }

    /**
     * <p>Specifies the KMS key that is used to encrypt the user's data stores in
     * Athena.</p>
     */
    inline WorkGroupConfiguration& WithCustomerContentEncryptionConfiguration(const CustomerContentEncryptionConfiguration& value) { SetCustomerContentEncryptionConfiguration(value); return *this;}

    /**
     * <p>Specifies the KMS key that is used to encrypt the user's data stores in
     * Athena.</p>
     */
    inline WorkGroupConfiguration& WithCustomerContentEncryptionConfiguration(CustomerContentEncryptionConfiguration&& value) { SetCustomerContentEncryptionConfiguration(std::move(value)); return *this;}

  private:

    ResultConfiguration m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;

    bool m_enforceWorkGroupConfiguration;
    bool m_enforceWorkGroupConfigurationHasBeenSet = false;

    bool m_publishCloudWatchMetricsEnabled;
    bool m_publishCloudWatchMetricsEnabledHasBeenSet = false;

    long long m_bytesScannedCutoffPerQuery;
    bool m_bytesScannedCutoffPerQueryHasBeenSet = false;

    bool m_requesterPaysEnabled;
    bool m_requesterPaysEnabledHasBeenSet = false;

    EngineVersion m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    CustomerContentEncryptionConfiguration m_customerContentEncryptionConfiguration;
    bool m_customerContentEncryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
