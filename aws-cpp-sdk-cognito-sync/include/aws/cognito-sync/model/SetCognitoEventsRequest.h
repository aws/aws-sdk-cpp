﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

  /**
   * <p>A request to configure Cognito Events"</p>"
   */
  class AWS_COGNITOSYNC_API SetCognitoEventsRequest : public CognitoSyncRequest
  {
  public:
    SetCognitoEventsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Cognito Identity Pool to use when configuring Cognito Events</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>The Cognito Identity Pool to use when configuring Cognito Events</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>The Cognito Identity Pool to use when configuring Cognito Events</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>The Cognito Identity Pool to use when configuring Cognito Events</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>The Cognito Identity Pool to use when configuring Cognito Events</p>
     */
    inline SetCognitoEventsRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>The Cognito Identity Pool to use when configuring Cognito Events</p>
     */
    inline SetCognitoEventsRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>The Cognito Identity Pool to use when configuring Cognito Events</p>
     */
    inline SetCognitoEventsRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>The events to configure</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEvents() const{ return m_events; }

    /**
     * <p>The events to configure</p>
     */
    inline void SetEvents(const Aws::Map<Aws::String, Aws::String>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The events to configure</p>
     */
    inline void SetEvents(Aws::Map<Aws::String, Aws::String>&& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The events to configure</p>
     */
    inline SetCognitoEventsRequest& WithEvents(const Aws::Map<Aws::String, Aws::String>& value) { SetEvents(value); return *this;}

    /**
     * <p>The events to configure</p>
     */
    inline SetCognitoEventsRequest& WithEvents(Aws::Map<Aws::String, Aws::String>&& value) { SetEvents(value); return *this;}

    /**
     * <p>The events to configure</p>
     */
    inline SetCognitoEventsRequest& AddEvents(const Aws::String& key, const Aws::String& value) { m_eventsHasBeenSet = true; m_events[key] = value; return *this; }

    /**
     * <p>The events to configure</p>
     */
    inline SetCognitoEventsRequest& AddEvents(Aws::String&& key, const Aws::String& value) { m_eventsHasBeenSet = true; m_events[key] = value; return *this; }

    /**
     * <p>The events to configure</p>
     */
    inline SetCognitoEventsRequest& AddEvents(const Aws::String& key, Aws::String&& value) { m_eventsHasBeenSet = true; m_events[key] = value; return *this; }

    /**
     * <p>The events to configure</p>
     */
    inline SetCognitoEventsRequest& AddEvents(Aws::String&& key, Aws::String&& value) { m_eventsHasBeenSet = true; m_events[key] = value; return *this; }

    /**
     * <p>The events to configure</p>
     */
    inline SetCognitoEventsRequest& AddEvents(const char* key, Aws::String&& value) { m_eventsHasBeenSet = true; m_events[key] = value; return *this; }

    /**
     * <p>The events to configure</p>
     */
    inline SetCognitoEventsRequest& AddEvents(Aws::String&& key, const char* value) { m_eventsHasBeenSet = true; m_events[key] = value; return *this; }

    /**
     * <p>The events to configure</p>
     */
    inline SetCognitoEventsRequest& AddEvents(const char* key, const char* value) { m_eventsHasBeenSet = true; m_events[key] = value; return *this; }

  private:
    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_events;
    bool m_eventsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
