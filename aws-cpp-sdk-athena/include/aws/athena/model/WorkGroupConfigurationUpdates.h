/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/ResultConfigurationUpdates.h>
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
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
