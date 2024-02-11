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
    AWS_INTERNETMONITOR_API CreateMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMonitor"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the monitor. </p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor. </p>
     */
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }

    /**
     * <p>The name of the monitor. </p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }

    /**
     * <p>The name of the monitor. </p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor. </p>
     */
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor. </p>
     */
    inline CreateMonitorRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor. </p>
     */
    inline CreateMonitorRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor. </p>
     */
    inline CreateMonitorRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

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
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

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
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

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
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

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
    inline CreateMonitorRequest& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

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
    inline CreateMonitorRequest& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

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
    inline CreateMonitorRequest& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

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
    inline CreateMonitorRequest& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

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
    inline CreateMonitorRequest& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }


    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline CreateMonitorRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline CreateMonitorRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline CreateMonitorRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline CreateMonitorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline CreateMonitorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for a monitor. You can add a maximum of 50 tags in Internet
     * Monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline int GetMaxCityNetworksToMonitor() const{ return m_maxCityNetworksToMonitor; }

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
    inline bool MaxCityNetworksToMonitorHasBeenSet() const { return m_maxCityNetworksToMonitorHasBeenSet; }

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
    inline void SetMaxCityNetworksToMonitor(int value) { m_maxCityNetworksToMonitorHasBeenSet = true; m_maxCityNetworksToMonitor = value; }

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
    inline CreateMonitorRequest& WithMaxCityNetworksToMonitor(int value) { SetMaxCityNetworksToMonitor(value); return *this;}


    /**
     * <p>Publish internet measurements for Internet Monitor to an Amazon S3 bucket in
     * addition to CloudWatch Logs.</p>
     */
    inline const InternetMeasurementsLogDelivery& GetInternetMeasurementsLogDelivery() const{ return m_internetMeasurementsLogDelivery; }

    /**
     * <p>Publish internet measurements for Internet Monitor to an Amazon S3 bucket in
     * addition to CloudWatch Logs.</p>
     */
    inline bool InternetMeasurementsLogDeliveryHasBeenSet() const { return m_internetMeasurementsLogDeliveryHasBeenSet; }

    /**
     * <p>Publish internet measurements for Internet Monitor to an Amazon S3 bucket in
     * addition to CloudWatch Logs.</p>
     */
    inline void SetInternetMeasurementsLogDelivery(const InternetMeasurementsLogDelivery& value) { m_internetMeasurementsLogDeliveryHasBeenSet = true; m_internetMeasurementsLogDelivery = value; }

    /**
     * <p>Publish internet measurements for Internet Monitor to an Amazon S3 bucket in
     * addition to CloudWatch Logs.</p>
     */
    inline void SetInternetMeasurementsLogDelivery(InternetMeasurementsLogDelivery&& value) { m_internetMeasurementsLogDeliveryHasBeenSet = true; m_internetMeasurementsLogDelivery = std::move(value); }

    /**
     * <p>Publish internet measurements for Internet Monitor to an Amazon S3 bucket in
     * addition to CloudWatch Logs.</p>
     */
    inline CreateMonitorRequest& WithInternetMeasurementsLogDelivery(const InternetMeasurementsLogDelivery& value) { SetInternetMeasurementsLogDelivery(value); return *this;}

    /**
     * <p>Publish internet measurements for Internet Monitor to an Amazon S3 bucket in
     * addition to CloudWatch Logs.</p>
     */
    inline CreateMonitorRequest& WithInternetMeasurementsLogDelivery(InternetMeasurementsLogDelivery&& value) { SetInternetMeasurementsLogDelivery(std::move(value)); return *this;}


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

    /**
     * <p>The percentage of the internet-facing traffic for your application that you
     * want to monitor with this monitor. If you set a city-networks maximum, that
     * limit overrides the traffic percentage that you set.</p> <p>To learn more, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMTrafficPercentage.html">Choosing
     * an application traffic percentage to monitor </a> in the Amazon CloudWatch
     * Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline bool TrafficPercentageToMonitorHasBeenSet() const { return m_trafficPercentageToMonitorHasBeenSet; }

    /**
     * <p>The percentage of the internet-facing traffic for your application that you
     * want to monitor with this monitor. If you set a city-networks maximum, that
     * limit overrides the traffic percentage that you set.</p> <p>To learn more, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMTrafficPercentage.html">Choosing
     * an application traffic percentage to monitor </a> in the Amazon CloudWatch
     * Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline void SetTrafficPercentageToMonitor(int value) { m_trafficPercentageToMonitorHasBeenSet = true; m_trafficPercentageToMonitor = value; }

    /**
     * <p>The percentage of the internet-facing traffic for your application that you
     * want to monitor with this monitor. If you set a city-networks maximum, that
     * limit overrides the traffic percentage that you set.</p> <p>To learn more, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMTrafficPercentage.html">Choosing
     * an application traffic percentage to monitor </a> in the Amazon CloudWatch
     * Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline CreateMonitorRequest& WithTrafficPercentageToMonitor(int value) { SetTrafficPercentageToMonitor(value); return *this;}


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
    inline const HealthEventsConfig& GetHealthEventsConfig() const{ return m_healthEventsConfig; }

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
    inline bool HealthEventsConfigHasBeenSet() const { return m_healthEventsConfigHasBeenSet; }

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
    inline void SetHealthEventsConfig(const HealthEventsConfig& value) { m_healthEventsConfigHasBeenSet = true; m_healthEventsConfig = value; }

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
    inline void SetHealthEventsConfig(HealthEventsConfig&& value) { m_healthEventsConfigHasBeenSet = true; m_healthEventsConfig = std::move(value); }

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
    inline CreateMonitorRequest& WithHealthEventsConfig(const HealthEventsConfig& value) { SetHealthEventsConfig(value); return *this;}

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
    inline CreateMonitorRequest& WithHealthEventsConfig(HealthEventsConfig&& value) { SetHealthEventsConfig(std::move(value)); return *this;}

  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

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
