/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/InternetMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/internetmonitor/model/MonitorConfigState.h>
#include <aws/internetmonitor/model/InternetMeasurementsLogDelivery.h>
#include <aws/internetmonitor/model/HealthEventsConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

  /**
   */
  class UpdateMonitorRequest : public InternetMonitorRequest
  {
  public:
    AWS_INTERNETMONITOR_API UpdateMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMonitor"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the monitor. </p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }
    inline UpdateMonitorRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}
    inline UpdateMonitorRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}
    inline UpdateMonitorRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources to include in a monitor, which you provide as a set of Amazon
     * Resource Names (ARNs). Resources can be VPCs, NLBs, Amazon CloudFront
     * distributions, or Amazon WorkSpaces directories.</p> <p>You can add a
     * combination of VPCs and CloudFront distributions, or you can add WorkSpaces
     * directories, or you can add NLBs. You can't add NLBs or WorkSpaces directories
     * together with any other resources.</p>  <p>If you add only Amazon Virtual
     * Private Clouds resources, at least one VPC must have an Internet Gateway
     * attached to it, to make sure that it has internet connectivity.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetResourcesToAdd() const{ return m_resourcesToAdd; }
    inline bool ResourcesToAddHasBeenSet() const { return m_resourcesToAddHasBeenSet; }
    inline void SetResourcesToAdd(const Aws::Vector<Aws::String>& value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd = value; }
    inline void SetResourcesToAdd(Aws::Vector<Aws::String>&& value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd = std::move(value); }
    inline UpdateMonitorRequest& WithResourcesToAdd(const Aws::Vector<Aws::String>& value) { SetResourcesToAdd(value); return *this;}
    inline UpdateMonitorRequest& WithResourcesToAdd(Aws::Vector<Aws::String>&& value) { SetResourcesToAdd(std::move(value)); return *this;}
    inline UpdateMonitorRequest& AddResourcesToAdd(const Aws::String& value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd.push_back(value); return *this; }
    inline UpdateMonitorRequest& AddResourcesToAdd(Aws::String&& value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd.push_back(std::move(value)); return *this; }
    inline UpdateMonitorRequest& AddResourcesToAdd(const char* value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resources to remove from a monitor, which you provide as a set of Amazon
     * Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourcesToRemove() const{ return m_resourcesToRemove; }
    inline bool ResourcesToRemoveHasBeenSet() const { return m_resourcesToRemoveHasBeenSet; }
    inline void SetResourcesToRemove(const Aws::Vector<Aws::String>& value) { m_resourcesToRemoveHasBeenSet = true; m_resourcesToRemove = value; }
    inline void SetResourcesToRemove(Aws::Vector<Aws::String>&& value) { m_resourcesToRemoveHasBeenSet = true; m_resourcesToRemove = std::move(value); }
    inline UpdateMonitorRequest& WithResourcesToRemove(const Aws::Vector<Aws::String>& value) { SetResourcesToRemove(value); return *this;}
    inline UpdateMonitorRequest& WithResourcesToRemove(Aws::Vector<Aws::String>&& value) { SetResourcesToRemove(std::move(value)); return *this;}
    inline UpdateMonitorRequest& AddResourcesToRemove(const Aws::String& value) { m_resourcesToRemoveHasBeenSet = true; m_resourcesToRemove.push_back(value); return *this; }
    inline UpdateMonitorRequest& AddResourcesToRemove(Aws::String&& value) { m_resourcesToRemoveHasBeenSet = true; m_resourcesToRemove.push_back(std::move(value)); return *this; }
    inline UpdateMonitorRequest& AddResourcesToRemove(const char* value) { m_resourcesToRemoveHasBeenSet = true; m_resourcesToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status for a monitor. The accepted values for <code>Status</code> with
     * the <code>UpdateMonitor</code> API call are the following: <code>ACTIVE</code>
     * and <code>INACTIVE</code>. The following values are <i>not</i> accepted:
     * <code>PENDING</code>, and <code>ERROR</code>.</p>
     */
    inline const MonitorConfigState& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MonitorConfigState& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MonitorConfigState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateMonitorRequest& WithStatus(const MonitorConfigState& value) { SetStatus(value); return *this;}
    inline UpdateMonitorRequest& WithStatus(MonitorConfigState&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateMonitorRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateMonitorRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateMonitorRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of city-networks to monitor for your application. A
     * city-network is the location (city) where clients access your application
     * resources from and the ASN or network provider, such as an internet service
     * provider (ISP), that clients access the resources through. Setting this limit
     * can help control billing costs.</p>
     */
    inline int GetMaxCityNetworksToMonitor() const{ return m_maxCityNetworksToMonitor; }
    inline bool MaxCityNetworksToMonitorHasBeenSet() const { return m_maxCityNetworksToMonitorHasBeenSet; }
    inline void SetMaxCityNetworksToMonitor(int value) { m_maxCityNetworksToMonitorHasBeenSet = true; m_maxCityNetworksToMonitor = value; }
    inline UpdateMonitorRequest& WithMaxCityNetworksToMonitor(int value) { SetMaxCityNetworksToMonitor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publish internet measurements for Internet Monitor to another location, such
     * as an Amazon S3 bucket. The measurements are also published to Amazon CloudWatch
     * Logs.</p>
     */
    inline const InternetMeasurementsLogDelivery& GetInternetMeasurementsLogDelivery() const{ return m_internetMeasurementsLogDelivery; }
    inline bool InternetMeasurementsLogDeliveryHasBeenSet() const { return m_internetMeasurementsLogDeliveryHasBeenSet; }
    inline void SetInternetMeasurementsLogDelivery(const InternetMeasurementsLogDelivery& value) { m_internetMeasurementsLogDeliveryHasBeenSet = true; m_internetMeasurementsLogDelivery = value; }
    inline void SetInternetMeasurementsLogDelivery(InternetMeasurementsLogDelivery&& value) { m_internetMeasurementsLogDeliveryHasBeenSet = true; m_internetMeasurementsLogDelivery = std::move(value); }
    inline UpdateMonitorRequest& WithInternetMeasurementsLogDelivery(const InternetMeasurementsLogDelivery& value) { SetInternetMeasurementsLogDelivery(value); return *this;}
    inline UpdateMonitorRequest& WithInternetMeasurementsLogDelivery(InternetMeasurementsLogDelivery&& value) { SetInternetMeasurementsLogDelivery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the internet-facing traffic for your application that you
     * want to monitor with this monitor. If you set a city-networks maximum, that
     * limit overrides the traffic percentage that you set.</p> <p>To learn more, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMTrafficPercentage.html">Choosing
     * an application traffic percentage to monitor </a> in the Amazon CloudWatch
     * Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline int GetTrafficPercentageToMonitor() const{ return m_trafficPercentageToMonitor; }
    inline bool TrafficPercentageToMonitorHasBeenSet() const { return m_trafficPercentageToMonitorHasBeenSet; }
    inline void SetTrafficPercentageToMonitor(int value) { m_trafficPercentageToMonitorHasBeenSet = true; m_trafficPercentageToMonitor = value; }
    inline UpdateMonitorRequest& WithTrafficPercentageToMonitor(int value) { SetTrafficPercentageToMonitor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of health score thresholds. A threshold percentage for health
     * scores, along with other configuration information, determines when Internet
     * Monitor creates a health event when there's an internet issue that affects your
     * application end users.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-overview.html#IMUpdateThresholdFromOverview">
     * Change health event thresholds</a> in the Internet Monitor section of the
     * <i>CloudWatch User Guide</i>.</p>
     */
    inline const HealthEventsConfig& GetHealthEventsConfig() const{ return m_healthEventsConfig; }
    inline bool HealthEventsConfigHasBeenSet() const { return m_healthEventsConfigHasBeenSet; }
    inline void SetHealthEventsConfig(const HealthEventsConfig& value) { m_healthEventsConfigHasBeenSet = true; m_healthEventsConfig = value; }
    inline void SetHealthEventsConfig(HealthEventsConfig&& value) { m_healthEventsConfigHasBeenSet = true; m_healthEventsConfig = std::move(value); }
    inline UpdateMonitorRequest& WithHealthEventsConfig(const HealthEventsConfig& value) { SetHealthEventsConfig(value); return *this;}
    inline UpdateMonitorRequest& WithHealthEventsConfig(HealthEventsConfig&& value) { SetHealthEventsConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourcesToAdd;
    bool m_resourcesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourcesToRemove;
    bool m_resourcesToRemoveHasBeenSet = false;

    MonitorConfigState m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    int m_maxCityNetworksToMonitor;
    bool m_maxCityNetworksToMonitorHasBeenSet = false;

    InternetMeasurementsLogDelivery m_internetMeasurementsLogDelivery;
    bool m_internetMeasurementsLogDeliveryHasBeenSet = false;

    int m_trafficPercentageToMonitor;
    bool m_trafficPercentageToMonitorHasBeenSet = false;

    HealthEventsConfig m_healthEventsConfig;
    bool m_healthEventsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
