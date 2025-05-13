/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/InternetMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateMonitorRequest : public InternetMonitorRequest
  {
  public:
    AWS_INTERNETMONITOR_API CreateMonitorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMonitor"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the monitor. </p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    CreateMonitorRequest& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources to include in a monitor, which you provide as a set of Amazon
     * Resource Names (ARNs). Resources can be VPCs, NLBs, Amazon CloudFront
     * distributions, or Amazon WorkSpaces directories.</p> <p>You can add a
     * combination of VPCs and CloudFront distributions, or you can add WorkSpaces
     * directories, or you can add NLBs. You can't add NLBs or WorkSpaces directories
     * together with any other resources.</p>  <p>If you add only Amazon VPC
     * resources, at least one VPC must have an Internet Gateway attached to it, to
     * make sure that it has internet connectivity.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    CreateMonitorRequest& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Aws::String>
    CreateMonitorRequest& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateMonitorRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMonitorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateMonitorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The maximum number of city-networks to monitor for your resources. A
     * city-network is the location (city) where clients access your application
     * resources from and the ASN or network provider, such as an internet service
     * provider (ISP), that clients access the resources through. Setting this limit
     * can help control billing costs.</p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMCityNetworksMaximum.html">Choosing
     * a city-network maximum value </a> in the Amazon CloudWatch Internet Monitor
     * section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline int GetMaxCityNetworksToMonitor() const { return m_maxCityNetworksToMonitor; }
    inline bool MaxCityNetworksToMonitorHasBeenSet() const { return m_maxCityNetworksToMonitorHasBeenSet; }
    inline void SetMaxCityNetworksToMonitor(int value) { m_maxCityNetworksToMonitorHasBeenSet = true; m_maxCityNetworksToMonitor = value; }
    inline CreateMonitorRequest& WithMaxCityNetworksToMonitor(int value) { SetMaxCityNetworksToMonitor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publish internet measurements for Internet Monitor to an Amazon S3 bucket in
     * addition to CloudWatch Logs.</p>
     */
    inline const InternetMeasurementsLogDelivery& GetInternetMeasurementsLogDelivery() const { return m_internetMeasurementsLogDelivery; }
    inline bool InternetMeasurementsLogDeliveryHasBeenSet() const { return m_internetMeasurementsLogDeliveryHasBeenSet; }
    template<typename InternetMeasurementsLogDeliveryT = InternetMeasurementsLogDelivery>
    void SetInternetMeasurementsLogDelivery(InternetMeasurementsLogDeliveryT&& value) { m_internetMeasurementsLogDeliveryHasBeenSet = true; m_internetMeasurementsLogDelivery = std::forward<InternetMeasurementsLogDeliveryT>(value); }
    template<typename InternetMeasurementsLogDeliveryT = InternetMeasurementsLogDelivery>
    CreateMonitorRequest& WithInternetMeasurementsLogDelivery(InternetMeasurementsLogDeliveryT&& value) { SetInternetMeasurementsLogDelivery(std::forward<InternetMeasurementsLogDeliveryT>(value)); return *this;}
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
    inline int GetTrafficPercentageToMonitor() const { return m_trafficPercentageToMonitor; }
    inline bool TrafficPercentageToMonitorHasBeenSet() const { return m_trafficPercentageToMonitorHasBeenSet; }
    inline void SetTrafficPercentageToMonitor(int value) { m_trafficPercentageToMonitorHasBeenSet = true; m_trafficPercentageToMonitor = value; }
    inline CreateMonitorRequest& WithTrafficPercentageToMonitor(int value) { SetTrafficPercentageToMonitor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the threshold percentages and other configuration information for
     * when Amazon CloudWatch Internet Monitor creates a health event. Internet Monitor
     * creates a health event when an internet issue that affects your application end
     * users has a health score percentage that is at or below a specific threshold,
     * and, sometimes, when other criteria are met.</p> <p>If you don't set a health
     * event threshold, the default value is 95%.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-overview.html#IMUpdateThresholdFromOverview">
     * Change health event thresholds</a> in the Internet Monitor section of the
     * <i>CloudWatch User Guide</i>.</p>
     */
    inline const HealthEventsConfig& GetHealthEventsConfig() const { return m_healthEventsConfig; }
    inline bool HealthEventsConfigHasBeenSet() const { return m_healthEventsConfigHasBeenSet; }
    template<typename HealthEventsConfigT = HealthEventsConfig>
    void SetHealthEventsConfig(HealthEventsConfigT&& value) { m_healthEventsConfigHasBeenSet = true; m_healthEventsConfig = std::forward<HealthEventsConfigT>(value); }
    template<typename HealthEventsConfigT = HealthEventsConfig>
    CreateMonitorRequest& WithHealthEventsConfig(HealthEventsConfigT&& value) { SetHealthEventsConfig(std::forward<HealthEventsConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_maxCityNetworksToMonitor{0};
    bool m_maxCityNetworksToMonitorHasBeenSet = false;

    InternetMeasurementsLogDelivery m_internetMeasurementsLogDelivery;
    bool m_internetMeasurementsLogDeliveryHasBeenSet = false;

    int m_trafficPercentageToMonitor{0};
    bool m_trafficPercentageToMonitorHasBeenSet = false;

    HealthEventsConfig m_healthEventsConfig;
    bool m_healthEventsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
