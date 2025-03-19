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
    AWS_APPLICATIONINSIGHTS_API ConfigurationEvent() = default;
    AWS_APPLICATIONINSIGHTS_API ConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API ConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource group of the application to which the configuration
     * event belongs.</p>
     */
    inline const Aws::String& GetResourceGroupName() const { return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    template<typename ResourceGroupNameT = Aws::String>
    void SetResourceGroupName(ResourceGroupNameT&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::forward<ResourceGroupNameT>(value); }
    template<typename ResourceGroupNameT = Aws::String>
    ConfigurationEvent& WithResourceGroupName(ResourceGroupNameT&& value) { SetResourceGroupName(std::forward<ResourceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the owner of the application to which
     * the configuration event belongs.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ConfigurationEvent& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The resource monitored by Application Insights. </p>
     */
    inline const Aws::String& GetMonitoredResourceARN() const { return m_monitoredResourceARN; }
    inline bool MonitoredResourceARNHasBeenSet() const { return m_monitoredResourceARNHasBeenSet; }
    template<typename MonitoredResourceARNT = Aws::String>
    void SetMonitoredResourceARN(MonitoredResourceARNT&& value) { m_monitoredResourceARNHasBeenSet = true; m_monitoredResourceARN = std::forward<MonitoredResourceARNT>(value); }
    template<typename MonitoredResourceARNT = Aws::String>
    ConfigurationEvent& WithMonitoredResourceARN(MonitoredResourceARNT&& value) { SetMonitoredResourceARN(std::forward<MonitoredResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR. </p>
     */
    inline ConfigurationEventStatus GetEventStatus() const { return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(ConfigurationEventStatus value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline ConfigurationEvent& WithEventStatus(ConfigurationEventStatus value) { SetEventStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The resource type that Application Insights attempted to configure, for
     * example, CLOUDWATCH_ALARM. </p>
     */
    inline ConfigurationEventResourceType GetEventResourceType() const { return m_eventResourceType; }
    inline bool EventResourceTypeHasBeenSet() const { return m_eventResourceTypeHasBeenSet; }
    inline void SetEventResourceType(ConfigurationEventResourceType value) { m_eventResourceTypeHasBeenSet = true; m_eventResourceType = value; }
    inline ConfigurationEvent& WithEventResourceType(ConfigurationEventResourceType value) { SetEventResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the event. </p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    ConfigurationEvent& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the event in plain text. </p>
     */
    inline const Aws::String& GetEventDetail() const { return m_eventDetail; }
    inline bool EventDetailHasBeenSet() const { return m_eventDetailHasBeenSet; }
    template<typename EventDetailT = Aws::String>
    void SetEventDetail(EventDetailT&& value) { m_eventDetailHasBeenSet = true; m_eventDetail = std::forward<EventDetailT>(value); }
    template<typename EventDetailT = Aws::String>
    ConfigurationEvent& WithEventDetail(EventDetailT&& value) { SetEventDetail(std::forward<EventDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the resource Application Insights attempted to configure. </p>
     */
    inline const Aws::String& GetEventResourceName() const { return m_eventResourceName; }
    inline bool EventResourceNameHasBeenSet() const { return m_eventResourceNameHasBeenSet; }
    template<typename EventResourceNameT = Aws::String>
    void SetEventResourceName(EventResourceNameT&& value) { m_eventResourceNameHasBeenSet = true; m_eventResourceName = std::forward<EventResourceNameT>(value); }
    template<typename EventResourceNameT = Aws::String>
    ConfigurationEvent& WithEventResourceName(EventResourceNameT&& value) { SetEventResourceName(std::forward<EventResourceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_monitoredResourceARN;
    bool m_monitoredResourceARNHasBeenSet = false;

    ConfigurationEventStatus m_eventStatus{ConfigurationEventStatus::NOT_SET};
    bool m_eventStatusHasBeenSet = false;

    ConfigurationEventResourceType m_eventResourceType{ConfigurationEventResourceType::NOT_SET};
    bool m_eventResourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_eventDetail;
    bool m_eventDetailHasBeenSet = false;

    Aws::String m_eventResourceName;
    bool m_eventResourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
