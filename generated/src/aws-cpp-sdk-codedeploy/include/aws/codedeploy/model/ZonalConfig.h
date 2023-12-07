/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/MinimumHealthyHostsPerZone.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Configure the <code>ZonalConfig</code> object if you want CodeDeploy to
   * deploy your application to one <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-availability-zones">Availability
   * Zone</a> at a time, within an Amazon Web Services Region. By deploying to one
   * Availability Zone at a time, you can expose your deployment to a progressively
   * larger audience as confidence in the deployment's performance and viability
   * grows. If you don't configure the <code>ZonalConfig</code> object, CodeDeploy
   * deploys your application to a random selection of hosts across a Region.</p>
   * <p>For more information about the zonal configuration feature, see <a
   * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
   * configuration</a> in the <i>CodeDeploy User Guide</i>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ZonalConfig">AWS
   * API Reference</a></p>
   */
  class ZonalConfig
  {
  public:
    AWS_CODEDEPLOY_API ZonalConfig();
    AWS_CODEDEPLOY_API ZonalConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API ZonalConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period of time, in seconds, that CodeDeploy must wait after completing a
     * deployment to the <i>first</i> Availability Zone. CodeDeploy will wait this
     * amount of time before starting a deployment to the second Availability Zone. You
     * might set this option if you want to allow extra bake time for the first
     * Availability Zone. If you don't specify a value for
     * <code>firstZoneMonitorDurationInSeconds</code>, then CodeDeploy uses the
     * <code>monitorDurationInSeconds</code> value for the first Availability Zone.</p>
     * <p>For more information about the zonal configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline long long GetFirstZoneMonitorDurationInSeconds() const{ return m_firstZoneMonitorDurationInSeconds; }

    /**
     * <p>The period of time, in seconds, that CodeDeploy must wait after completing a
     * deployment to the <i>first</i> Availability Zone. CodeDeploy will wait this
     * amount of time before starting a deployment to the second Availability Zone. You
     * might set this option if you want to allow extra bake time for the first
     * Availability Zone. If you don't specify a value for
     * <code>firstZoneMonitorDurationInSeconds</code>, then CodeDeploy uses the
     * <code>monitorDurationInSeconds</code> value for the first Availability Zone.</p>
     * <p>For more information about the zonal configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline bool FirstZoneMonitorDurationInSecondsHasBeenSet() const { return m_firstZoneMonitorDurationInSecondsHasBeenSet; }

    /**
     * <p>The period of time, in seconds, that CodeDeploy must wait after completing a
     * deployment to the <i>first</i> Availability Zone. CodeDeploy will wait this
     * amount of time before starting a deployment to the second Availability Zone. You
     * might set this option if you want to allow extra bake time for the first
     * Availability Zone. If you don't specify a value for
     * <code>firstZoneMonitorDurationInSeconds</code>, then CodeDeploy uses the
     * <code>monitorDurationInSeconds</code> value for the first Availability Zone.</p>
     * <p>For more information about the zonal configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline void SetFirstZoneMonitorDurationInSeconds(long long value) { m_firstZoneMonitorDurationInSecondsHasBeenSet = true; m_firstZoneMonitorDurationInSeconds = value; }

    /**
     * <p>The period of time, in seconds, that CodeDeploy must wait after completing a
     * deployment to the <i>first</i> Availability Zone. CodeDeploy will wait this
     * amount of time before starting a deployment to the second Availability Zone. You
     * might set this option if you want to allow extra bake time for the first
     * Availability Zone. If you don't specify a value for
     * <code>firstZoneMonitorDurationInSeconds</code>, then CodeDeploy uses the
     * <code>monitorDurationInSeconds</code> value for the first Availability Zone.</p>
     * <p>For more information about the zonal configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline ZonalConfig& WithFirstZoneMonitorDurationInSeconds(long long value) { SetFirstZoneMonitorDurationInSeconds(value); return *this;}


    /**
     * <p>The period of time, in seconds, that CodeDeploy must wait after completing a
     * deployment to an Availability Zone. CodeDeploy will wait this amount of time
     * before starting a deployment to the next Availability Zone. Consider adding a
     * monitor duration to give the deployment some time to prove itself (or 'bake') in
     * one Availability Zone before it is released in the next zone. If you don't
     * specify a <code>monitorDurationInSeconds</code>, CodeDeploy starts deploying to
     * the next Availability Zone immediately.</p> <p>For more information about the
     * zonal configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline long long GetMonitorDurationInSeconds() const{ return m_monitorDurationInSeconds; }

    /**
     * <p>The period of time, in seconds, that CodeDeploy must wait after completing a
     * deployment to an Availability Zone. CodeDeploy will wait this amount of time
     * before starting a deployment to the next Availability Zone. Consider adding a
     * monitor duration to give the deployment some time to prove itself (or 'bake') in
     * one Availability Zone before it is released in the next zone. If you don't
     * specify a <code>monitorDurationInSeconds</code>, CodeDeploy starts deploying to
     * the next Availability Zone immediately.</p> <p>For more information about the
     * zonal configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline bool MonitorDurationInSecondsHasBeenSet() const { return m_monitorDurationInSecondsHasBeenSet; }

    /**
     * <p>The period of time, in seconds, that CodeDeploy must wait after completing a
     * deployment to an Availability Zone. CodeDeploy will wait this amount of time
     * before starting a deployment to the next Availability Zone. Consider adding a
     * monitor duration to give the deployment some time to prove itself (or 'bake') in
     * one Availability Zone before it is released in the next zone. If you don't
     * specify a <code>monitorDurationInSeconds</code>, CodeDeploy starts deploying to
     * the next Availability Zone immediately.</p> <p>For more information about the
     * zonal configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline void SetMonitorDurationInSeconds(long long value) { m_monitorDurationInSecondsHasBeenSet = true; m_monitorDurationInSeconds = value; }

    /**
     * <p>The period of time, in seconds, that CodeDeploy must wait after completing a
     * deployment to an Availability Zone. CodeDeploy will wait this amount of time
     * before starting a deployment to the next Availability Zone. Consider adding a
     * monitor duration to give the deployment some time to prove itself (or 'bake') in
     * one Availability Zone before it is released in the next zone. If you don't
     * specify a <code>monitorDurationInSeconds</code>, CodeDeploy starts deploying to
     * the next Availability Zone immediately.</p> <p>For more information about the
     * zonal configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline ZonalConfig& WithMonitorDurationInSeconds(long long value) { SetMonitorDurationInSeconds(value); return *this;}


    /**
     * <p>The number or percentage of instances that must remain available per
     * Availability Zone during a deployment. This option works in conjunction with the
     * <code>MinimumHealthyHosts</code> option. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html#minimum-healthy-hosts-az">About
     * the minimum number of healthy hosts per Availability Zone</a> in the
     * <i>CodeDeploy User Guide</i>.</p> <p>If you don't specify the
     * <code>minimumHealthyHostsPerZone</code> option, then CodeDeploy uses a default
     * value of <code>0</code> percent.</p> <p>For more information about the zonal
     * configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline const MinimumHealthyHostsPerZone& GetMinimumHealthyHostsPerZone() const{ return m_minimumHealthyHostsPerZone; }

    /**
     * <p>The number or percentage of instances that must remain available per
     * Availability Zone during a deployment. This option works in conjunction with the
     * <code>MinimumHealthyHosts</code> option. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html#minimum-healthy-hosts-az">About
     * the minimum number of healthy hosts per Availability Zone</a> in the
     * <i>CodeDeploy User Guide</i>.</p> <p>If you don't specify the
     * <code>minimumHealthyHostsPerZone</code> option, then CodeDeploy uses a default
     * value of <code>0</code> percent.</p> <p>For more information about the zonal
     * configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline bool MinimumHealthyHostsPerZoneHasBeenSet() const { return m_minimumHealthyHostsPerZoneHasBeenSet; }

    /**
     * <p>The number or percentage of instances that must remain available per
     * Availability Zone during a deployment. This option works in conjunction with the
     * <code>MinimumHealthyHosts</code> option. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html#minimum-healthy-hosts-az">About
     * the minimum number of healthy hosts per Availability Zone</a> in the
     * <i>CodeDeploy User Guide</i>.</p> <p>If you don't specify the
     * <code>minimumHealthyHostsPerZone</code> option, then CodeDeploy uses a default
     * value of <code>0</code> percent.</p> <p>For more information about the zonal
     * configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline void SetMinimumHealthyHostsPerZone(const MinimumHealthyHostsPerZone& value) { m_minimumHealthyHostsPerZoneHasBeenSet = true; m_minimumHealthyHostsPerZone = value; }

    /**
     * <p>The number or percentage of instances that must remain available per
     * Availability Zone during a deployment. This option works in conjunction with the
     * <code>MinimumHealthyHosts</code> option. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html#minimum-healthy-hosts-az">About
     * the minimum number of healthy hosts per Availability Zone</a> in the
     * <i>CodeDeploy User Guide</i>.</p> <p>If you don't specify the
     * <code>minimumHealthyHostsPerZone</code> option, then CodeDeploy uses a default
     * value of <code>0</code> percent.</p> <p>For more information about the zonal
     * configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline void SetMinimumHealthyHostsPerZone(MinimumHealthyHostsPerZone&& value) { m_minimumHealthyHostsPerZoneHasBeenSet = true; m_minimumHealthyHostsPerZone = std::move(value); }

    /**
     * <p>The number or percentage of instances that must remain available per
     * Availability Zone during a deployment. This option works in conjunction with the
     * <code>MinimumHealthyHosts</code> option. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html#minimum-healthy-hosts-az">About
     * the minimum number of healthy hosts per Availability Zone</a> in the
     * <i>CodeDeploy User Guide</i>.</p> <p>If you don't specify the
     * <code>minimumHealthyHostsPerZone</code> option, then CodeDeploy uses a default
     * value of <code>0</code> percent.</p> <p>For more information about the zonal
     * configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline ZonalConfig& WithMinimumHealthyHostsPerZone(const MinimumHealthyHostsPerZone& value) { SetMinimumHealthyHostsPerZone(value); return *this;}

    /**
     * <p>The number or percentage of instances that must remain available per
     * Availability Zone during a deployment. This option works in conjunction with the
     * <code>MinimumHealthyHosts</code> option. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html#minimum-healthy-hosts-az">About
     * the minimum number of healthy hosts per Availability Zone</a> in the
     * <i>CodeDeploy User Guide</i>.</p> <p>If you don't specify the
     * <code>minimumHealthyHostsPerZone</code> option, then CodeDeploy uses a default
     * value of <code>0</code> percent.</p> <p>For more information about the zonal
     * configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline ZonalConfig& WithMinimumHealthyHostsPerZone(MinimumHealthyHostsPerZone&& value) { SetMinimumHealthyHostsPerZone(std::move(value)); return *this;}

  private:

    long long m_firstZoneMonitorDurationInSeconds;
    bool m_firstZoneMonitorDurationInSecondsHasBeenSet = false;

    long long m_monitorDurationInSeconds;
    bool m_monitorDurationInSecondsHasBeenSet = false;

    MinimumHealthyHostsPerZone m_minimumHealthyHostsPerZone;
    bool m_minimumHealthyHostsPerZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
