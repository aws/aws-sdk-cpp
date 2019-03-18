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
#include <aws/athena/model/ResultConfiguration.h>
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
   * whether workgroup settings override query settings, and the data usage limit for
   * the amount of data scanned per query, if it is specified. The workgroup settings
   * override is specified in EnforceWorkGroupConfiguration (true/false) in the
   * WorkGroupConfiguration. See
   * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/WorkGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API WorkGroupConfiguration
  {
  public:
    WorkGroupConfiguration();
    WorkGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    WorkGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results.</p>
     */
    inline const ResultConfiguration& GetResultConfiguration() const{ return m_resultConfiguration; }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results.</p>
     */
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results.</p>
     */
    inline void SetResultConfiguration(const ResultConfiguration& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results.</p>
     */
    inline void SetResultConfiguration(ResultConfiguration&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results.</p>
     */
    inline WorkGroupConfiguration& WithResultConfiguration(const ResultConfiguration& value) { SetResultConfiguration(value); return *this;}

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored and the encryption option, if any, used for query
     * results.</p>
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

  private:

    ResultConfiguration m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet;

    bool m_enforceWorkGroupConfiguration;
    bool m_enforceWorkGroupConfigurationHasBeenSet;

    bool m_publishCloudWatchMetricsEnabled;
    bool m_publishCloudWatchMetricsEnabledHasBeenSet;

    long long m_bytesScannedCutoffPerQuery;
    bool m_bytesScannedCutoffPerQueryHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
