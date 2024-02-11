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
    AWS_INTERNETMONITOR_API GetMonitorResult();
    AWS_INTERNETMONITOR_API GetMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API GetMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorName = value; }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor.</p>
     */
    inline GetMonitorResult& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor.</p>
     */
    inline GetMonitorResult& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor.</p>
     */
    inline GetMonitorResult& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline GetMonitorResult& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline GetMonitorResult& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline GetMonitorResult& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}


    /**
     * <p>The resources monitored by the monitor. Resources are listed by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>The resources monitored by the monitor. Resources are listed by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resources = value; }

    /**
     * <p>The resources monitored by the monitor. Resources are listed by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resources = std::move(value); }

    /**
     * <p>The resources monitored by the monitor. Resources are listed by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline GetMonitorResult& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>The resources monitored by the monitor. Resources are listed by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline GetMonitorResult& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The resources monitored by the monitor. Resources are listed by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline GetMonitorResult& AddResources(const Aws::String& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>The resources monitored by the monitor. Resources are listed by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline GetMonitorResult& AddResources(Aws::String&& value) { m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>The resources monitored by the monitor. Resources are listed by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline GetMonitorResult& AddResources(const char* value) { m_resources.push_back(value); return *this; }


    /**
     * <p>The status of the monitor.</p>
     */
    inline const MonitorConfigState& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the monitor.</p>
     */
    inline void SetStatus(const MonitorConfigState& value) { m_status = value; }

    /**
     * <p>The status of the monitor.</p>
     */
    inline void SetStatus(MonitorConfigState&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the monitor.</p>
     */
    inline GetMonitorResult& WithStatus(const MonitorConfigState& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the monitor.</p>
     */
    inline GetMonitorResult& WithStatus(MonitorConfigState&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time when the monitor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the monitor was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time when the monitor was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time when the monitor was created.</p>
     */
    inline GetMonitorResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the monitor was created.</p>
     */
    inline GetMonitorResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The last time that the monitor was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The last time that the monitor was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    /**
     * <p>The last time that the monitor was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    /**
     * <p>The last time that the monitor was modified.</p>
     */
    inline GetMonitorResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The last time that the monitor was modified.</p>
     */
    inline GetMonitorResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The health of the data processing for the monitor.</p>
     */
    inline const MonitorProcessingStatusCode& GetProcessingStatus() const{ return m_processingStatus; }

    /**
     * <p>The health of the data processing for the monitor.</p>
     */
    inline void SetProcessingStatus(const MonitorProcessingStatusCode& value) { m_processingStatus = value; }

    /**
     * <p>The health of the data processing for the monitor.</p>
     */
    inline void SetProcessingStatus(MonitorProcessingStatusCode&& value) { m_processingStatus = std::move(value); }

    /**
     * <p>The health of the data processing for the monitor.</p>
     */
    inline GetMonitorResult& WithProcessingStatus(const MonitorProcessingStatusCode& value) { SetProcessingStatus(value); return *this;}

    /**
     * <p>The health of the data processing for the monitor.</p>
     */
    inline GetMonitorResult& WithProcessingStatus(MonitorProcessingStatusCode&& value) { SetProcessingStatus(std::move(value)); return *this;}


    /**
     * <p>Additional information about the health of the data processing for the
     * monitor.</p>
     */
    inline const Aws::String& GetProcessingStatusInfo() const{ return m_processingStatusInfo; }

    /**
     * <p>Additional information about the health of the data processing for the
     * monitor.</p>
     */
    inline void SetProcessingStatusInfo(const Aws::String& value) { m_processingStatusInfo = value; }

    /**
     * <p>Additional information about the health of the data processing for the
     * monitor.</p>
     */
    inline void SetProcessingStatusInfo(Aws::String&& value) { m_processingStatusInfo = std::move(value); }

    /**
     * <p>Additional information about the health of the data processing for the
     * monitor.</p>
     */
    inline void SetProcessingStatusInfo(const char* value) { m_processingStatusInfo.assign(value); }

    /**
     * <p>Additional information about the health of the data processing for the
     * monitor.</p>
     */
    inline GetMonitorResult& WithProcessingStatusInfo(const Aws::String& value) { SetProcessingStatusInfo(value); return *this;}

    /**
     * <p>Additional information about the health of the data processing for the
     * monitor.</p>
     */
    inline GetMonitorResult& WithProcessingStatusInfo(Aws::String&& value) { SetProcessingStatusInfo(std::move(value)); return *this;}

    /**
     * <p>Additional information about the health of the data processing for the
     * monitor.</p>
     */
    inline GetMonitorResult& WithProcessingStatusInfo(const char* value) { SetProcessingStatusInfo(value); return *this;}


    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline GetMonitorResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline GetMonitorResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline GetMonitorResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline GetMonitorResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline GetMonitorResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline GetMonitorResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline GetMonitorResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline GetMonitorResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that have been added to monitor.</p>
     */
    inline GetMonitorResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


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
    inline int GetMaxCityNetworksToMonitor() const{ return m_maxCityNetworksToMonitor; }

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
    inline void SetMaxCityNetworksToMonitor(int value) { m_maxCityNetworksToMonitor = value; }

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
    inline GetMonitorResult& WithMaxCityNetworksToMonitor(int value) { SetMaxCityNetworksToMonitor(value); return *this;}


    /**
     * <p>Publish internet measurements for Internet Monitor to another location, such
     * as an Amazon S3 bucket. The measurements are also published to Amazon CloudWatch
     * Logs.</p>
     */
    inline const InternetMeasurementsLogDelivery& GetInternetMeasurementsLogDelivery() const{ return m_internetMeasurementsLogDelivery; }

    /**
     * <p>Publish internet measurements for Internet Monitor to another location, such
     * as an Amazon S3 bucket. The measurements are also published to Amazon CloudWatch
     * Logs.</p>
     */
    inline void SetInternetMeasurementsLogDelivery(const InternetMeasurementsLogDelivery& value) { m_internetMeasurementsLogDelivery = value; }

    /**
     * <p>Publish internet measurements for Internet Monitor to another location, such
     * as an Amazon S3 bucket. The measurements are also published to Amazon CloudWatch
     * Logs.</p>
     */
    inline void SetInternetMeasurementsLogDelivery(InternetMeasurementsLogDelivery&& value) { m_internetMeasurementsLogDelivery = std::move(value); }

    /**
     * <p>Publish internet measurements for Internet Monitor to another location, such
     * as an Amazon S3 bucket. The measurements are also published to Amazon CloudWatch
     * Logs.</p>
     */
    inline GetMonitorResult& WithInternetMeasurementsLogDelivery(const InternetMeasurementsLogDelivery& value) { SetInternetMeasurementsLogDelivery(value); return *this;}

    /**
     * <p>Publish internet measurements for Internet Monitor to another location, such
     * as an Amazon S3 bucket. The measurements are also published to Amazon CloudWatch
     * Logs.</p>
     */
    inline GetMonitorResult& WithInternetMeasurementsLogDelivery(InternetMeasurementsLogDelivery&& value) { SetInternetMeasurementsLogDelivery(std::move(value)); return *this;}


    /**
     * <p>The percentage of the internet-facing traffic for your application to monitor
     * with this monitor. If you set a city-networks maximum, that limit overrides the
     * traffic percentage that you set.</p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMTrafficPercentage.html">Choosing
     * an application traffic percentage to monitor </a> in the Amazon CloudWatch
     * Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline int GetTrafficPercentageToMonitor() const{ return m_trafficPercentageToMonitor; }

    /**
     * <p>The percentage of the internet-facing traffic for your application to monitor
     * with this monitor. If you set a city-networks maximum, that limit overrides the
     * traffic percentage that you set.</p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMTrafficPercentage.html">Choosing
     * an application traffic percentage to monitor </a> in the Amazon CloudWatch
     * Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline void SetTrafficPercentageToMonitor(int value) { m_trafficPercentageToMonitor = value; }

    /**
     * <p>The percentage of the internet-facing traffic for your application to monitor
     * with this monitor. If you set a city-networks maximum, that limit overrides the
     * traffic percentage that you set.</p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMTrafficPercentage.html">Choosing
     * an application traffic percentage to monitor </a> in the Amazon CloudWatch
     * Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline GetMonitorResult& WithTrafficPercentageToMonitor(int value) { SetTrafficPercentageToMonitor(value); return *this;}


    /**
     * <p>The list of health event threshold configurations. The threshold percentage
     * for a health score determines, along with other configuration information, when
     * Internet Monitor creates a health event when there's an internet issue that
     * affects your application end users.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-overview.html#IMUpdateThresholdFromOverview">
     * Change health event thresholds</a> in the Internet Monitor section of the
     * <i>CloudWatch User Guide</i>.</p>
     */
    inline const HealthEventsConfig& GetHealthEventsConfig() const{ return m_healthEventsConfig; }

    /**
     * <p>The list of health event threshold configurations. The threshold percentage
     * for a health score determines, along with other configuration information, when
     * Internet Monitor creates a health event when there's an internet issue that
     * affects your application end users.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-overview.html#IMUpdateThresholdFromOverview">
     * Change health event thresholds</a> in the Internet Monitor section of the
     * <i>CloudWatch User Guide</i>.</p>
     */
    inline void SetHealthEventsConfig(const HealthEventsConfig& value) { m_healthEventsConfig = value; }

    /**
     * <p>The list of health event threshold configurations. The threshold percentage
     * for a health score determines, along with other configuration information, when
     * Internet Monitor creates a health event when there's an internet issue that
     * affects your application end users.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-overview.html#IMUpdateThresholdFromOverview">
     * Change health event thresholds</a> in the Internet Monitor section of the
     * <i>CloudWatch User Guide</i>.</p>
     */
    inline void SetHealthEventsConfig(HealthEventsConfig&& value) { m_healthEventsConfig = std::move(value); }

    /**
     * <p>The list of health event threshold configurations. The threshold percentage
     * for a health score determines, along with other configuration information, when
     * Internet Monitor creates a health event when there's an internet issue that
     * affects your application end users.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-overview.html#IMUpdateThresholdFromOverview">
     * Change health event thresholds</a> in the Internet Monitor section of the
     * <i>CloudWatch User Guide</i>.</p>
     */
    inline GetMonitorResult& WithHealthEventsConfig(const HealthEventsConfig& value) { SetHealthEventsConfig(value); return *this;}

    /**
     * <p>The list of health event threshold configurations. The threshold percentage
     * for a health score determines, along with other configuration information, when
     * Internet Monitor creates a health event when there's an internet issue that
     * affects your application end users.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-overview.html#IMUpdateThresholdFromOverview">
     * Change health event thresholds</a> in the Internet Monitor section of the
     * <i>CloudWatch User Guide</i>.</p>
     */
    inline GetMonitorResult& WithHealthEventsConfig(HealthEventsConfig&& value) { SetHealthEventsConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMonitorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMonitorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMonitorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_monitorName;

    Aws::String m_monitorArn;

    Aws::Vector<Aws::String> m_resources;

    MonitorConfigState m_status;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    MonitorProcessingStatusCode m_processingStatus;

    Aws::String m_processingStatusInfo;

    Aws::Map<Aws::String, Aws::String> m_tags;

    int m_maxCityNetworksToMonitor;

    InternetMeasurementsLogDelivery m_internetMeasurementsLogDelivery;

    int m_trafficPercentageToMonitor;

    HealthEventsConfig m_healthEventsConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
