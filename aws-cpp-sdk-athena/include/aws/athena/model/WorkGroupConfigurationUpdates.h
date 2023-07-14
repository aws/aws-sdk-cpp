﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/ResultConfigurationUpdates.h>
#include <aws/athena/model/EngineVersion.h>
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
   * includes the location in Amazon S3 where query results are stored, the
   * encryption option, if any, used for query results, whether the Amazon CloudWatch
   * Metrics are enabled for the workgroup, whether the workgroup settings override
   * the client-side settings, and the data usage limit for the amount of bytes
   * scanned per query, if it is specified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/WorkGroupConfigurationUpdates">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API WorkGroupConfigurationUpdates
  {
  public:
    WorkGroupConfigurationUpdates();
    WorkGroupConfigurationUpdates(Aws::Utils::Json::JsonView jsonValue);
    WorkGroupConfigurationUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If set to "true", the settings for the workgroup override client-side
     * settings. If set to "false" client-side settings are used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool GetEnforceWorkGroupConfiguration() const{ return m_enforceWorkGroupConfiguration; }

    /**
     * <p>If set to "true", the settings for the workgroup override client-side
     * settings. If set to "false" client-side settings are used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool EnforceWorkGroupConfigurationHasBeenSet() const { return m_enforceWorkGroupConfigurationHasBeenSet; }

    /**
     * <p>If set to "true", the settings for the workgroup override client-side
     * settings. If set to "false" client-side settings are used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline void SetEnforceWorkGroupConfiguration(bool value) { m_enforceWorkGroupConfigurationHasBeenSet = true; m_enforceWorkGroupConfiguration = value; }

    /**
     * <p>If set to "true", the settings for the workgroup override client-side
     * settings. If set to "false" client-side settings are used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline WorkGroupConfigurationUpdates& WithEnforceWorkGroupConfiguration(bool value) { SetEnforceWorkGroupConfiguration(value); return *this;}


    /**
     * <p>The result configuration information about the queries in this workgroup that
     * will be updated. Includes the updated results location and an updated option for
     * encrypting query results.</p>
     */
    inline const ResultConfigurationUpdates& GetResultConfigurationUpdates() const{ return m_resultConfigurationUpdates; }

    /**
     * <p>The result configuration information about the queries in this workgroup that
     * will be updated. Includes the updated results location and an updated option for
     * encrypting query results.</p>
     */
    inline bool ResultConfigurationUpdatesHasBeenSet() const { return m_resultConfigurationUpdatesHasBeenSet; }

    /**
     * <p>The result configuration information about the queries in this workgroup that
     * will be updated. Includes the updated results location and an updated option for
     * encrypting query results.</p>
     */
    inline void SetResultConfigurationUpdates(const ResultConfigurationUpdates& value) { m_resultConfigurationUpdatesHasBeenSet = true; m_resultConfigurationUpdates = value; }

    /**
     * <p>The result configuration information about the queries in this workgroup that
     * will be updated. Includes the updated results location and an updated option for
     * encrypting query results.</p>
     */
    inline void SetResultConfigurationUpdates(ResultConfigurationUpdates&& value) { m_resultConfigurationUpdatesHasBeenSet = true; m_resultConfigurationUpdates = std::move(value); }

    /**
     * <p>The result configuration information about the queries in this workgroup that
     * will be updated. Includes the updated results location and an updated option for
     * encrypting query results.</p>
     */
    inline WorkGroupConfigurationUpdates& WithResultConfigurationUpdates(const ResultConfigurationUpdates& value) { SetResultConfigurationUpdates(value); return *this;}

    /**
     * <p>The result configuration information about the queries in this workgroup that
     * will be updated. Includes the updated results location and an updated option for
     * encrypting query results.</p>
     */
    inline WorkGroupConfigurationUpdates& WithResultConfigurationUpdates(ResultConfigurationUpdates&& value) { SetResultConfigurationUpdates(std::move(value)); return *this;}


    /**
     * <p>Indicates whether this workgroup enables publishing metrics to Amazon
     * CloudWatch.</p>
     */
    inline bool GetPublishCloudWatchMetricsEnabled() const{ return m_publishCloudWatchMetricsEnabled; }

    /**
     * <p>Indicates whether this workgroup enables publishing metrics to Amazon
     * CloudWatch.</p>
     */
    inline bool PublishCloudWatchMetricsEnabledHasBeenSet() const { return m_publishCloudWatchMetricsEnabledHasBeenSet; }

    /**
     * <p>Indicates whether this workgroup enables publishing metrics to Amazon
     * CloudWatch.</p>
     */
    inline void SetPublishCloudWatchMetricsEnabled(bool value) { m_publishCloudWatchMetricsEnabledHasBeenSet = true; m_publishCloudWatchMetricsEnabled = value; }

    /**
     * <p>Indicates whether this workgroup enables publishing metrics to Amazon
     * CloudWatch.</p>
     */
    inline WorkGroupConfigurationUpdates& WithPublishCloudWatchMetricsEnabled(bool value) { SetPublishCloudWatchMetricsEnabled(value); return *this;}


    /**
     * <p>The upper limit (cutoff) for the amount of bytes a single query in a
     * workgroup is allowed to scan.</p>
     */
    inline long long GetBytesScannedCutoffPerQuery() const{ return m_bytesScannedCutoffPerQuery; }

    /**
     * <p>The upper limit (cutoff) for the amount of bytes a single query in a
     * workgroup is allowed to scan.</p>
     */
    inline bool BytesScannedCutoffPerQueryHasBeenSet() const { return m_bytesScannedCutoffPerQueryHasBeenSet; }

    /**
     * <p>The upper limit (cutoff) for the amount of bytes a single query in a
     * workgroup is allowed to scan.</p>
     */
    inline void SetBytesScannedCutoffPerQuery(long long value) { m_bytesScannedCutoffPerQueryHasBeenSet = true; m_bytesScannedCutoffPerQuery = value; }

    /**
     * <p>The upper limit (cutoff) for the amount of bytes a single query in a
     * workgroup is allowed to scan.</p>
     */
    inline WorkGroupConfigurationUpdates& WithBytesScannedCutoffPerQuery(long long value) { SetBytesScannedCutoffPerQuery(value); return *this;}


    /**
     * <p>Indicates that the data usage control limit per query is removed.
     * <a>WorkGroupConfiguration$BytesScannedCutoffPerQuery</a> </p>
     */
    inline bool GetRemoveBytesScannedCutoffPerQuery() const{ return m_removeBytesScannedCutoffPerQuery; }

    /**
     * <p>Indicates that the data usage control limit per query is removed.
     * <a>WorkGroupConfiguration$BytesScannedCutoffPerQuery</a> </p>
     */
    inline bool RemoveBytesScannedCutoffPerQueryHasBeenSet() const { return m_removeBytesScannedCutoffPerQueryHasBeenSet; }

    /**
     * <p>Indicates that the data usage control limit per query is removed.
     * <a>WorkGroupConfiguration$BytesScannedCutoffPerQuery</a> </p>
     */
    inline void SetRemoveBytesScannedCutoffPerQuery(bool value) { m_removeBytesScannedCutoffPerQueryHasBeenSet = true; m_removeBytesScannedCutoffPerQuery = value; }

    /**
     * <p>Indicates that the data usage control limit per query is removed.
     * <a>WorkGroupConfiguration$BytesScannedCutoffPerQuery</a> </p>
     */
    inline WorkGroupConfigurationUpdates& WithRemoveBytesScannedCutoffPerQuery(bool value) { SetRemoveBytesScannedCutoffPerQuery(value); return *this;}


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
    inline bool RequesterPaysEnabledHasBeenSet() const { return m_requesterPaysEnabledHasBeenSet; }

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
    inline void SetRequesterPaysEnabled(bool value) { m_requesterPaysEnabledHasBeenSet = true; m_requesterPaysEnabled = value; }

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
    inline WorkGroupConfigurationUpdates& WithRequesterPaysEnabled(bool value) { SetRequesterPaysEnabled(value); return *this;}


    /**
     * <p>The engine version requested when a workgroup is updated. After the update,
     * all queries on the workgroup run on the requested engine version. If no value
     * was previously set, the default is Auto. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline const EngineVersion& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version requested when a workgroup is updated. After the update,
     * all queries on the workgroup run on the requested engine version. If no value
     * was previously set, the default is Auto. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version requested when a workgroup is updated. After the update,
     * all queries on the workgroup run on the requested engine version. If no value
     * was previously set, the default is Auto. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline void SetEngineVersion(const EngineVersion& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version requested when a workgroup is updated. After the update,
     * all queries on the workgroup run on the requested engine version. If no value
     * was previously set, the default is Auto. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline void SetEngineVersion(EngineVersion&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version requested when a workgroup is updated. After the update,
     * all queries on the workgroup run on the requested engine version. If no value
     * was previously set, the default is Auto. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline WorkGroupConfigurationUpdates& WithEngineVersion(const EngineVersion& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version requested when a workgroup is updated. After the update,
     * all queries on the workgroup run on the requested engine version. If no value
     * was previously set, the default is Auto. Queries on the
     * <code>AmazonAthenaPreviewFunctionality</code> workgroup run on the preview
     * engine regardless of this setting.</p>
     */
    inline WorkGroupConfigurationUpdates& WithEngineVersion(EngineVersion&& value) { SetEngineVersion(std::move(value)); return *this;}

  private:

    bool m_enforceWorkGroupConfiguration;
    bool m_enforceWorkGroupConfigurationHasBeenSet;

    ResultConfigurationUpdates m_resultConfigurationUpdates;
    bool m_resultConfigurationUpdatesHasBeenSet;

    bool m_publishCloudWatchMetricsEnabled;
    bool m_publishCloudWatchMetricsEnabledHasBeenSet;

    long long m_bytesScannedCutoffPerQuery;
    bool m_bytesScannedCutoffPerQueryHasBeenSet;

    bool m_removeBytesScannedCutoffPerQuery;
    bool m_removeBytesScannedCutoffPerQueryHasBeenSet;

    bool m_requesterPaysEnabled;
    bool m_requesterPaysEnabledHasBeenSet;

    EngineVersion m_engineVersion;
    bool m_engineVersionHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
