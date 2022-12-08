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
    AWS_DEVOPSGURU_API ListEventsFilters();
    AWS_DEVOPSGURU_API ListEventsFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ListEventsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An ID of an insight that is related to the events you want to filter for.
     * </p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    /**
     * <p> An ID of an insight that is related to the events you want to filter for.
     * </p>
     */
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }

    /**
     * <p> An ID of an insight that is related to the events you want to filter for.
     * </p>
     */
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }

    /**
     * <p> An ID of an insight that is related to the events you want to filter for.
     * </p>
     */
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }

    /**
     * <p> An ID of an insight that is related to the events you want to filter for.
     * </p>
     */
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }

    /**
     * <p> An ID of an insight that is related to the events you want to filter for.
     * </p>
     */
    inline ListEventsFilters& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    /**
     * <p> An ID of an insight that is related to the events you want to filter for.
     * </p>
     */
    inline ListEventsFilters& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    /**
     * <p> An ID of an insight that is related to the events you want to filter for.
     * </p>
     */
    inline ListEventsFilters& WithInsightId(const char* value) { SetInsightId(value); return *this;}


    /**
     * <p> A time range during which you want the filtered events to have occurred.
     * </p>
     */
    inline const EventTimeRange& GetEventTimeRange() const{ return m_eventTimeRange; }

    /**
     * <p> A time range during which you want the filtered events to have occurred.
     * </p>
     */
    inline bool EventTimeRangeHasBeenSet() const { return m_eventTimeRangeHasBeenSet; }

    /**
     * <p> A time range during which you want the filtered events to have occurred.
     * </p>
     */
    inline void SetEventTimeRange(const EventTimeRange& value) { m_eventTimeRangeHasBeenSet = true; m_eventTimeRange = value; }

    /**
     * <p> A time range during which you want the filtered events to have occurred.
     * </p>
     */
    inline void SetEventTimeRange(EventTimeRange&& value) { m_eventTimeRangeHasBeenSet = true; m_eventTimeRange = std::move(value); }

    /**
     * <p> A time range during which you want the filtered events to have occurred.
     * </p>
     */
    inline ListEventsFilters& WithEventTimeRange(const EventTimeRange& value) { SetEventTimeRange(value); return *this;}

    /**
     * <p> A time range during which you want the filtered events to have occurred.
     * </p>
     */
    inline ListEventsFilters& WithEventTimeRange(EventTimeRange&& value) { SetEventTimeRange(std::move(value)); return *this;}


    /**
     * <p> The class of the events you want to filter for, such as an infrastructure
     * change, a deployment, or a schema change. </p>
     */
    inline const EventClass& GetEventClass() const{ return m_eventClass; }

    /**
     * <p> The class of the events you want to filter for, such as an infrastructure
     * change, a deployment, or a schema change. </p>
     */
    inline bool EventClassHasBeenSet() const { return m_eventClassHasBeenSet; }

    /**
     * <p> The class of the events you want to filter for, such as an infrastructure
     * change, a deployment, or a schema change. </p>
     */
    inline void SetEventClass(const EventClass& value) { m_eventClassHasBeenSet = true; m_eventClass = value; }

    /**
     * <p> The class of the events you want to filter for, such as an infrastructure
     * change, a deployment, or a schema change. </p>
     */
    inline void SetEventClass(EventClass&& value) { m_eventClassHasBeenSet = true; m_eventClass = std::move(value); }

    /**
     * <p> The class of the events you want to filter for, such as an infrastructure
     * change, a deployment, or a schema change. </p>
     */
    inline ListEventsFilters& WithEventClass(const EventClass& value) { SetEventClass(value); return *this;}

    /**
     * <p> The class of the events you want to filter for, such as an infrastructure
     * change, a deployment, or a schema change. </p>
     */
    inline ListEventsFilters& WithEventClass(EventClass&& value) { SetEventClass(std::move(value)); return *this;}


    /**
     * <p> The Amazon Web Services source that emitted the events you want to filter
     * for. </p>
     */
    inline const Aws::String& GetEventSource() const{ return m_eventSource; }

    /**
     * <p> The Amazon Web Services source that emitted the events you want to filter
     * for. </p>
     */
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    /**
     * <p> The Amazon Web Services source that emitted the events you want to filter
     * for. </p>
     */
    inline void SetEventSource(const Aws::String& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p> The Amazon Web Services source that emitted the events you want to filter
     * for. </p>
     */
    inline void SetEventSource(Aws::String&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    /**
     * <p> The Amazon Web Services source that emitted the events you want to filter
     * for. </p>
     */
    inline void SetEventSource(const char* value) { m_eventSourceHasBeenSet = true; m_eventSource.assign(value); }

    /**
     * <p> The Amazon Web Services source that emitted the events you want to filter
     * for. </p>
     */
    inline ListEventsFilters& WithEventSource(const Aws::String& value) { SetEventSource(value); return *this;}

    /**
     * <p> The Amazon Web Services source that emitted the events you want to filter
     * for. </p>
     */
    inline ListEventsFilters& WithEventSource(Aws::String&& value) { SetEventSource(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services source that emitted the events you want to filter
     * for. </p>
     */
    inline ListEventsFilters& WithEventSource(const char* value) { SetEventSource(value); return *this;}


    /**
     * <p> The source, <code>AWS_CLOUD_TRAIL</code> or <code>AWS_CODE_DEPLOY</code>, of
     * the events you want returned. </p>
     */
    inline const EventDataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p> The source, <code>AWS_CLOUD_TRAIL</code> or <code>AWS_CODE_DEPLOY</code>, of
     * the events you want returned. </p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p> The source, <code>AWS_CLOUD_TRAIL</code> or <code>AWS_CODE_DEPLOY</code>, of
     * the events you want returned. </p>
     */
    inline void SetDataSource(const EventDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p> The source, <code>AWS_CLOUD_TRAIL</code> or <code>AWS_CODE_DEPLOY</code>, of
     * the events you want returned. </p>
     */
    inline void SetDataSource(EventDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p> The source, <code>AWS_CLOUD_TRAIL</code> or <code>AWS_CODE_DEPLOY</code>, of
     * the events you want returned. </p>
     */
    inline ListEventsFilters& WithDataSource(const EventDataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p> The source, <code>AWS_CLOUD_TRAIL</code> or <code>AWS_CODE_DEPLOY</code>, of
     * the events you want returned. </p>
     */
    inline ListEventsFilters& WithDataSource(EventDataSource&& value) { SetDataSource(std::move(value)); return *this;}


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline ListEventsFilters& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline ListEventsFilters& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}

  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    EventTimeRange m_eventTimeRange;
    bool m_eventTimeRangeHasBeenSet = false;

    EventClass m_eventClass;
    bool m_eventClassHasBeenSet = false;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    EventDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
