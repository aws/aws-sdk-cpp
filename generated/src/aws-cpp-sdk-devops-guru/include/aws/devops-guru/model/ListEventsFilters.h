/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/EventTimeRange.h>
#include <aws/devops-guru/model/EventClass.h>
#include <aws/devops-guru/model/EventDataSource.h>
#include <aws/devops-guru/model/ResourceCollection.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Filters you can use to specify which events are returned when
   * <code>ListEvents</code> is called. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListEventsFilters">AWS
   * API Reference</a></p>
   */
  class ListEventsFilters
  {
  public:
    AWS_DEVOPSGURU_API ListEventsFilters() = default;
    AWS_DEVOPSGURU_API ListEventsFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ListEventsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An ID of an insight that is related to the events you want to filter for.
     * </p>
     */
    inline const Aws::String& GetInsightId() const { return m_insightId; }
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }
    template<typename InsightIdT = Aws::String>
    void SetInsightId(InsightIdT&& value) { m_insightIdHasBeenSet = true; m_insightId = std::forward<InsightIdT>(value); }
    template<typename InsightIdT = Aws::String>
    ListEventsFilters& WithInsightId(InsightIdT&& value) { SetInsightId(std::forward<InsightIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A time range during which you want the filtered events to have occurred.
     * </p>
     */
    inline const EventTimeRange& GetEventTimeRange() const { return m_eventTimeRange; }
    inline bool EventTimeRangeHasBeenSet() const { return m_eventTimeRangeHasBeenSet; }
    template<typename EventTimeRangeT = EventTimeRange>
    void SetEventTimeRange(EventTimeRangeT&& value) { m_eventTimeRangeHasBeenSet = true; m_eventTimeRange = std::forward<EventTimeRangeT>(value); }
    template<typename EventTimeRangeT = EventTimeRange>
    ListEventsFilters& WithEventTimeRange(EventTimeRangeT&& value) { SetEventTimeRange(std::forward<EventTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The class of the events you want to filter for, such as an infrastructure
     * change, a deployment, or a schema change. </p>
     */
    inline EventClass GetEventClass() const { return m_eventClass; }
    inline bool EventClassHasBeenSet() const { return m_eventClassHasBeenSet; }
    inline void SetEventClass(EventClass value) { m_eventClassHasBeenSet = true; m_eventClass = value; }
    inline ListEventsFilters& WithEventClass(EventClass value) { SetEventClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services source that emitted the events you want to filter
     * for. </p>
     */
    inline const Aws::String& GetEventSource() const { return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    template<typename EventSourceT = Aws::String>
    void SetEventSource(EventSourceT&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::forward<EventSourceT>(value); }
    template<typename EventSourceT = Aws::String>
    ListEventsFilters& WithEventSource(EventSourceT&& value) { SetEventSource(std::forward<EventSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source, <code>AWS_CLOUD_TRAIL</code> or <code>AWS_CODE_DEPLOY</code>, of
     * the events you want returned. </p>
     */
    inline EventDataSource GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(EventDataSource value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline ListEventsFilters& WithDataSource(EventDataSource value) { SetDataSource(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = ResourceCollection>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollection>
    ListEventsFilters& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    EventTimeRange m_eventTimeRange;
    bool m_eventTimeRangeHasBeenSet = false;

    EventClass m_eventClass{EventClass::NOT_SET};
    bool m_eventClassHasBeenSet = false;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    EventDataSource m_dataSource{EventDataSource::NOT_SET};
    bool m_dataSourceHasBeenSet = false;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
