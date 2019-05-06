/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mobileanalytics/MobileAnalytics_EXPORTS.h>
#include <aws/mobileanalytics/MobileAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mobileanalytics/model/Event.h>
#include <utility>

namespace Aws
{
namespace MobileAnalytics
{
namespace Model
{

  /**
   * <p>A container for the data needed for a PutEvent operation</p>
   */
  class AWS_MOBILEANALYTICS_API PutEventsRequest : public MobileAnalyticsRequest
  {
  public:
    PutEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEvents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of Event JSON objects</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }

    /**
     * <p>An array of Event JSON objects</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>An array of Event JSON objects</p>
     */
    inline void SetEvents(const Aws::Vector<Event>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>An array of Event JSON objects</p>
     */
    inline void SetEvents(Aws::Vector<Event>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>An array of Event JSON objects</p>
     */
    inline PutEventsRequest& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    /**
     * <p>An array of Event JSON objects</p>
     */
    inline PutEventsRequest& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>An array of Event JSON objects</p>
     */
    inline PutEventsRequest& AddEvents(const Event& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>An array of Event JSON objects</p>
     */
    inline PutEventsRequest& AddEvents(Event&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>The client context including the client ID, app title, app version and
     * package name.</p>
     */
    inline const Aws::String& GetClientContext() const{ return m_clientContext; }

    /**
     * <p>The client context including the client ID, app title, app version and
     * package name.</p>
     */
    inline bool ClientContextHasBeenSet() const { return m_clientContextHasBeenSet; }

    /**
     * <p>The client context including the client ID, app title, app version and
     * package name.</p>
     */
    inline void SetClientContext(const Aws::String& value) { m_clientContextHasBeenSet = true; m_clientContext = value; }

    /**
     * <p>The client context including the client ID, app title, app version and
     * package name.</p>
     */
    inline void SetClientContext(Aws::String&& value) { m_clientContextHasBeenSet = true; m_clientContext = std::move(value); }

    /**
     * <p>The client context including the client ID, app title, app version and
     * package name.</p>
     */
    inline void SetClientContext(const char* value) { m_clientContextHasBeenSet = true; m_clientContext.assign(value); }

    /**
     * <p>The client context including the client ID, app title, app version and
     * package name.</p>
     */
    inline PutEventsRequest& WithClientContext(const Aws::String& value) { SetClientContext(value); return *this;}

    /**
     * <p>The client context including the client ID, app title, app version and
     * package name.</p>
     */
    inline PutEventsRequest& WithClientContext(Aws::String&& value) { SetClientContext(std::move(value)); return *this;}

    /**
     * <p>The client context including the client ID, app title, app version and
     * package name.</p>
     */
    inline PutEventsRequest& WithClientContext(const char* value) { SetClientContext(value); return *this;}


    /**
     * <p>The encoding used for the client context.</p>
     */
    inline const Aws::String& GetClientContextEncoding() const{ return m_clientContextEncoding; }

    /**
     * <p>The encoding used for the client context.</p>
     */
    inline bool ClientContextEncodingHasBeenSet() const { return m_clientContextEncodingHasBeenSet; }

    /**
     * <p>The encoding used for the client context.</p>
     */
    inline void SetClientContextEncoding(const Aws::String& value) { m_clientContextEncodingHasBeenSet = true; m_clientContextEncoding = value; }

    /**
     * <p>The encoding used for the client context.</p>
     */
    inline void SetClientContextEncoding(Aws::String&& value) { m_clientContextEncodingHasBeenSet = true; m_clientContextEncoding = std::move(value); }

    /**
     * <p>The encoding used for the client context.</p>
     */
    inline void SetClientContextEncoding(const char* value) { m_clientContextEncodingHasBeenSet = true; m_clientContextEncoding.assign(value); }

    /**
     * <p>The encoding used for the client context.</p>
     */
    inline PutEventsRequest& WithClientContextEncoding(const Aws::String& value) { SetClientContextEncoding(value); return *this;}

    /**
     * <p>The encoding used for the client context.</p>
     */
    inline PutEventsRequest& WithClientContextEncoding(Aws::String&& value) { SetClientContextEncoding(std::move(value)); return *this;}

    /**
     * <p>The encoding used for the client context.</p>
     */
    inline PutEventsRequest& WithClientContextEncoding(const char* value) { SetClientContextEncoding(value); return *this;}

  private:

    Aws::Vector<Event> m_events;
    bool m_eventsHasBeenSet;

    Aws::String m_clientContext;
    bool m_clientContextHasBeenSet;

    Aws::String m_clientContextEncoding;
    bool m_clientContextEncodingHasBeenSet;
  };

} // namespace Model
} // namespace MobileAnalytics
} // namespace Aws
