/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ResourceCollection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devops-guru/model/EventDataSource.h>
#include <aws/devops-guru/model/EventClass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/EventResource.h>
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
   * <p> An Amazon Web Services resource event. Amazon Web Services resource events
   * and metrics are analyzed by DevOps Guru to find anomalous behavior and provide
   * recommendations to improve your operational solutions. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/Event">AWS
   * API Reference</a></p>
   */
  class Event
  {
  public:
    AWS_DEVOPSGURU_API Event() = default;
    AWS_DEVOPSGURU_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = ResourceCollection>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollection>
    Event& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the event. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Event& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>Timestamp</code> that specifies the time the event occurred. </p>
     */
    inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::Utils::DateTime>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::Utils::DateTime>
    Event& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services source that emitted the event. </p>
     */
    inline const Aws::String& GetEventSource() const { return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    template<typename EventSourceT = Aws::String>
    void SetEventSource(EventSourceT&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::forward<EventSourceT>(value); }
    template<typename EventSourceT = Aws::String>
    Event& WithEventSource(EventSourceT&& value) { SetEventSource(std::forward<EventSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the event. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Event& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source, <code>AWS_CLOUD_TRAIL</code> or <code>AWS_CODE_DEPLOY</code>,
     * where DevOps Guru analysis found the event. </p>
     */
    inline EventDataSource GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(EventDataSource value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline Event& WithDataSource(EventDataSource value) { SetDataSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The class of the event. The class specifies what the event is related to,
     * such as an infrastructure change, a deployment, or a schema change. </p>
     */
    inline EventClass GetEventClass() const { return m_eventClass; }
    inline bool EventClassHasBeenSet() const { return m_eventClassHasBeenSet; }
    inline void SetEventClass(EventClass value) { m_eventClassHasBeenSet = true; m_eventClass = value; }
    inline Event& WithEventClass(EventClass value) { SetEventClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An <code>EventResource</code> object that contains information about the
     * resource that emitted the event. </p>
     */
    inline const Aws::Vector<EventResource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<EventResource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<EventResource>>
    Event& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = EventResource>
    Event& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}
  private:

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_time{};
    bool m_timeHasBeenSet = false;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EventDataSource m_dataSource{EventDataSource::NOT_SET};
    bool m_dataSourceHasBeenSet = false;

    EventClass m_eventClass{EventClass::NOT_SET};
    bool m_eventClassHasBeenSet = false;

    Aws::Vector<EventResource> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
