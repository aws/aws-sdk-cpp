/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/internetmonitor/model/MonitorConfigState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/internetmonitor/model/MonitorProcessingStatusCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/internetmonitor/model/InternetMeasurementsLogDelivery.h>
#include <aws/internetmonitor/model/HealthEventsConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace InternetMonitor
{
namespace Model
{
  class GetMonitorResult
  {
  public:
    AWS_INTERNETMONITOR_API GetMonitorResult() = default;
    AWS_INTERNETMONITOR_API GetMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API GetMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    GetMonitorResult& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    GetMonitorResult& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources monitored by the monitor. Resources are listed by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    GetMonitorResult& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Aws::String>
    GetMonitorResult& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the monitor.</p>
     */
    inline MonitorConfigState GetStatus() const { return m_status; }
    inline void SetStatus(MonitorConfigState value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetMonitorResult& WithStatus(MonitorConfigState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the monitor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetMonitorResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the monitor was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    GetMonitorResult& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health of the data processing for the monitor.</p>
     */
    inline MonitorProcessingStatusCode GetProcessingStatus() const { return m_processingStatus; }
    inline void SetProcessingStatus(MonitorProcessingStatusCode value) { m_processingStatusHasBeenSet = true; m_processingStatus = value; }
    inline GetMonitorResult& WithProcessingStatus(MonitorProcessingStatusCode value) { SetProcessingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the health of the data processing for the
     * monitor.</p>
     */
    inline const Aws::String& GetProcessingStatusInfo() const { return m_processingStatusInfo; }
    template<typename ProcessingStatusInfoT = Aws::String>
    void SetProcessingStatusInfo(ProcessingStatusInfoT&& value) { m_processingStatusInfoHasBeenSet = true; m_processingStatusInfo = std::forward<ProcessingStatusInfoT>(value); }
    template<typename ProcessingStatusInfoT = Aws::String>
    GetMonitorResult& WithProcessingStatusInfo(ProcessingStatusInfoT&& value) { SetProcessingStatusInfo(std::forward<ProcessingStatusInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetMonitorResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetMonitorResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The maximum number of city-networks to monitor for your resources. A
     * city-network is the location (city) where clients access your application
     * resources from and the ASN or network provider, such as an internet service
     * provider (ISP), that clients access the resources through. This limit can help
     * control billing costs.</p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMCityNetworksMaximum.html">Choosing
     * a city-network maximum value </a> in the Amazon CloudWatch Internet Monitor
     * section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline int GetMaxCityNetworksToMonitor() const { return m_maxCityNetworksToMonitor; }
    inline void SetMaxCityNetworksToMonitor(int value) { m_maxCityNetworksToMonitorHasBeenSet = true; m_maxCityNetworksToMonitor = value; }
    inline GetMonitorResult& WithMaxCityNetworksToMonitor(int value) { SetMaxCityNetworksToMonitor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publish internet measurements for Internet Monitor to another location, such
     * as an Amazon S3 bucket. The measurements are also published to Amazon CloudWatch
     * Logs.</p>
     */
    inline const InternetMeasurementsLogDelivery& GetInternetMeasurementsLogDelivery() const { return m_internetMeasurementsLogDelivery; }
    template<typename InternetMeasurementsLogDeliveryT = InternetMeasurementsLogDelivery>
    void SetInternetMeasurementsLogDelivery(InternetMeasurementsLogDeliveryT&& value) { m_internetMeasurementsLogDeliveryHasBeenSet = true; m_internetMeasurementsLogDelivery = std::forward<InternetMeasurementsLogDeliveryT>(value); }
    template<typename InternetMeasurementsLogDeliveryT = InternetMeasurementsLogDelivery>
    GetMonitorResult& WithInternetMeasurementsLogDelivery(InternetMeasurementsLogDeliveryT&& value) { SetInternetMeasurementsLogDelivery(std::forward<InternetMeasurementsLogDeliveryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the internet-facing traffic for your application to monitor
     * with this monitor. If you set a city-networks maximum, that limit overrides the
     * traffic percentage that you set.</p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMTrafficPercentage.html">Choosing
     * an application traffic percentage to monitor </a> in the Amazon CloudWatch
     * Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline int GetTrafficPercentageToMonitor() const { return m_trafficPercentageToMonitor; }
    inline void SetTrafficPercentageToMonitor(int value) { m_trafficPercentageToMonitorHasBeenSet = true; m_trafficPercentageToMonitor = value; }
    inline GetMonitorResult& WithTrafficPercentageToMonitor(int value) { SetTrafficPercentageToMonitor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of health event threshold configurations. The threshold percentage
     * for a health score determines, along with other configuration information, when
     * Internet Monitor creates a health event when there's an internet issue that
     * affects your application end users.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-overview.html#IMUpdateThresholdFromOverview">
     * Change health event thresholds</a> in the Internet Monitor section of the
     * <i>CloudWatch User Guide</i>.</p>
     */
    inline const HealthEventsConfig& GetHealthEventsConfig() const { return m_healthEventsConfig; }
    template<typename HealthEventsConfigT = HealthEventsConfig>
    void SetHealthEventsConfig(HealthEventsConfigT&& value) { m_healthEventsConfigHasBeenSet = true; m_healthEventsConfig = std::forward<HealthEventsConfigT>(value); }
    template<typename HealthEventsConfigT = HealthEventsConfig>
    GetMonitorResult& WithHealthEventsConfig(HealthEventsConfigT&& value) { SetHealthEventsConfig(std::forward<HealthEventsConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMonitorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    MonitorConfigState m_status{MonitorConfigState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    MonitorProcessingStatusCode m_processingStatus{MonitorProcessingStatusCode::NOT_SET};
    bool m_processingStatusHasBeenSet = false;

    Aws::String m_processingStatusInfo;
    bool m_processingStatusInfoHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
