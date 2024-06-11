/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

  /**
   * <p>A request to configure Cognito Events"</p>"<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetCognitoEventsRequest">AWS
   * API Reference</a></p>
   */
  class SetCognitoEventsRequest : public CognitoSyncRequest
  {
  public:
    AWS_COGNITOSYNC_API SetCognitoEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetCognitoEvents"; }

    AWS_COGNITOSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Cognito Identity Pool to use when configuring Cognito Events</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }
    inline SetCognitoEventsRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}
    inline SetCognitoEventsRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}
    inline SetCognitoEventsRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The events to configure</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::Map<Aws::String, Aws::String>& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::Map<Aws::String, Aws::String>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline SetCognitoEventsRequest& WithEvents(const Aws::Map<Aws::String, Aws::String>& value) { SetEvents(value); return *this;}
    inline SetCognitoEventsRequest& WithEvents(Aws::Map<Aws::String, Aws::String>&& value) { SetEvents(std::move(value)); return *this;}
    inline SetCognitoEventsRequest& AddEvents(const Aws::String& key, const Aws::String& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }
    inline SetCognitoEventsRequest& AddEvents(Aws::String&& key, const Aws::String& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), value); return *this; }
    inline SetCognitoEventsRequest& AddEvents(const Aws::String& key, Aws::String&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }
    inline SetCognitoEventsRequest& AddEvents(Aws::String&& key, Aws::String&& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), std::move(value)); return *this; }
    inline SetCognitoEventsRequest& AddEvents(const char* key, Aws::String&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }
    inline SetCognitoEventsRequest& AddEvents(Aws::String&& key, const char* value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), value); return *this; }
    inline SetCognitoEventsRequest& AddEvents(const char* key, const char* value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
