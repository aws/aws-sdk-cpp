/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/ConfigurationEventStatus.h>
#include <aws/application-insights/model/ConfigurationEventResourceType.h>
#include <aws/core/utils/DateTime.h>
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
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p> The event information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ConfigurationEvent">AWS
   * API Reference</a></p>
   */
  class ConfigurationEvent
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ConfigurationEvent();
    AWS_APPLICATIONINSIGHTS_API ConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API ConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource group of the application to which the configuration
     * event belongs.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }
    inline ConfigurationEvent& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline ConfigurationEvent& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline ConfigurationEvent& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the owner of the application to which
     * the configuration event belongs.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ConfigurationEvent& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ConfigurationEvent& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ConfigurationEvent& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The resource monitored by Application Insights. </p>
     */
    inline const Aws::String& GetMonitoredResourceARN() const{ return m_monitoredResourceARN; }
    inline bool MonitoredResourceARNHasBeenSet() const { return m_monitoredResourceARNHasBeenSet; }
    inline void SetMonitoredResourceARN(const Aws::String& value) { m_monitoredResourceARNHasBeenSet = true; m_monitoredResourceARN = value; }
    inline void SetMonitoredResourceARN(Aws::String&& value) { m_monitoredResourceARNHasBeenSet = true; m_monitoredResourceARN = std::move(value); }
    inline void SetMonitoredResourceARN(const char* value) { m_monitoredResourceARNHasBeenSet = true; m_monitoredResourceARN.assign(value); }
    inline ConfigurationEvent& WithMonitoredResourceARN(const Aws::String& value) { SetMonitoredResourceARN(value); return *this;}
    inline ConfigurationEvent& WithMonitoredResourceARN(Aws::String&& value) { SetMonitoredResourceARN(std::move(value)); return *this;}
    inline ConfigurationEvent& WithMonitoredResourceARN(const char* value) { SetMonitoredResourceARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR. </p>
     */
    inline const ConfigurationEventStatus& GetEventStatus() const{ return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(const ConfigurationEventStatus& value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline void SetEventStatus(ConfigurationEventStatus&& value) { m_eventStatusHasBeenSet = true; m_eventStatus = std::move(value); }
    inline ConfigurationEvent& WithEventStatus(const ConfigurationEventStatus& value) { SetEventStatus(value); return *this;}
    inline ConfigurationEvent& WithEventStatus(ConfigurationEventStatus&& value) { SetEventStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The resource type that Application Insights attempted to configure, for
     * example, CLOUDWATCH_ALARM. </p>
     */
    inline const ConfigurationEventResourceType& GetEventResourceType() const{ return m_eventResourceType; }
    inline bool EventResourceTypeHasBeenSet() const { return m_eventResourceTypeHasBeenSet; }
    inline void SetEventResourceType(const ConfigurationEventResourceType& value) { m_eventResourceTypeHasBeenSet = true; m_eventResourceType = value; }
    inline void SetEventResourceType(ConfigurationEventResourceType&& value) { m_eventResourceTypeHasBeenSet = true; m_eventResourceType = std::move(value); }
    inline ConfigurationEvent& WithEventResourceType(const ConfigurationEventResourceType& value) { SetEventResourceType(value); return *this;}
    inline ConfigurationEvent& WithEventResourceType(ConfigurationEventResourceType&& value) { SetEventResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the event. </p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }
    inline ConfigurationEvent& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}
    inline ConfigurationEvent& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the event in plain text. </p>
     */
    inline const Aws::String& GetEventDetail() const{ return m_eventDetail; }
    inline bool EventDetailHasBeenSet() const { return m_eventDetailHasBeenSet; }
    inline void SetEventDetail(const Aws::String& value) { m_eventDetailHasBeenSet = true; m_eventDetail = value; }
    inline void SetEventDetail(Aws::String&& value) { m_eventDetailHasBeenSet = true; m_eventDetail = std::move(value); }
    inline void SetEventDetail(const char* value) { m_eventDetailHasBeenSet = true; m_eventDetail.assign(value); }
    inline ConfigurationEvent& WithEventDetail(const Aws::String& value) { SetEventDetail(value); return *this;}
    inline ConfigurationEvent& WithEventDetail(Aws::String&& value) { SetEventDetail(std::move(value)); return *this;}
    inline ConfigurationEvent& WithEventDetail(const char* value) { SetEventDetail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the resource Application Insights attempted to configure. </p>
     */
    inline const Aws::String& GetEventResourceName() const{ return m_eventResourceName; }
    inline bool EventResourceNameHasBeenSet() const { return m_eventResourceNameHasBeenSet; }
    inline void SetEventResourceName(const Aws::String& value) { m_eventResourceNameHasBeenSet = true; m_eventResourceName = value; }
    inline void SetEventResourceName(Aws::String&& value) { m_eventResourceNameHasBeenSet = true; m_eventResourceName = std::move(value); }
    inline void SetEventResourceName(const char* value) { m_eventResourceNameHasBeenSet = true; m_eventResourceName.assign(value); }
    inline ConfigurationEvent& WithEventResourceName(const Aws::String& value) { SetEventResourceName(value); return *this;}
    inline ConfigurationEvent& WithEventResourceName(Aws::String&& value) { SetEventResourceName(std::move(value)); return *this;}
    inline ConfigurationEvent& WithEventResourceName(const char* value) { SetEventResourceName(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_monitoredResourceARN;
    bool m_monitoredResourceARNHasBeenSet = false;

    ConfigurationEventStatus m_eventStatus;
    bool m_eventStatusHasBeenSet = false;

    ConfigurationEventResourceType m_eventResourceType;
    bool m_eventResourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_eventDetail;
    bool m_eventDetailHasBeenSet = false;

    Aws::String m_eventResourceName;
    bool m_eventResourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
