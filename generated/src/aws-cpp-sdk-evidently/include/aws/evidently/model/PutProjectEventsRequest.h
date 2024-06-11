/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/Event.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class PutProjectEventsRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API PutProjectEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutProjectEvents"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of event structures that contain the performance data that is being
     * sent to Evidently.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::Vector<Event>& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::Vector<Event>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline PutProjectEventsRequest& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}
    inline PutProjectEventsRequest& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}
    inline PutProjectEventsRequest& AddEvents(const Event& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    inline PutProjectEventsRequest& AddEvents(Event&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project to write the events to.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }
    inline PutProjectEventsRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}
    inline PutProjectEventsRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}
    inline PutProjectEventsRequest& WithProject(const char* value) { SetProject(value); return *this;}
    ///@}
  private:

    Aws::Vector<Event> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
