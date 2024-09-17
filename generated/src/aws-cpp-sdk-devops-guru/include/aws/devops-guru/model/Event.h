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
    AWS_DEVOPSGURU_API Event();
    AWS_DEVOPSGURU_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }
    inline Event& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}
    inline Event& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the event. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Event& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Event& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Event& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>Timestamp</code> that specifies the time the event occurred. </p>
     */
    inline const Aws::Utils::DateTime& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline Event& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}
    inline Event& WithTime(Aws::Utils::DateTime&& value) { SetTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services source that emitted the event. </p>
     */
    inline const Aws::String& GetEventSource() const{ return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    inline void SetEventSource(const Aws::String& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }
    inline void SetEventSource(Aws::String&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }
    inline void SetEventSource(const char* value) { m_eventSourceHasBeenSet = true; m_eventSource.assign(value); }
    inline Event& WithEventSource(const Aws::String& value) { SetEventSource(value); return *this;}
    inline Event& WithEventSource(Aws::String&& value) { SetEventSource(std::move(value)); return *this;}
    inline Event& WithEventSource(const char* value) { SetEventSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the event. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Event& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Event& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Event& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source, <code>AWS_CLOUD_TRAIL</code> or <code>AWS_CODE_DEPLOY</code>,
     * where DevOps Guru analysis found the event. </p>
     */
    inline const EventDataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const EventDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(EventDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline Event& WithDataSource(const EventDataSource& value) { SetDataSource(value); return *this;}
    inline Event& WithDataSource(EventDataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The class of the event. The class specifies what the event is related to,
     * such as an infrastructure change, a deployment, or a schema change. </p>
     */
    inline const EventClass& GetEventClass() const{ return m_eventClass; }
    inline bool EventClassHasBeenSet() const { return m_eventClassHasBeenSet; }
    inline void SetEventClass(const EventClass& value) { m_eventClassHasBeenSet = true; m_eventClass = value; }
    inline void SetEventClass(EventClass&& value) { m_eventClassHasBeenSet = true; m_eventClass = std::move(value); }
    inline Event& WithEventClass(const EventClass& value) { SetEventClass(value); return *this;}
    inline Event& WithEventClass(EventClass&& value) { SetEventClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An <code>EventResource</code> object that contains information about the
     * resource that emitted the event. </p>
     */
    inline const Aws::Vector<EventResource>& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const Aws::Vector<EventResource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(Aws::Vector<EventResource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline Event& WithResources(const Aws::Vector<EventResource>& value) { SetResources(value); return *this;}
    inline Event& WithResources(Aws::Vector<EventResource>&& value) { SetResources(std::move(value)); return *this;}
    inline Event& AddResources(const EventResource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }
    inline Event& AddResources(EventResource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_time;
    bool m_timeHasBeenSet = false;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EventDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    EventClass m_eventClass;
    bool m_eventClassHasBeenSet = false;

    Aws::Vector<EventResource> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
